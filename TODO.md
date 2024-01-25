# TODO

- [x] Replace splashscreens
- [ ] Resolve names to IDs in apply()
- [ ] Genericize ID generation
- [x] Windmill on load
- [ ] Windmill on restore
- [x] Unicode characters
- [ ] Check hasError/isMissing

- [x] SVG pretty printer
      - [ ] Fix double blank lines

- [x] github 'cloudflare' build
      - [x] Fix wasm .gitignore, LICENSE etc
      - [x] cloudflare branch
      - [x] Trigger nightly builds on push to cloudflare branch
      - [x] Create _dist/cloudflare_ from Makefile

- [x] Load project file
      - [ ] web component

- [x] Save project/script file
- [x] Show errors
- [x] _project info_ panel
- [x] Trash
- [ ] _component info_ panel
- [ ] _command_ web component
- [ ] Set CSS panel element width from module width
- [ ] `undo`
- [ ] `redo`
- [x] ~~Use local fonts for SVG (cf. _slow Internet problem_)~~
      - [ ] Can't reference /fonts because it's in a blob URL - maybe use CSS ??????
- [ ] Windmill intermittently doesn't appear

### Overlay
- [ ] panel screws
      - [x] light theme
      - [x] dark theme
      - [ ] create in SVG for panel width
      - [ ] 'show/hide panel screws'
- [ ] Only add used widgets to defs


### Fonts 
- [x] fetch preloaded fonts on startup
- [ ] lazy fetch
- [x] _woff_
- [ ] _woff2_
- [ ] Load/drop font file
- [ ] `load font...`

### Commands
- [x] _load_
- [x] _save_
- [x] _set origin_
- [x] _export panel svg_

- [ ] _module_
      - [x] `new module <name> [1U] 10H`
      - [x] `new module <name> [1U] 50mm`
      - [x] help
      - [x] user guide
      - [x] `set module name`
      - [ ] `set module width`
      - [ ] `set module height`

- [ ] `set background none`

- [ ] _guidelines_
      - [ ] V0 and H0
      - [x] `new guide vertical centre`
      - [x] `new guide horizontal middle`
      - [x] Replace `g` ids with `v` or `h`
      - [ ] help
      - [ ] `delete`
      - [ ] `set`
      - [x] Replace Guide::to_svg() resolution with XY::resolve
      - [ ] clean up Module::new_guide_id
      - [ ] clean up NewGuide::apply
      - (?) error if duplicate offset

- [ ] _inputs_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] hover
            - https://stackoverflow.com/questions/41768657/display-text-over-svg-element-on-hover#41769075
      - [x] user guide

- [ ] _outputs_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] hover
      - [x] user guide

- [ ] _parameters_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] hover
      - [x] user guide

- [ ] _lights_
      - [ ] discard/warn duplicates
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] hover
      - [x] user guide

- [ ] _widget_
      - [ ] delete
      - [ ] set
      - [ ] help
      - [ ] hover
      - [x] user guide

- [ ] _label_
      - [ ] delete
      - [ ] set
      - [ ] hover

- [ ] _decorate_
      - [x] inputs
      - [x] outputs
      - [x] parameters
      - [x] lights
      - [x] widgets
      - [x] help
      - [x] user guide
      - [ ] set
      - [ ] delete
      - [x] CircularGraduations
      - [x] Pad

- [ ] _help_
       - (?) Rework grammar as `new`, `new module`, etc
       - [ ] Auto-generate help text from grammar/examples


### TO BE DONE
- [ ] Robust JSON deserialization 
      - Accomodate missing fields
      - Versioning

- [ ] Bundle with rollup.js
- [ ] Standard HTML colour names
- [ ] Integration tests
      - https://playwright.dev/docs/intro
- [ ] Preferences
      - show/hide screws
      - show/hide guidelines
      - show/hide origin
      - default font
      - default font alignment



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


