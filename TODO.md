# TODO

- [x] github 'cloudflare' build
      - [ ] bundle

- [x] Load project file
      - [ ] web component
      - [x] https://thenounproject.com/search/icons/?q=open

- [ ] Save project/script file
      - [ ] alt-click to save script
      - [x] set filename
      - [x] ctrl-click to save as timestamped

- [ ] **Show errors**

- [x] _info_ panel
- [ ] _command_ web component
- [ ] Set CSS panel element width from module width
- [ ] `undo`
- [ ] `redo`
- [x] ~~Use local fonts for SVG (cf. _slow Internet problem_)~~
      - [ ] Maybe use CSS ??????
- [x] Embed HTML in Go binary
- [ ] Initialise _help_ on page load
- [ ] Preferences
      - show/hide screws
      - default font
      - default font alignment


### Overlay
- [ ] panel screws
      - [x] light theme
      - [x] dark theme
      - [ ] create in SVG for panel width
      - [ ] 'show/hide panel screws'
- [x] Use placeholder for unknown parts
- [x] Themed PJ301M
- [ ] Only add used widgets to defs


### Fonts 
- [ ] load all on startup
- [ ] `load font...`
- [ ] _woff_
- [ ] _woff2_
- [ ] Load/drop font file

- [x] _background_
- [x] VPX

### Commands
- [ ] _load_
      - [ ] `load project`
            - [ ] Don't return JSON from exec
            - [ ] User guide
            - [ ] help

      - [x] `load script`
            - [x] Don't return JSON from exec
            - [x] User guide
            - [x] help

- [ ] _export_
      - [ ] `export project`
      - [ ] `export project timestamp`
      - [ ] `export project gzip`
      - [ ] `export script`
      - [ ] `export script timestamp`
      - [ ] `export panel svg [light|dark]`
      - [ ] replace spaces with underscores

- [ ] _module_
      - [x] `new module <name> [1U] 10H`
      - [x] `new module <name> [1U] 50mm`
      - [ ] `set` module name/width/height
      - [ ] help
      - [ ] user guide

- [ ] _origin_
      - [ ] `set origin absolute`
      - [ ] `set origin relative`

- [ ] _guidelines_
      - [ ] help
      - [ ] `delete`
      - [ ] `set`
      - [ ] `list`
      - (?) error if duplicate offset

- [ ] _inputs_
      - [x] `new input <name> @xy`
      - [x] `new input <name> xy`
      - [x] `new input <name> <geometry>`
      - [x] `new input <name> <absolute|geometry|guidelines> [part]`
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _outputs_
      - [x] `new output <name> @xy`
      - [x] `new output <name> xy`
      - [x] `new output <name> <geometry>`
      - [x] `new output <name> <absolute|geometry|guidelines> [part]`
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _parameters_
      - [x] `new parameter <name> @xy`
      - [x] `new parameter <name> xy`
      - [x] `new parameter <name> <geometry>`
      - [x] `new parameter <name> <absolute|geometry|guidelines> [part]`
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _lights_
      - [x] `new light <name> @xy`
      - [x] `new light <name> xy`
      - [x] `new light <name> <geometry>`
      - [x] `new light <name> <absolute|geometry|guidelines> [part]`
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _widget_
      - [x] `new widget <name> @xy`
      - [x] `new widget <name> xy`
      - [x] `new widget <name> <geometry>`
      - [x] `new widget <name> <absolute|geometry|guidelines> [part]`
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _label__
      - [x] text2path
      - [x] `new label <text> @xy [font] [fonsize]`
      - [x] `new label <text> xy [font] [fontsize]`
      - [x] `new label <text> <geometry> [font] [fontsize]`
      - [ ] `new label <text> <component>`
      - [ ] align left/centre/right
      - [ ] align top/middle/baseline/bottom
      - [x] font
            - [x] case and space insensitive names
      - [x] fontsize
      - [ ] colour
      - [ ] generate label ID automatically
      - [ ] help
      - [x] user guide

- [ ] _help_
       - [ ] Rework help text as multi-column ul
       - [ ] Auto-generate help text from grammar/examples


### Panel
- [ ] Robust JSON deserialization i.e. accomodate missing fields

### SVG
- [x] Convert objects to mm
- [ ] SVG pretty printer
      - [ ] blank lines
      - [ ] 3 digits

### Tests
- https://playwright.dev/docs/intro


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


