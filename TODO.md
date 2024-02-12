# TODO

- [ ] Check hasError/isMissing
- [ ] Genericize ID generation

- [x] Load project file
      - [ ] web component

- [ ] _command_ web component
- [ ] Set CSS panel element width from module width
- [ ] `undo`
- [ ] `redo`
- [x] ~~Use local fonts for SVG (cf. _slow Internet problem_)~~
      - [ ] Can't reference /fonts because it's in a blob URL - maybe use CSS ??????
- [ ] Windmill intermittently doesn't appear
- [ ] Save .h file
- [ ] Allow H in decoration offsets
- [ ] Default to mm in dimensions
- [ ] Cheatsheet
      - [ ] XY

- [ ] Export header file
      - [x] Fix ..h filename
      - [x] UI button
      - [x] Command
      - [x] Help
      - [x] JS
      - [x] rs
      - [x] Default prefix - convert module name to uppercase and replace non-alphanumeric with underscores
      - [ ] pretty-print
      - [ ] optional prefix
      - [ ] loadable template


### Overlay
- [x] panel screws
- [ ] Only add used widgets to defs
- [ ] Fix scaling for _RoundBlackKnob_


### Fonts 
- [x] fetch preloaded fonts on startup
- [x] _woff_
- [ ] _woff2_
- [ ] lazy fetch
- [ ] Load/drop font file
- [ ] `load font...`

### Commands
- [x] _load_
- [x] _save_
- [x] _set origin_
- [x] _export panel svg_
- [x] _module_
- [x] _help_
- [x] _background_

- [ ] _guidelines_
      - [ ] `set`
      - [ ] clean up Module::new_guide_id
      - [ ] clean up NewGuide::apply
      - [ ] migrate
      - (?) warn if duplicate offset

- [x] _inputs_
      - [ ] migrate

- [ ] _outputs_
      - [ ] migrate

- [ ] _parameters_
      - [ ] discard/warn duplicates
      - [ ] set
      - [ ] help
      - [ ] migrate

- [ ] _lights_
      - [ ] discard/warn duplicates
      - [ ] set
      - [ ] help
      - [ ] migrate

- [ ] _widget_
      - [ ] set
      - [ ] help
      - [ ] migrate

- [ ] _label_
      - [ ] set
      - [ ] hover
      - [ ] Export label text too
      - [ ] migrate

- [ ] _decorate_
      - [ ] set
      - [ ] Export decorations in SVG component group


### TO BE DONE

- [ ] Robust JSON deserialization 
      - Accomodate missing fields
      - Versioning
      - https://stackoverflow.com/questions/64192343/how-to-partially-deserialise-a-json-object

- [ ] Auto-generate help text from grammar/examples
- [ ] Bundle with rollup.js
- [ ] Standard HTML colour names
- [ ] Integration tests
      - https://playwright.dev/docs/intro

- [ ] Preferences
      - show/hide panel screws
      - show/hide guidelines
      - show/hide origin
      - default font
      - default font alignment

- [ ] Rust SVG
      - https://github.com/RazrFalcon/resvg
      

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
18. Can't easily use local fonts in SVGs because the URLs are referenced to the blob not the originating server.
    (cf. _slow Internet problem_)~~


