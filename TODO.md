# TODO

- [x] Initialise _help_ on page load
- [x] svg: convert objects to mm
- [x] SVG pretty printer
      - [x] blank lines
      - [x] 3 digits
      - [ ] Fix double blank lines

- [x] github 'cloudflare' build
      - [x] Fix wasm .gitignore, LICENSE etc

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
      - [ ] Can't reference to /fonts because it's in a blob URL - maybe use CSS ??????
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
- [x] fetch preloaded fonts on startup
- [x] _woff_
- [ ] _woff2_
- [ ] Load/drop font file
- [ ] `load font...`

### Commands
- [x] _set background_

- [ ] _load_
      - [x] `load script`
      - [ ] `load project`
            - [ ] Don't return JSON from exec
            - [ ] User guide
            - [ ] help

- [ ] _export_
      - [ ] `export project`
      - [ ] `export project timestamp`
      - [ ] `export project gzip`
      - [ ] `export script`
      - [ ] `export script timestamp`
      - [x] `export panel svg [light|dark]`
      - [ ] replace spaces with underscores
      - [ ] help
      - [ ] user guide

- [ ] _module_
      - [x] `new module <name> [1U] 10H`
      - [x] `new module <name> [1U] 50mm`
      - [ ] `set` module name/width/height
      - [ ] help
      - [ ] user guide

- [ ] _origin_
      - [x] `set origin <absolute>`
      - [x] `set origin <geometry>`
      - [ ] help
      - [ ] user guide

- [ ] _guidelines_
      - [ ] help
      - [ ] `delete`
      - [ ] `set`
      - [ ] `list`
      - (?) error if duplicate offset

- [ ] _inputs_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _outputs_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _parameters_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _lights_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _widget_
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] `decorate`
      - [ ] user guide

- [ ] _label__
      - [x] text2path
      - [x] `new label <text> @xy`
      - [x] `new label <text> xy`
      - [x] `new label <text> <geometry>`
      - [ ] `new label <text> <component>`
      - [x] font
      - [x] fontsize
      - [x] align left/centre/right
      - [ ] align top/middle/baseline/bottom
      - [ ] colour
      - [ ] generate label ID automatically
      - [ ] help
      - [x] user guide

- [ ] _help_
       - [x] Rework help text as grid
       - [ ] Auto-generate help text from grammar/examples


### TO BE DONE
- [ ] Robust JSON deserialization i.e. accomodate missing fields
- [ ] bundle with rollup.js
- [ ] Integration tests
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


