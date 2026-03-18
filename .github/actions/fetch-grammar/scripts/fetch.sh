#!/bin/bash
#
# Fetch tree-sitter grammar source files from upstream.
#
# Usage: fetch.sh [--all] <language> [<language> ...]
#
# Reads grammars.yaml to find the upstream URL, ref, and optional path/extraFiles.
# Downloads parser.c, scanner.c (if present), extra headers, and query files
# into grammars/<language>/src/ and grammars/<language>/queries/.
#
# Requires: git, yq

set -uo pipefail

SCRIPT_DIR=$(dirname "$0")
REPO_ROOT=$(realpath "$SCRIPT_DIR/../../../..")
REGISTRY="$REPO_ROOT/grammars.yaml"

if [ ! -f "$REGISTRY" ]; then
    echo "ERROR: $REGISTRY not found"
    exit 1
fi

if [ $# -eq 0 ]; then
    echo 'Usage: fetch.sh [--all] <language> [<language> ...]'
    exit 1
fi

if [ "$1" = "--all" ]; then
    shift
    # shellcheck disable=SC2046
    set -- $(yq -r '.[] | select(.enabled != false) | .language' "$REGISTRY" | sort -u)
fi

# Parse grammar entries from grammars.yaml.
# Returns one line per enabled entry for the given language.
# Pipe-separated fields with '-' for empty values to avoid delimiter collapsing.
parse_grammar() {
    local lang=$1

    yq -r ".[] | select(.language == \"$lang\" and .enabled != false) |
        (.url // \"\") + \"|\" +
        (.ref // \"\") + \"|\" +
        (.path // \"-\") + \"|\" +
        (.name // \"-\") + \"|\" +
        (.branch // \"main\") + \"|\" +
        ((.extraFiles // [] | join(\",\")) | select(length > 0) // \"-\") + \"|\" +
        ((.generate // false) | tostring) + \"|\" +
        (((.metadata.hasParser // false) or (.metadata.hasScanner // false)) | not | tostring) + \"|\" +
        ((.ignoreFiles // [] | join(\",\")) | select(length > 0) // \"-\")
    " "$REGISTRY"
}

fetch_entry() {
    local lang=$1
    local url ref path name _branch extra_files needs_generate queries_only ignored_files
    IFS='|' read -r url ref path name _branch extra_files needs_generate queries_only ignored_files

    # Replace placeholder '-' with empty string
    [ "$path" = "-" ] && path=""
    [ "$name" = "-" ] && name=""
    [ "$extra_files" = "-" ] && extra_files=""
    [ "$ignored_files" = "-" ] && ignored_files=""

    if [ "$queries_only" = "true" ]; then
        echo "Fetching $lang queries from $url (ref: $ref)"
    else
        echo "Fetching $lang from $url (ref: $ref)"
    fi

    local tmpdir
    tmpdir=$(mktemp -d)
    trap 'rm -rf "$tmpdir"' RETURN

    # Clone with minimal depth
    if ! git clone --quiet --depth 1 --branch "$ref" "$url" "$tmpdir/repo" 2>/dev/null; then
        # If --branch fails (SHA refs), do a full clone and checkout
        git clone --quiet "$url" "$tmpdir/repo" || return 1
        git -C "$tmpdir/repo" checkout --quiet "$ref" || return 1
    fi

    local src_root="$tmpdir/repo"
    if [ -n "$path" ]; then
        src_root="$tmpdir/repo/$path"
    fi

    # Set up output directories
    local out_src="$REPO_ROOT/grammars/$lang/src"
    local out_queries="$REPO_ROOT/grammars/$lang/queries"

    # Queries-only entries: skip parser/scanner, only fetch .scm files
    if [ "$queries_only" != "true" ]; then
        mkdir -p "$out_src"

        # Generate parser.c if needed (grammars that only ship grammar.js)
        if [ "$needs_generate" = "true" ]; then
            if ! command -v tree-sitter >/dev/null 2>&1; then
                echo "ERROR: $lang: requires generation but tree-sitter CLI not found"
                return 1
            fi
            echo "  generating parser.c..."
            if ! (cd "$src_root" && tree-sitter generate 2>&1); then
                echo "ERROR: $lang: tree-sitter generate failed"
                return 1
            fi
        fi

        # Copy parser.c (required)
        if [ ! -f "$src_root/src/parser.c" ]; then
            echo "ERROR: $lang: parser.c not found in $src_root/src/"
            return 1
        fi

        # Copy only files needed for compilation
        rm -rf "$out_src"
        mkdir -p "$out_src"
        cp "$src_root/src/parser.c" "$out_src/"
        if [ -f "$src_root/src/scanner.c" ]; then
            cp "$src_root/src/scanner.c" "$out_src/"
        fi
        if [ -f "$src_root/src/scanner.cc" ]; then
            cp "$src_root/src/scanner.cc" "$out_src/"
        fi
        # Copy all header files from src/
        for hdr in "$src_root/src"/*.h; do
            [ -f "$hdr" ] || continue
            cp "$hdr" "$out_src/"
        done
        # Copy .h and .c files from subdirectories (some scanners
        # #include .c files from subdirectories like tree_sitter_comment/)
        (cd "$src_root/src" && find . -mindepth 2 \( -name '*.h' -o -name '*.c' \) -print0) | \
            while IFS= read -r -d '' f; do
                dir="$out_src/$(dirname "$f")"
                mkdir -p "$dir"
                cp "$src_root/src/$f" "$dir/"
            done

        # For monorepos: resolve relative includes that reach outside src/
        # (e.g. ../../common/scanner.h). Copy referenced files into src/ and
        # rewrite the include paths to avoid collisions between grammars.
        if [ -n "$path" ]; then
            grep -rh '#include "' "$out_src" 2>/dev/null | \
                sed -n 's|.*#include "\(\.\./[^"]*\)".*|\1|p' | \
                sort -u | while read -r inc; do
                    src_file="$src_root/src/$inc"
                    if [ -f "$src_file" ]; then
                        flat_name=$(basename "$inc")
                        cp "$src_file" "$out_src/$flat_name"
                        # Rewrite the include to use the flattened name
                        inc_escaped=${inc//\//\\/}
                        inc_escaped=${inc_escaped//./\\.}
                        sed -i "s|\"$inc_escaped\"|\"$flat_name\"|g" "$out_src"/*.c "$out_src"/*.h 2>/dev/null
                    fi
                done
        fi

        # Copy extra files listed in grammars.yaml
        if [ -n "$extra_files" ]; then
            IFS=',' read -ra extras <<< "$extra_files"
            for ef in "${extras[@]}"; do
                if [ -f "$src_root/src/$ef" ]; then
                    cp "$src_root/src/$ef" "$out_src/$ef"
                else
                    echo "WARNING: $lang: extra file '$ef' not found in $src_root/src/"
                fi
            done
        fi
    fi

    # Copy query files (only create directory if .scm files exist)
    # For queries-only entries, .scm files are directly in $src_root
    local queries_dir="$src_root/queries"
    if [ "$queries_only" = "true" ]; then
        queries_dir="$src_root"
    fi
    if [ "$queries_only" != "true" ]; then
        rm -rf "$out_queries"
    fi
    if [ -d "$queries_dir" ]; then
        local has_scm=false
        for scm in "$queries_dir"/*.scm; do
            [ -f "$scm" ] || continue
            local scm_name
            scm_name=$(basename "$scm")
            # For queries-only entries, skip files that already exist from upstream
            if [ "$queries_only" = "true" ] && [ -f "$out_queries/$scm_name" ]; then
                continue
            fi
            if ! $has_scm; then
                mkdir -p "$out_queries"
                has_scm=true
            fi
            cp "$scm" "$out_queries/"
        done
        # Replace neovim-specific predicates with standard tree-sitter equivalents
        if $has_scm && [ "$queries_only" = "true" ]; then
            sed -i 's/#lua-match?/#match?/g; s/#vim-match?/#match?/g' "$out_queries"/*.scm
        fi
    fi

    # Copy LICENSE file from repository root
    local repo_root="$tmpdir/repo"
    local out_dir="$REPO_ROOT/grammars/$lang"
    if [ "$queries_only" = "true" ]; then
        # For queries-only entries, place LICENSE in the queries directory
        if [ -d "$out_dir/queries" ]; then
            rm -f "$out_dir/queries"/LICENSE*
            for lic in "$repo_root"/LICENSE*; do
                [ -f "$lic" ] || continue
                cp "$lic" "$out_dir/queries/"
                break
            done
        fi
    else
        rm -f "$out_dir"/LICENSE
        for lic in "$repo_root"/LICENSE*; do
            [ -f "$lic" ] || continue
            cp "$lic" "$out_dir/"
        done
    fi

    # Apply known source fixes
    # Perl: rename bsearch() to tsp_bsearch() to avoid glibc clash
    if [ "$lang" = "perl" ] && [ -f "$out_src/bsearch.h" ]; then
        sed -i 's/void \*bsearch(/void *tsp_bsearch(/' "$out_src/bsearch.h"
        sed -i 's/return bsearch(/return tsp_bsearch(/' "$out_src/tsp_unicode.h"
    fi

    echo "  -> grammars/$lang/ updated"
}

fetch_one() {
    local lang=$1
    local entries

    entries=$(parse_grammar "$lang")
    if [ -z "$entries" ]; then
        echo "ERROR: no enabled grammar found for '$lang' in $REGISTRY"
        return 1
    fi

    local result=0
    while IFS= read -r entry; do
        if ! echo "$entry" | fetch_entry "$lang"; then
            result=1
        fi
    done <<< "$entries"

    # Remove ignored files after all entries are processed (so nvim queries
    # don't re-add files that were removed from upstream)
    local all_ignored
    all_ignored=$(yq -r ".[] | select(.language == \"$lang\" and .enabled != false and .ignoreFiles) | .ignoreFiles[]" "$REGISTRY")
    if [ -n "$all_ignored" ]; then
        while IFS= read -r ig; do
            local target="$REPO_ROOT/grammars/$lang/$ig"
            if [ -f "$target" ]; then
                rm -f "$target"
                echo "  removed ignored file: $ig"
                local parent
                parent=$(dirname "$target")
                rmdir "$parent" 2>/dev/null || true
            fi
        done <<< "$all_ignored"
    fi

    return $result
}

failed=0
for lang in "$@"; do
    if ! fetch_one "$lang"; then
        echo "FAILED: $lang"
        failed=$((failed + 1))
    fi
done

if [ $failed -gt 0 ]; then
    echo "$failed grammar(s) failed to fetch"
    exit 1
fi

echo 'Done.'
