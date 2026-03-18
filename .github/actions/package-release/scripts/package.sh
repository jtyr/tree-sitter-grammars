#!/bin/bash
#
# Package built grammar libraries into release tarballs.
#
# Usage: package.sh --platform=PLATFORM --build-dir=DIR --output=DIR
#
# Creates two tarballs per platform:
#   tree-sitter-grammars-<platform>-shared.tar.gz  (.so/.dylib/.dll files)
#   tree-sitter-grammars-<platform>-static.tar.gz  (.a files)
#
# Each tarball contains per-language directories with library and query files:
#   tree-sitter-grammars-<platform>-shared/
#     python/
#       python.so
#       queries/
#         highlights.scm
#     checksums.sha256
#
# Platforms: x86_64-linux, aarch64-linux, aarch64-macos, x86_64-macos, x86_64-windows

set -uo pipefail

SCRIPT_DIR=$(dirname "$0")
REPO_ROOT=$(realpath "$SCRIPT_DIR/../../../..")
REGISTRY="$REPO_ROOT/grammars.yaml"

PLATFORM=""
BUILD_DIR=""
OUTPUT_DIR=""

while [ $# -gt 0 ]; do
    case "$1" in
        --platform=*) PLATFORM="${1#--platform=}" ;;
        --build-dir=*) BUILD_DIR="${1#--build-dir=}" ;;
        --output=*) OUTPUT_DIR="${1#--output=}" ;;
        --*) echo "Unknown option: $1"; exit 1 ;;
    esac
    shift
done

if [ -z "$PLATFORM" ] || [ -z "$BUILD_DIR" ] || [ -z "$OUTPUT_DIR" ]; then
    echo 'Usage: package.sh --platform=PLATFORM --build-dir=DIR --output=DIR'
    exit 1
fi

# Detect expected extension from platform name
case "$PLATFORM" in
    *-macos) SO_EXT=dylib ;;
    *-windows) SO_EXT=dll ;;
    *) SO_EXT=so ;;
esac

# Get all enabled grammars with hasParser (portable, no yq dependency)
get_enabled_grammars() {
    awk '
        /^- language:/ { lang=$3; enabled=1; has_parser=0 }
        /^  enabled: false/ { enabled=0 }
        /^  metadata:/ { in_meta=1 }
        in_meta && /hasParser: true/ { has_parser=1 }
        /^$/ || /^- / { if (lang && enabled && has_parser) print lang; in_meta=0 }
        END { if (lang && enabled && has_parser) print lang }
    ' "$REGISTRY"
}

# Package one tarball (shared or static)
package_variant() {
    local variant=$1  # "shared" or "static"
    local ext=$2      # file extension to look for

    local tarball_name="tree-sitter-grammars-$PLATFORM-$variant"
    local staging="$OUTPUT_DIR/$tarball_name"

    rm -rf "$staging"
    mkdir -p "$staging"

    local included=0
    local skipped=0
    local skipped_list=""

    for lang in $(get_enabled_grammars); do
        local lib_file="$BUILD_DIR/$lang.$ext"
        local queries_dir="$REPO_ROOT/grammars/$lang/queries"

        if [ ! -f "$lib_file" ]; then
            skipped=$((skipped + 1))
            skipped_list="$skipped_list $lang"
            continue
        fi

        mkdir -p "$staging/$lang"
        cp "$lib_file" "$staging/$lang/$lang.$ext"

        # Copy query files and their LICENSE if present
        if [ -d "$queries_dir" ]; then
            mkdir -p "$staging/$lang/queries"
            cp "$queries_dir"/*.scm "$staging/$lang/queries/" 2>/dev/null
            if [ -f "$queries_dir/LICENSE" ]; then
                cp "$queries_dir/LICENSE" "$staging/$lang/queries/"
            fi
        fi

        # Copy grammar LICENSE if present
        if [ -f "$REPO_ROOT/grammars/$lang/LICENSE" ]; then
            cp "$REPO_ROOT/grammars/$lang/LICENSE" "$staging/$lang/"
        fi

        included=$((included + 1))
    done

    if [ $included -eq 0 ]; then
        echo "WARNING: no grammars to package for $variant"
        rm -rf "$staging"
        return 1
    fi

    # Create tarball
    (cd "$OUTPUT_DIR" && tar czf "$tarball_name.tar.gz" "$tarball_name")
    rm -rf "$staging"

    # Append checksum to the shared checksums file
    (cd "$OUTPUT_DIR" && sha256sum "$tarball_name.tar.gz") >> "$OUTPUT_DIR/tree-sitter-grammars.sha256"

    echo "Package: $OUTPUT_DIR/$tarball_name.tar.gz"
    echo "  $included grammars included"

    if [ $skipped -gt 0 ]; then
        echo "  $skipped grammars skipped (not built):$skipped_list"
    fi
}

mkdir -p "$OUTPUT_DIR"

package_variant "shared" "$SO_EXT"
package_variant "static" "a"
