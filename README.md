![build](https://github.com/transcriptaze/vpd/workflows/build/badge.svg)

# vcv-panel-designer

VPD is a browser based web application to create the SVG files for a basic VCV module panel.

It exists mostly because I wanted to experiment with tree-sitter but also because having to switch back and forth between
between text and paths in Inkscape was just plain annoying.


## Getting Started

1. Open the web application in your browser (currrently Chrome).
2. Follow the _Getting started_ instructions in the [User Guide](GUIDE.md).
3. Export the SVG files:
   ```
   export module SVG
   ```
   ```
   export module SVG dark
   ```
4. Copy the SVG files to the plugin `res` folder.
5. Generate a module using the [VCV helper script](https://vcvrack.com/manual/Panel):
   ```
   <Rack SDK>/helper.py createmodule <module slug> res/<module slug>.svg src/<module slug>.cpp
   ```

The [_User Guide](GUIDE.md) describes all the available commands.

### _web-app_

### Releases

### Running locally

1. Python 

2. NPM

3. Go


## Building from source

You need a **bunch** of tools:
- _make_ (optional but recommended)
- [_tree-sitter_](https://tree-sitter.github.io/tree-sitter)
- [_Rust_ 1.74+](https://www.rust-lang.org/tools/install)
- [_wasm-pack_](https://github.com/rustwasm/wasm-pack)
- [_wasm-bindgen_](https://github.com/rustwasm/wasm-bindgen)
- [_npm 1.16.32+_](https://www.npmjs.com/get-npm)
- [_sass_](https://sass-lang.com)
- [_eslint_](https://eslint.org)
- [_eslint-config-standard_](https://www.npmjs.com/package/eslint-config-standard)
- [_Docker_](https://www.docker.com)
- [_Go 1.21+_](https://go.dev)
- [_Python 3.9+_](https://www.python.org/downloads/)

**NOTES**: 

1. `apt install sass` on _Ubuntu_ installs `ruby-sass` which was marked **[obsolete](https://sass-lang.com/ruby-sass)**
   in 2019. Please follow the installation instructions on the [Sass homepage](https://sass-lang.com) to install
   the current version._


### Build instructions

1. Clone the repository

```
git clone https://github.com/transcriptaze/vpd
cd vpd
```

2. Start docker

3. Build everything:
```
make build-all
```
