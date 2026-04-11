# Tree-sitter Grammar Repository

Pre-built tree-sitter grammar shared and static libraries for syntax
highlighting. Originally created for
[Midnight Commander](https://github.com/MidnightCommander/mc) but designed to
be editor-agnostic.

## Overview

This repository serves as a resilient, centralized source of tree-sitter
grammar binaries and query files. It:

- Stores grammar source files (`grammar.js`, `scanner.c`) from upstream
  repositories to protect against upstream deletion
- Generates `parser.c` from `grammar.js` during CI (not stored in the repo)
- Builds shared (`.so`/`.dylib`/`.dll`) and static (`.a`) libraries for
  multiple platforms
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
  # extraFiles: []       # extra headers needed for compilation
  # ignoreFiles: []      # files to remove after fetch (broken upstream files)
  # skipScanner: false   # set true when we maintain our own scanner.c
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
4. First listed

Disabled variants remain in `grammars.yaml` with `enabled: false` and a `note`
explaining the reason. Users can enable an alternative by setting `enabled: true`
on their preferred variant and disabling the current default.

### Inclusion criteria

A grammar is included if it has `grammar.js` in its upstream repository.
The `parser.c` is generated from `grammar.js` during CI using the
`tree-sitter` CLI and is not stored in the repository.

For syntax highlighting, `highlights.scm` is required. Grammars without it
can still be used for AST navigation, code folding, and other features by
editors that support those capabilities.

### C++ scanners

MC is a C-only project and cannot link against C++ code. Grammars with C++
scanners (`scanner.cc`) are rewritten to C (`scanner.c`) and maintained in
this repository. The `skipScanner: true` field in `grammars.yaml` prevents
the fetch script from overwriting our maintained scanner with the upstream
C++ version. Currently this applies to the `sql` grammar.

### Branch convention

The default branch is assumed to be `main`. Repositories using `master` or
other branch names must specify `branch` explicitly in `grammars.yaml`.

### ABI compatibility

Tree-sitter grammar ABI versions 13, 14, and 15 are all supported. The
tree-sitter runtime library is backward compatible within the range defined by
`TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION` (13) through
`TREE_SITTER_LANGUAGE_VERSION` (15). No ABI restriction is applied.

### Tree-sitter version

The tree-sitter CLI and library version is pinned in
`.github/actions/common.sh`. Both the generate step (CLI) and the validate
step (library) use this version to ensure consistency. Updating the version
requires changing only that one file.

## Repository structure

```text
tree-sitter-grammars/
  grammars.yaml                    # grammar registry
  GRAMMARS.md                      # auto-generated inventory table
  LICENSE                          # repository license (MIT)
  grammars/                        # stored grammar source/query files
    python/
      LICENSE                      # upstream grammar license
      grammar.js                   # grammar definition (source of truth)
      src/
        scanner.c                  # hand-written scanner (when present)
      queries/
        highlights.scm
        locals.scm
    html/
      LICENSE
      grammar.js
      src/
        scanner.c
        tag.h                      # scanner header
      queries/
        highlights.scm
        injections.scm
    typescript/                    # monorepo example
      LICENSE
      grammar.js                   # requires('./_parent/common/define-grammar')
      package.json                 # npm deps for grammar.js require()
      src/
        scanner.c
      _parent/                     # files from parent directory in monorepo
        common/
          define-grammar.js
        package.json               # root-level npm deps (e.g. tree-sitter-javascript)
      queries/
        highlights.scm
    haskell/                       # complex grammar with many local JS modules
      LICENSE
      grammar.js
      grammar/                     # local JS modules used by grammar.js
        class.js
        decl.js
        exp.js
        ...
      src/
        scanner.c
        unicode.h
      queries/
        highlights.scm
        locals.scm
  scripts/
    common.sh                      # shared variables (tree-sitter version)
    generate-grammars-md.sh        # regenerate GRAMMARS.md from grammars.yaml
  .github/
    actions/
      common.sh                    # pinned tree-sitter version
      fetch-grammar/               # download grammar from upstream
      generate-grammar/            # generate parser.c from grammar.js
      build-grammar/               # compile shared/static libraries
      validate-grammar/            # verify .scm files compile against grammar
      package-release/             # create tarballs, checksums, file list
      detect-changes/              # find changed grammars in a PR
      check-updates/               # check upstream for newer versions
      check-release/               # check if new release is needed
      extract-tarball/             # extract files from release tarball
      create-release/              # generate release notes and publish
    workflows/
      pr.yaml                      # lint, generate, build, validate on PRs
      updater.yaml                 # check upstream for updates (Saturday)
      releaser.yaml                # generate, build, package, release (Sunday)
```

### What is stored vs generated

| File | Stored in repo | Generated during CI |
|------|:-:|:-:|
| `grammar.js` | Yes | - |
| `scanner.c` / `scanner.cc` | Yes | - |
| Scanner headers (`.h`) | Yes | - |
| Local JS modules (`grammar/*.js`, `dialect/*.js`) | Yes | - |
| `package.json` (when grammar.js uses `require()`) | Yes | - |
| `_parent/` (monorepo parent files) | Yes | - |
| Query files (`.scm`) | Yes | - |
| `parser.c` | No | `tree-sitter generate` |
| `tree_sitter/parser.h` | No | `tree-sitter generate` |
| `node_modules/` | No | `npm install` |
| `.so` / `.dylib` / `.dll` / `.a` | No | `gcc` / `clang` |

## Fetch

The fetch script (`.github/actions/fetch-grammar/scripts/fetch.sh`) downloads
grammar sources from upstream repositories. For each grammar:

1. Clone the upstream repo at the pinned `ref`
2. Copy scanner files (`scanner.c`, headers, subdirectory helpers) into
   `grammars/<lang>/src/` -- skipped if `skipScanner: true`
3. Copy `grammar.js` and all local JS dependencies (`.js` files in
   subdirectories excluding `node_modules/`, `test/`, `examples/`,
   `bindings/`, `docs/`, `scripts/`, `src/`)
4. Copy `package.json` only if `grammar.js` uses `require()`
5. For monorepos (`path` field set):
   - Copy parent-level JS/JSON files referenced via `../` into `_parent/`
   - Rewrite `require('../...')` to `require('./_parent/...')` in `grammar.js`
   - Copy root `package.json` into `_parent/` if it has dependencies
   - Rewrite `require('tree-sitter-<name>/...')` to relative paths pointing
     to our local `grammars/<name>/` -- unless `_parent/package.json` exists
     (npm will resolve them)
6. Copy query files (`.scm`) from the grammar's `queries/` directory
7. Copy LICENSE file from the repository root

The fetch does **not** run `tree-sitter generate` or `npm install`. Generation
is handled separately by the generate step.

## Generate

The generate step (`.github/actions/generate-grammar/`) produces `parser.c`
from `grammar.js` using the `tree-sitter` CLI:

1. Install the pinned `tree-sitter-cli` version via npm
2. Restore parser cache (if enabled)
3. For each grammar:
   - Check cache -- if hit, copy `parser.c` and skip generation
   - Run `npm install` if `package.json` exists (local or in `_parent/`)
   - Run `tree-sitter generate` to produce `parser.c`
   - Store result in cache

### Caching

Generated `parser.c` files are cached between CI runs using GitHub Actions
cache. The cache key is computed per-grammar from the SHA-256 of `grammar.js`,
`scanner.c`, `scanner.cc`, and `package.json`. This means:

- If grammar sources haven't changed, the cached `parser.c` is reused
- Cache is scoped by prefix: `pr-<number>` for PRs, `release` for releases
- `restore-keys` prefix matching allows partial cache hits (e.g. after
  adding a new grammar, existing grammars still hit cache)

npm packages (`~/.npm`) are also cached, shared across all workflows.

## Build

The build step (`.github/actions/build-grammar/`) compiles grammar libraries
from generated `parser.c` and stored `scanner.c`:

```bash
# Shared library
gcc -shared -fPIC -O2 -Igrammars/<lang>/src -o <lang>.so \
    grammars/<lang>/src/parser.c \
    grammars/<lang>/src/scanner.c  # if present

# Static library
gcc -fPIC -O2 -Igrammars/<lang>/src -c -o <lang>.parser.o parser.c
gcc -fPIC -O2 -Igrammars/<lang>/src -c -o <lang>.scanner.o scanner.c
ar rcs <lang>.a <lang>.parser.o <lang>.scanner.o
```

No tree-sitter CLI, Node.js, or Rust toolchain is required for compilation.
Only a C compiler is needed. The `tree_sitter/parser.h` header is generated
alongside `parser.c` during the generate step.

### Platform matrix

| Platform | Runner | Compiler | Shared | Static |
|----------|--------|----------|--------|--------|
| Linux x86_64 | ubuntu-latest | gcc (native) | `.so` | `.a` |
| Linux aarch64 | ubuntu-latest | aarch64-linux-gnu-gcc (cross) | `.so` | `.a` |
| macOS aarch64 | macos-latest | clang (native) | `.dylib` | `.a` |
| macOS x86_64 | macos-latest | clang -arch x86_64 (cross) | `.dylib` | `.a` |
| Windows x86_64 | windows-latest | gcc (MinGW) | `.dll` | `.a` |

### Validation

All `.scm` query files are validated by compiling them with `ts_query_new()`
against their grammar's shared library. This catches invalid node names, field
names, and query syntax errors that would cause highlighting failures at
runtime.

Known limitations handled as warnings (not failures):

- **`; inherits:` directive**: nvim-treesitter feature for query inheritance,
  not supported by the validator
- **Structure errors**: advanced query syntax not supported by the pinned
  tree-sitter library version

## Workflows

### PR Workflow (`pr.yaml`)

Triggered on all pull requests. Concurrent runs on the same PR are cancelled
when a new push arrives.

1. **Lint**: pre-commit hooks (YAML lint, shellcheck, markdown lint,
   GRAMMARS.md sync)
2. **Detect changes**: identify which grammars changed (filters out disabled
   grammars)
3. **Generate** (single runner): generate `parser.c` for changed grammars,
   upload as artifact
4. **Build** (5 platforms in parallel): download generated sources, compile
   shared/static libraries
5. **Validate**: verify query files against built grammars
6. **Auto-approve**: approve PRs from the updater bot if all checks pass

### Updater Workflow (`updater.yaml`)

Runs on a weekly schedule (Saturday). For each enabled grammar:

1. Checks the upstream repository for newer commits on the configured branch
   (or newer tags if the grammar uses tags)
2. If changes are found, fetches the updated source files and query files
3. Updates `ref` in `grammars.yaml`
4. Commits the changes and creates a pull request

The PR is then picked up by the PR workflow for build/test validation.

### Releaser Workflow (`releaser.yaml`)

Triggered in two ways:

- **Scheduled** (Sunday): automatically releases if there are new commits
  since the last release, using a `YYYY.MM.DD` tag
- **Tag push**: manually push a tag to trigger a release

Steps:

1. **Generate** (single runner): generate all parsers with caching, upload as
   artifact
2. **Build** (5 platforms in parallel): download generated sources, compile
   and strip libraries, package into tarballs
3. **Validate**: verify query files against built grammars
4. **Release**: create GitHub release with tarballs and checksums

## Release packages

Releases are published as tarballs, one per platform per library type:

```text
tree-sitter-grammars-x86_64-linux-shared.tar.gz
tree-sitter-grammars-x86_64-linux-static.tar.gz
tree-sitter-grammars-aarch64-linux-shared.tar.gz
tree-sitter-grammars-aarch64-linux-static.tar.gz
...
```

Each tarball contains all enabled grammars:

```text
tree-sitter-grammars-x86_64-linux-shared/
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
```

A `tree-sitter-grammars.sha256` file with SHA-256 checksums for all tarballs
is published alongside the release.

### Release tags

Tags follow calendar versioning: `YYYY.MM.DD`, with an optional `+N` build
suffix for multiple releases on the same day (e.g., `2026.03.17+2`).

### Download URLs

```text
# Latest release
https://github.com/<org>/tree-sitter-grammars/releases/latest/download/tree-sitter-grammars-x86_64-linux-shared.tar.gz

# Specific version
https://github.com/<org>/tree-sitter-grammars/releases/download/2026.03.17/tree-sitter-grammars-x86_64-linux-shared.tar.gz
```

## Licensing

This repository is licensed under the [MIT License](LICENSE).

Each grammar in `grammars/` includes its upstream LICENSE file. When query
files are sourced from a different repository (e.g., nvim-treesitter), the
query repository's license is placed inside the `queries/` directory.

## Contributing

### Adding a new grammar

1. Find the upstream repository (see the
   [tree-sitter wiki](https://github.com/tree-sitter/tree-sitter/wiki/List-of-parsers))
2. Add an entry to `grammars.yaml` with the repository URL, ref, and metadata
3. Run the fetch script:
   `.github/actions/fetch-grammar/scripts/fetch.sh <language>`
4. Run the generate script:
   `.github/actions/generate-grammar/scripts/generate.sh <language>`
5. Run the build script:
   `.github/actions/build-grammar/scripts/build.sh <language>`
6. Run the validation script:
   `.github/actions/validate-grammar/scripts/validate.sh <language>`
7. Regenerate the inventory: `scripts/generate-grammars-md.sh`
8. Submit a pull request

### Updating a grammar

The updater workflow handles this automatically. For manual updates, change the
`ref` in `grammars.yaml` and re-run the fetch script.

### Disabling a grammar

Set `enabled: false` and add a `note` explaining the reason. Remove the
grammar's directory from `grammars/`:

```yaml
- language: example
  url: https://github.com/example/tree-sitter-example
  ref: abc123
  enabled: false
  note: Upstream highlights.scm references non-existent node types at pinned ref
```

```bash
rm -rf grammars/example
```

## Local testing

All scripts can be run locally for development and testing.

### Full pipeline

```bash
# Fetch all grammars
.github/actions/fetch-grammar/scripts/fetch.sh --all

# Generate all parsers
.github/actions/generate-grammar/scripts/generate.sh --all

# Build all grammars
.github/actions/build-grammar/scripts/build.sh --all

# Validate all query files
.github/actions/validate-grammar/scripts/validate.sh --all

# Clean up generated files
find grammars -name "parser.c" -path "*/src/parser.c" -delete
find grammars -type d -name "tree_sitter" -path "*/src/tree_sitter" -exec rm -rf {} +
rm -rf build
```

### Single grammar

```bash
.github/actions/fetch-grammar/scripts/fetch.sh python
.github/actions/generate-grammar/scripts/generate.sh python
.github/actions/build-grammar/scripts/build.sh python
.github/actions/validate-grammar/scripts/validate.sh python
```
