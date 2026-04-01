# Tree-sitter Grammar Repository

Pre-built tree-sitter grammar shared libraries and query files for syntax
highlighting. Originally created for
[Midnight Commander](https://github.com/MidnightCommander/mc) but designed to
be editor-agnostic.

## Overview

This repository serves as a resilient, centralized source of tree-sitter
grammar binaries and query files. It:

- Stores parser/scanner source code and query files from upstream grammar
  repositories to protect against upstream deletion
- Builds shared libraries (`.so`/`.dylib`/`.dll`) for multiple platforms
- Validates all query files against their grammars
- Publishes versioned release tarballs

See [GRAMMARS.md](GRAMMARS.md) for a full inventory of all grammars with their
metadata.

## Grammar Registry

All grammars are defined in `grammars.yaml`. Each entry specifies:

```yaml
- language: python
  url: https://github.com/tree-sitter/tree-sitter-python
  ref: v0.25.0           # tag or commit SHA
  # Optional fields (omit when default):
  # name: python         # tree_sitter_<name>() symbol, omit if same as language
  # path: .              # subdirectory for monorepos, omit if root
  # queryPath: queries   # query files location (relative to repo root), for
  #                      # monorepos where queries are not under path/queries/
  # branch: main         # omit if main, specify for master or other branches
  # generate: true       # needs tree-sitter generate (no parser.c committed)
  # extraFiles: []       # extra headers needed for compilation
  # ignoreFiles: []      # files to remove after fetch (broken upstream files)
  # enabled: true        # set false to disable
  # note: reason         # explanation for disabled grammars
  metadata:              # all boolean fields default to false, only list true values
    hasParser: true
    hasScanner: true
    hasHighlights: true
    hasLocals: true
    hasIndents: true
    hasTags: true
    gitTags: true
    abi: 15
```

A language may have multiple entries in the registry. For example, a grammar
whose upstream repository does not include query files can have a second entry
pointing to a different repository that provides only `.scm` files. The fetch
script processes all enabled entries for a language and merges the results into
a single `grammars/<language>/` directory. The queries-only entry is detected
automatically from the metadata (`hasParser` and `hasScanner` both absent or
false).

### Query sources

Most grammars ship their own `.scm` query files. For grammars that do not,
query files are sourced from the
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
repository when available. Neovim-specific predicates (`#lua-match?`,
`#vim-match?`) are replaced with the standard tree-sitter `#match?` predicate
during fetch. When queries come from a different repository than the parser,
the query repository's LICENSE file is placed inside the `queries/` directory.

### Selection criteria

For languages with multiple upstream grammar repositories, one is chosen as
the default using the following priority:

1. Official [`tree-sitter`](https://github.com/tree-sitter) org repository
2. Community [`tree-sitter-grammars`](https://github.com/tree-sitter-grammars) org repository
3. Repository with both parser and highlights.scm
4. Repository with parser.c (over those requiring generation)
5. First listed

Disabled variants remain in `grammars.yaml` with `enabled: false` and a `note`
explaining the reason. Users can enable an alternative by setting `enabled: true`
on their preferred variant and disabling the current default.

### Inclusion criteria

A grammar is included if it has at least `parser.c` committed in its upstream
repository. Grammars requiring `tree-sitter generate` (only `grammar.js`
available) are marked with `generate: true` and generated during
fetch using the `tree-sitter` CLI.

For syntax highlighting, `highlights.scm` is required. Grammars without it
can still be used for AST navigation, code folding, and other features by
editors that support those capabilities.

### Branch convention

The default branch is assumed to be `main`. Repositories using `master` or
other branch names must specify `branch` explicitly in `grammars.yaml`.

### ABI compatibility

Tree-sitter grammar ABI versions 13, 14, and 15 are all supported. The
tree-sitter runtime library is backward compatible within the range defined by
`TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION` (13) through
`TREE_SITTER_LANGUAGE_VERSION` (15). No ABI restriction is applied.

### Scanner files

The scanner (`scanner.c`) is an optional hand-written component that handles
tokenization which cannot be expressed in the declarative grammar rules (e.g.,
Python indentation, Bash heredocs, Ruby string interpolation). When present,
it must be included alongside `parser.c` as the parser will not function
correctly without it.

Most scanners are written in C (`scanner.c`). A few use C++ (`scanner.cc`).
The build script handles both: C scanners are compiled with `gcc`, C++ scanners
are compiled with `g++`, and the object files are linked together.

## Repository structure

```text
tree-sitter-grammars/
  grammars.yaml                    # grammar registry
  GRAMMARS.md                      # auto-generated inventory table
  LICENSE                          # repository license (MIT)
  grammars/                        # stored parser/scanner/query files
    python/
      LICENSE                      # upstream grammar license
      src/
        parser.c
        scanner.c
      queries/
        highlights.scm
        locals.scm
    html/
      LICENSE
      src/
        parser.c
        scanner.c
        tag.h
      queries/
        highlights.scm
        injections.scm
    graphql/                       # example: queries from nvim-treesitter
      LICENSE                      # grammar license
      src/
        parser.c
      queries/
        LICENSE                    # nvim-treesitter license (Apache-2.0)
        highlights.scm
        injections.scm
  scripts/
    generate-grammars-md.sh        # regenerate GRAMMARS.md from grammars.yaml
  .github/
    workflows/
      pr.yaml                     # lint, build, validate on PRs
      updater.yaml                # check upstream for updates (Saturday)
      releaser.yaml               # build, package, release (Sunday)
    actions/
      fetch-grammar/              # download grammar from upstream
      build-grammar/              # compile shared library from sources
      validate-grammar/           # verify .scm files compile against grammar
      package-release/            # create tarballs, checksums, file list
      detect-changes/             # find changed grammars in a PR
      check-updates/              # check upstream for newer versions
      check-release/              # check if new release is needed
      extract-tarball/            # extract .so files from release tarball
      create-release/             # generate release notes and publish
```

The `grammars/` directory mirrors the upstream repository layout per grammar:
`src/` for parser/scanner source files (matching upstream convention) and
`queries/` for `.scm` query files. Extra headers needed for compilation
(e.g., `tag.h`, `unicode.h`) are stored alongside `parser.c` in `src/`.

All scripts in `.github/actions/*/scripts/` are designed to be executable
ad-hoc for local development and testing, not only within GitHub Actions.

## Licensing

This repository is licensed under the [MIT License](LICENSE).

Each grammar in `grammars/` includes its upstream LICENSE file. When query
files are sourced from a different repository (e.g., nvim-treesitter), the
query repository's license is placed inside the `queries/` directory.

## Query files

Each grammar may include one or more `.scm` query files:

| File | Purpose | Used by MC |
|------|---------|------------|
| `highlights.scm` | Syntax highlighting rules | Yes |
| `locals.scm` | Scope and variable tracking | No |
| `injections.scm` | Language injection rules | No |
| `folds.scm` | Code folding ranges | No |
| `indents.scm` | Auto-indentation rules | No |
| `tags.scm` | Symbol navigation/tags | No |

Query files from upstream grammar repositories are stored unmodified. Query
files sourced from nvim-treesitter have neovim-specific predicates
(`#lua-match?`, `#vim-match?`) replaced with the standard `#match?` predicate.

MC maps the standard capture names (`@keyword`, `@function`, `@string`, etc.)
to its own color scheme via a separate color mapping configuration.

## Release packages

Releases are published as tarballs, one per platform:

```text
tree-sitter-grammars-x86_64-linux.tar.gz
tree-sitter-grammars-aarch64-linux.tar.gz
tree-sitter-grammars-aarch64-macos.tar.gz
tree-sitter-grammars-x86_64-macos.tar.gz
tree-sitter-grammars-x86_64-windows.tar.gz
```

Each tarball contains all enabled grammars:

```text
tree-sitter-grammars-x86_64-linux/
  python/
    python.so
    LICENSE
    queries/
      highlights.scm
      locals.scm
  bash/
    bash.so
    LICENSE
    queries/
      highlights.scm
  html/
    html.so
    LICENSE
    queries/
      highlights.scm
      injections.scm
```

A `tree-sitter-grammars.sha256` file with SHA-256 checksums for all tarballs
is published alongside the release.

Shared library naming is platform-specific: `.so` on Linux, `.dylib` on macOS,
`.dll` on Windows. Consumers using GLib's `g_module_open()` can omit the
extension as it is appended automatically based on the platform.

Libraries are stripped of debug symbols before packaging. Grammar parsers are
generated code that is not typically debugged. Developers needing debug symbols
can rebuild from the source files stored in the `grammars/` directory.

### Release tags

Tags follow calendar versioning: `YYYY.MM.DD`, with an optional `+N` build
suffix for multiple releases on the same day (e.g., `2026.03.17+2`).

To create a release:

```bash
git tag 2026.03.17
git push --tags
```

Release notes include a list of grammars updated since the last release.

### Download URLs

The tarball URL is stable across releases for a given platform:

```text
# Latest release
https://github.com/<org>/tree-sitter-grammars/releases/latest/download/tree-sitter-grammars-x86_64-linux.tar.gz

# Specific version
https://github.com/<org>/tree-sitter-grammars/releases/download/2026.03.17/tree-sitter-grammars-x86_64-linux.tar.gz
```

## Build pipeline

### Compilation

Each grammar is compiled with a single `gcc` (or `clang`) invocation:

```bash
gcc -shared -fPIC -O2 -Igrammars/<lang>/src -o <lang>.so \
    grammars/<lang>/src/parser.c \
    grammars/<lang>/src/scanner.c  # if present
```

No tree-sitter CLI, Node.js, or Rust toolchain is required for compilation.
Only a C compiler and the tree-sitter internal headers
(`tree_sitter/parser.h`) which are included by `parser.c`.

Grammars marked with `generate: true` need the `tree-sitter` CLI to
generate `parser.c` from `grammar.js` before compilation. This is handled
automatically by the fetch script.

### Platform matrix

| Platform | Runner | Compiler | Output |
|----------|--------|----------|--------|
| Linux x86_64 | ubuntu-latest | gcc (native) | .so |
| Linux aarch64 | ubuntu-latest | aarch64-linux-gnu-gcc (cross) | .so |
| macOS aarch64 | macos-latest | clang (native) | .dylib |
| macOS x86_64 | macos-latest | clang -arch x86_64 (cross) | .dylib |
| Windows x86_64 | windows-latest | gcc (MinGW) | .dll |

Linux aarch64 is cross-compiled from the Ubuntu runner. Grammar shared
libraries are self-contained (no external library dependencies at compile
time), making cross-compilation straightforward.

### Validation

All `.scm` query files are validated by compiling them with `ts_query_new()`
against their grammar. This catches invalid node names, field names, and
query syntax errors that would cause silent highlighting failures at runtime.

## Workflows

### PR Workflow (`pr.yaml`)

Triggered on all pull requests. Runs pre-commit hooks (YAML lint, shellcheck,
markdown lint, GRAMMARS.md sync check) on every PR. For PRs that modify
`grammars.yaml` or files under `grammars/`, additionally builds and validates
only the changed grammars across all platforms. A failing grammar blocks the
PR from merging.

### Updater Workflow (`updater.yaml`)

Runs on a weekly schedule (Saturday). For each enabled grammar in
`grammars.yaml`:

1. Checks the upstream repository for newer commits on the configured branch
   (or newer tags if the grammar uses tags)
2. If changes are found, downloads the updated source files and query files
3. Updates `ref` in `grammars.yaml`
4. Commits the changes and creates a pull request

The PR is then picked up by the PR workflow for build/test validation. A human
reviews and merges.

If an upstream repository is unreachable (deleted, private, or temporarily
down), the updater skips that grammar and continues with the rest. The existing
source files in `grammars/` remain intact.

### Releaser Workflow (`releaser.yaml`)

Triggered in two ways:

- **Scheduled** (Sunday): automatically releases if there are new commits
  since the last release, using a `YYYY.MM.DD` tag
- **Tag push**: manually push a tag to trigger a release
  (`git tag 2026.03.17 && git push --tags`). Accepts `YYYY.MM.DD` and
  `YYYY.MM.DD+N` for multiple releases on the same day

Steps:

1. Builds all enabled grammars for all platforms
2. Strips debug symbols
3. Validates query files against built grammars
4. Packages into per-platform tarballs with checksums and file lists
5. Creates a GitHub release with the tarballs attached

If a grammar fails to build, it is excluded from the release tarball for that
platform. The release notes document which grammars were excluded and why.

## Contributing

### Adding a new grammar

1. Find the upstream repository (see the
   [tree-sitter wiki](https://github.com/tree-sitter/tree-sitter/wiki/List-of-parsers))
2. Add an entry to `grammars.yaml` with the repository URL, ref, and metadata
3. Run the fetch script to download the source files:
   `.github/actions/fetch-grammar/scripts/fetch.sh <language>`
4. Run the build script to verify compilation:
   `.github/actions/build-grammar/scripts/build.sh <language>`
5. Run the validation script to verify query files:
   `.github/actions/validate-grammar/scripts/validate.sh <language>`
6. Regenerate the inventory: `scripts/generate-grammars-md.sh`
7. Submit a pull request

### Updating a grammar

The updater workflow handles this automatically. For manual updates, change the
`ref` in `grammars.yaml` and re-run the fetch script.

### Disabling a grammar

Set `enabled: false` and add a `note` explaining the reason:

```yaml
- language: example
  url: https://github.com/example/tree-sitter-example
  ref: abc123
  enabled: false
  note: Build fails on aarch64
```

## Local testing

All scripts can be run locally for development and testing.

### Full pipeline

```bash
# Fetch all grammars
.github/actions/fetch-grammar/scripts/fetch.sh --all

# Build all grammars
.github/actions/build-grammar/scripts/build.sh --all

# Validate all query files
.github/actions/validate-grammar/scripts/validate.sh --all

# Package release tarball
.github/actions/package-release/scripts/package.sh \
    --platform=x86_64-linux \
    --build-dir=build \
    --output=release

# Preview release notes (dry run)
.github/actions/create-release/scripts/create-release.sh \
    --dry-run 2026.03.18 release

# Clean up build artifacts
rm -rf build release
```

### Single grammar

```bash
.github/actions/fetch-grammar/scripts/fetch.sh python
.github/actions/build-grammar/scripts/build.sh python
.github/actions/validate-grammar/scripts/validate.sh python
rm -rf build
```

### Regenerate inventory

After modifying `grammars.yaml`, regenerate the inventory table:

```bash
scripts/generate-grammars-md.sh
```

### Check for updates

Check upstream repositories for newer versions (requires `GITHUB_TOKEN` for
tag-based grammars to avoid API rate limiting):

```bash
export GITHUB_TOKEN=...
.github/actions/check-updates/scripts/check-updates.sh
```
