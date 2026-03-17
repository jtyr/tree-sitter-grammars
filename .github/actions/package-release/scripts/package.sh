#!/bin/bash
#
# Package built grammar shared libraries into release tarballs.
#
# Usage: package.sh --platform=PLATFORM --build-dir=DIR --output=DIR
#
# Creates a tarball containing per-language directories with .so and query files:
#   tree-sitter-grammars-<platform>/
#     python/
#       python.so
#       queries/
#         highlights.scm
#     checksums.sha256
#     filelist.txt
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

TARBALL_NAME="tree-sitter-grammars-$PLATFORM"
STAGING="$OUTPUT_DIR/$TARBALL_NAME"

rm -rf "$STAGING"
mkdir -p "$STAGING"

# Get all enabled grammars
get_enabled_grammars() {
    yq -r '.[] | select(.enabled != false and .metadata.hasParser == true) | .language' "$REGISTRY"
}

included=0
skipped=0
skipped_list=""

for lang in $(get_enabled_grammars); do
    so_file="$BUILD_DIR/$lang.$SO_EXT"
    queries_dir="$REPO_ROOT/grammars/$lang/queries"

    if [ ! -f "$so_file" ]; then
        skipped=$((skipped + 1))
        skipped_list="$skipped_list $lang"
        continue
    fi

    # Create language directory
    mkdir -p "$STAGING/$lang"
    cp "$so_file" "$STAGING/$lang/$lang.$SO_EXT"

    # Copy query files and their LICENSE if present
    if [ -d "$queries_dir" ]; then
        mkdir -p "$STAGING/$lang/queries"
        cp "$queries_dir"/*.scm "$STAGING/$lang/queries/" 2>/dev/null
        if [ -f "$queries_dir/LICENSE" ]; then
            cp "$queries_dir/LICENSE" "$STAGING/$lang/queries/"
        fi
    fi

    # Copy grammar LICENSE if present
    if [ -f "$REPO_ROOT/grammars/$lang/LICENSE" ]; then
        cp "$REPO_ROOT/grammars/$lang/LICENSE" "$STAGING/$lang/"
    fi

    included=$((included + 1))
done

if [ $included -eq 0 ]; then
    echo 'ERROR: no grammars to package'
    exit 1
fi

# Create tarball
(cd "$OUTPUT_DIR" && tar czf "$TARBALL_NAME.tar.gz" "$TARBALL_NAME")

# Append checksum to the shared checksums file
(cd "$OUTPUT_DIR" && sha256sum "$TARBALL_NAME.tar.gz") >> "$OUTPUT_DIR/tree-sitter-grammars.sha256"

echo "Package: $OUTPUT_DIR/$TARBALL_NAME.tar.gz"
echo "  $included grammars included"

if [ $skipped -gt 0 ]; then
    echo "  $skipped grammars skipped (not built):$skipped_list"
fi

# Write skipped list for release notes
if [ -n "$skipped_list" ]; then
    echo "$skipped_list" > "$OUTPUT_DIR/$TARBALL_NAME.skipped"
fi
