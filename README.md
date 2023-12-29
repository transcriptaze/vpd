# vcv-panel-designer

Web app for basic VCV panel layout.

## Getting Started

### _web-app_

### Releases

### Running locally

## Development Notes

You need a **bunch** of tools:

- _make_ (optional but recommended)
- _tree-sitter_
- _Rust_
- [_Go 1.21+_](https://go.dev)

- [_sass_](https://sass-lang.com)

- [_eslint_](https://eslint.org)
- [_eslint-config-standard_](https://www.npmjs.com/package/eslint-config-standard)
```
npm install eslint
npm install eslint-config-standard
```

**NOTES**: 

1. `apt install sass` on Ubuntu installs `ruby-sass` which was marked **[obsolete](https://sass-lang.com/ruby-sass)**
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
