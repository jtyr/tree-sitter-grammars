#!/bin/bash
#
# Build tree-sitter grammar shared libraries from source.
#
# Usage: build.sh [options] <language> [<language> ...]
#        build.sh --all
#
# Options:
#   --all         Build all enabled grammars
#   --cc=CMD      C compiler (default: gcc or cc)
#   --output=DIR  Output directory for .so files (default: build/)
#   --strip       Strip debug symbols from output
#
# Requires: C compiler, grammars/<lang>/src/parser.c

set -uo pipefail

SCRIPT_DIR=$(dirname "$0")
REPO_ROOT=$(realpath "$SCRIPT_DIR/../../../..")
REGISTRY="$REPO_ROOT/grammars.yaml"

CC="${CC:-}"
OUTPUT_DIR="$REPO_ROOT/build"
STRIP_SYMBOLS=false
BUILD_ALL=false
LANGUAGES=()

# Detect platform-specific shared library extension
case "$(uname -s)" in
    Darwin) SO_EXT=dylib; SO_FLAGS='-dynamiclib' ;;
    MINGW*|MSYS*|CYGWIN*) SO_EXT=dll; SO_FLAGS='-shared' ;;
    *) SO_EXT=so; SO_FLAGS='-shared' ;;
esac

# Parse arguments
while [ $# -gt 0 ]; do
    case "$1" in
        --all) BUILD_ALL=true ;;
        --cc=*) CC="${1#--cc=}" ;;
        --output=*) OUTPUT_DIR="${1#--output=}" ;;
        --strip) STRIP_SYMBOLS=true ;;
        --*) echo "Unknown option: $1"; exit 1 ;;
        *) LANGUAGES+=("$1") ;;
    esac
    shift
done

# Find compiler
if [ -z "$CC" ]; then
    if command -v gcc >/dev/null 2>&1; then
        CC=gcc
    elif command -v cc >/dev/null 2>&1; then
        CC=cc
    else
        echo 'ERROR: no C compiler found (set CC or install gcc)'
        exit 1
    fi
fi

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

if $BUILD_ALL; then
    while IFS= read -r lang; do
        LANGUAGES+=("$lang")
    done < <(get_enabled_grammars)
fi

if [ ${#LANGUAGES[@]} -eq 0 ]; then
    echo 'Usage: build.sh [--all] [--cc=CMD] [--output=DIR] [--strip] <language> [...]'
    exit 1
fi

mkdir -p "$OUTPUT_DIR"

build_one() {
    local lang=$1
    local src_dir="$REPO_ROOT/grammars/$lang/src"

    if [ ! -f "$src_dir/parser.c" ]; then
        echo "ERROR: $lang: $src_dir/parser.c not found"
        return 1
    fi

    local output="$OUTPUT_DIR/$lang.$SO_EXT"

    echo "  BUILD    $lang.$SO_EXT"
    if [ -f "$src_dir/scanner.cc" ]; then
        # C++ scanner: compile C and C++ separately, then link with C++ linker
        # Derive CXX from CC if not set (e.g. aarch64-linux-gnu-gcc -> aarch64-linux-gnu-g++)
        local cxx="${CXX:-}"
        if [ -z "$cxx" ]; then
            # Extract compiler name (first word) and any flags
            local cc_cmd="${CC%% *}"
            local cc_flags="${CC#"$cc_cmd"}"
            case "$cc_cmd" in
                *gcc) cxx="${cc_cmd%gcc}g++$cc_flags" ;;
                *clang) cxx="clang++$cc_flags" ;;
                *cc) cxx="${cc_cmd%cc}c++$cc_flags" ;;
                *) cxx="$CC" ;;
            esac
        fi
        if ! $CC -fPIC -O2 -I"$src_dir" -c -o "$OUTPUT_DIR/$lang.parser.o" "$src_dir/parser.c" 2>&1; then
            echo "ERROR: $lang: parser compilation failed"
            return 1
        fi
        if ! $cxx -fPIC -O2 -I"$src_dir" -c -o "$OUTPUT_DIR/$lang.scanner.o" "$src_dir/scanner.cc" 2>&1; then
            echo "ERROR: $lang: scanner compilation failed"
            rm -f "$OUTPUT_DIR/$lang.parser.o"
            return 1
        fi
        if ! $cxx $SO_FLAGS -o "$output" "$OUTPUT_DIR/$lang.parser.o" "$OUTPUT_DIR/$lang.scanner.o" 2>&1; then
            echo "ERROR: $lang: linking failed"
            rm -f "$OUTPUT_DIR/$lang.parser.o" "$OUTPUT_DIR/$lang.scanner.o"
            return 1
        fi
        rm -f "$OUTPUT_DIR/$lang.parser.o" "$OUTPUT_DIR/$lang.scanner.o"
    else
        local sources=("$src_dir/parser.c")
        if [ -f "$src_dir/scanner.c" ]; then
            sources+=("$src_dir/scanner.c")
        fi
        if ! $CC $SO_FLAGS -fPIC -O2 -I"$src_dir" -o "$output" "${sources[@]}" 2>&1; then
            echo "ERROR: $lang: compilation failed"
            return 1
        fi
    fi

    if $STRIP_SYMBOLS; then
        case "$(uname -s)" in
            Darwin) strip -x "$output" 2>/dev/null ;;
            *) strip --strip-debug "$output" 2>/dev/null ;;
        esac || true
    fi
}

failed=0
total=${#LANGUAGES[@]}
built=0

for lang in "${LANGUAGES[@]}"; do
    if build_one "$lang"; then
        built=$((built + 1))
    else
        failed=$((failed + 1))
    fi
done

echo "Built $built/$total grammars ($failed failed)"

if [ $failed -gt 0 ]; then
    exit 1
fi
