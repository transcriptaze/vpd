![build](https://github.com/transcriptaze/vpd/workflows/build/badge.svg)

# vcv-panel-designer

Web app for basic VCV panel layout.

## Getting Started

### _web-app_

### Releases

### Running locally

## Development Notes

You need a **bunch** of tools:
- _make_ (optional but recommended)
- [_tree-sitter_](https://tree-sitter.github.io/tree-sitter)
- [_Rust_ 1.74+](https://www.rust-lang.org/tools/install)
- _wasm_bindgen_
- [_Go 1.21+_](https://go.dev)
- [_sass_](https://sass-lang.com)
- [_eslint_](https://eslint.org)
- [_eslint-config-standard_](https://www.npmjs.com/package/eslint-config-standard)
- _Docker_

**NOTES**: 

1. `apt install sass` on _Ubuntu_ installs `ruby-sass` which was marked **[obsolete](https://sass-lang.com/ruby-sass)**
   in 2019. Please follow the installation instructions on the [Sass homepage](https://sass-lang.com) to install
   the current version._


### Building from source

1. Clone the repository

```
git clone https://github.com/transcriptaze/vpd
cd vpd
```

2. Build everything:
```
make build-all
```
