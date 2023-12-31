![build](https://github.com/transcriptaze/vpd/workflows/build/badge.svg)

# VPD: VCV Rack 2 Panel Designer

VPD is a browser based web application to create the SVG files for a basic VCV module panel. 

It has been tested on:
- Chrome
- Firefox
- Opera
- Safari

There is a brief [Getting started](#getting-started) section below and a somewhat more comprehensive [user guide](GUIDE.md) which 
describes all the available commands.


### Raison d’être

VPD was created mostly as an experiment in implementing a command interface using _tree-sitter_, but also because having to
switch back and forth between between text and paths in _Inkscape_ when creating or modifying an VCV panel is just plain annoying.


### Getting Started

1. Open the web application in your browser.
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

### Releases

## _web-app_

The web app is currently hosted on _Cloudflare Pages_:

[VPD](https://vpd.pages.dev)


## Running locally

VPD is a static web application that runs entirely in the browser. Running it locally requires just the _wwww_ files and a web server

1. Download the _VPD_ artifact from either a release or a nightly build and unzip it to a folder::
```
wget .... 
unzip ....
```

2. Start an HTTP server to serve the unzipped files, e.g.:

- _Python_
   ```
   cd vpd
   python3 -m http.server 9876 -d html
   ```
- _NodeJS_
   ```
   cd vpd
   npx http-server html --port 9876
   ```
- _Go_

   ```
   cd vpd
   ./vpd
   ```

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
