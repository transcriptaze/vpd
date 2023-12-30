# TODO

- [ ] gzip project file
- [x] Load project file
      - [ ] web component
      - [ ] https://thenounproject.com/search/icons/?q=open
- [ ] Show errors
- [ ] Macro keys
      - [ ] web component
      - [ ] programmable

- [x] _info_ panel
- [x] _export_
      - [x] Don't export overlay

- [ ] error handling
- [x] Double buffer panel redraws
- [ ] Use local fonts for SVG (cf. _slow Internet problem_)
- [ ] Set panel width from module width
- [ ] Hide logo when overlapped by SVG
- [ ] `undo`


### Fonts 
- [ ] load all on startup
- [ ] `load font...`
- [ ] _woff_
- [ ] _woff2_
- [ ] Load/drop font file

### Commands
- [ ] Enable input autocomplete attribute

- [ ] _module_
      - [x] `new module <name> [height] <width>`
      - [ ] `set` module name/width/height
      - [ ] `export module [gzip]`
      - [ ] `export module svg [light|dark]`
      - [ ] `export module script [gzip]`

- [ ] _guidelines_
      - [ ] help
      - [ ] `delete`
      - [ ] `set`
      - [ ] `list`
      - (?) error if duplicate offset

- [ ] _inputs_
      - [ ] `new input <name> <absolute|geometry|guidelines> [symbol`
      - [x] absolute
      - [x] relative to geometry
      - [ ] relative to guidelines
      - [ ] symbol
      - [ ] help

- [ ] _outputs_
      - [ ] `new output <name> <absolute|geometry|guidelines> [symbol]`
      - [x] absolute
      - [x] relative to geometry
      - [ ] relative to guidelines
      - [ ] symbol
      - [ ] help

- [ ] _parameters_
      - [ ] `new parameter <name> <absolute|geometry|guidelines> [symbol]`
      - [x] absolute
      - [x] relative to geometry
      - [ ] relative to guidelines
      - [ ] symbol
      - [ ] delete
      - [ ] set
      - [ ] help

- [ ] _lights_
      - [ ] `new light <name> <absolute|geometry|guidelines> [symbol]`
      - [ ] relative to geometry
      - [ ] relative to guidelines
      - [ ] symbol
      - [ ] delete
      - [ ] set
      - [ ] help

- [ ] _widget_
      - [ ] `new widget <name> <absolute|geometry|guidelines> [symbol]`
      - [ ] relative to geometry
      - [ ] relative to guidelines
      - [ ] symbol
      - [ ] delete
      - [ ] set
      - [ ] help

- [ ] _text_
      - [x] `new text <text> <absolute>`
      - [x] text2path
      - [ ] anchor
            - [x] absolute
            - [ ] relative to origin
            - [ ] relative to geometry
            - [ ] relative to guideline
      - [ ] align left/centre/right
      - [ ] align top/middle/baseline/bottom
      - [ ] font
      - [ ] fontsize
      - [ ] colour
      - [ ] optional label ID
      - [ ] generate label ID automatically
      - [ ] error if identifier already exists
      - (?) error if duplicate offset

- [ ] load
- [ ] save

- [ ] _help_
       - [ ] Rework help text as multi-column ul
       - [ ] Generate help text from grammar/examples


### Panel
- [ ] Robust JSON deserialization i.e. accomodate missing fields

### SVG
- [ ] Convert objects to mm
- [ ] `fmt` function 
- [ ] SVG pretty printer

## Notes

1.  https://github.com/danmarshall/google-font-to-svg-path
2.  https://stackoverflow.com/questions/26594555/d3js-how-to-convert-svg-text-to-path
3.  https://www.npmjs.com/package/text-to-svg
4.  https://github.com/paulzi/svg-text-to-path
5.  https://codepen.io/grimen/pen/naENeK
6.  https://vecta.io/blog/how-to-use-fonts-in-svg
7.  https://github.com/opentypejs/opentype.js
8.  https://siraben.dev/2022/03/01/tree-sitter.html
9.  https://github.com/tree-sitter/tree-sitter/tree/master/lib/binding_rust
10. https://www.reddit.com/r/learnrust/comments/lrfci0/why_err_uses_string_and_not_str/
11. https://rustwasm.github.io/wasm-bindgen/examples/import-js.html
12. https://github.com/bodoni/svg
13. https://github.com/RazrFalcon/ttf-parser
14. https://github.com/extraymond/rust-async-wasm-demo/blob/master/README.md
15. https://users.rust-lang.org/t/do-async-frameworks-like-tokio-support-wasm-particularly-multithreading-in-the-browser/85927/2
16. https://stackoverflow.com/questions/72220581/how-to-produce-a-wasm-interface-with-asynchronous-access
17. https://lukasatkinson.de/2015/mopping-it-up/

