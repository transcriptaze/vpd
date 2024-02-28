# TODO

- [x] Build warnings
```
warning: unused import: `background::RGB`
  --> src/panel/mod.rs:15:9
   |
15 | pub use background::RGB;
   |         ^^^^^^^^^^^^^^^
   |
   = note: `#[warn(unused_imports)]` on by default
warning: unused import: `background::RGBA`
  --> src/panel/mod.rs:16:9
   |
16 | pub use background::RGBA;
   |         ^^^^^^^^^^^^^^^^
warning: `vpd` (lib) generated 2 warnings (run `cargo fix --lib -p vpd` to apply 2 suggestions)
    Finished dev [unoptimized + debuginfo] target(s) in 23.81s
```

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
- [ ] Allow H in decoration offsets
- [ ] Default to mm in dimensions
- [ ] Cheatsheet
      - [ ] XY

- [ ] Export header file
      - [ ] pretty-print
      - [ ] optional prefix

### Overlay
- [x] panel screws
- [ ] Only add used widgets to defs
- [ ] Fix scaling for _RoundBlackKnob_
- [ ] Fix scaling for _PJ301M_


### Fonts 
- [x] fetch preloaded fonts on startup
- [x] _woff_
- [x] `load font...`
- [x] `unload font`
- [x] use normalized name as key
- [x] `list fonts`
      - [x] user guide
      - [x] cheat sheet
      - [x] style preloaded fonts
- [ ] lazy fetch and cache parsed font
- [ ] _woff2_

### Commands
- [ ] _guidelines_
      - [ ] `set guide v1 (input in +10mm)`
      - [ ] clean up Module::new_guide_id
      - [ ] clean up NewGuide::apply

- [ ] _inputs_
      - [ ] `set input 'gain' xy (input in +10mm)`

- [ ] _outputs_
      - [ ] `set output 'left' xy (input in +10mm)`

- [ ] _parameters_
      - [ ] `set parameter 'volume' xy (input in +10mm)`

- [ ] _lights_
      - [ ] `set light 'on' xy (parameter off 0mm,0mm)`

- [ ] _widget_
      - [ ] `set widget 'channels' xy (light 'on' +10mm,-20mm)`

- [ ] _label_
      - [ ] `set label l1 xy (widget w1 +10mm,-20mm)`

- [ ] _decorate_
      - [x] set
      - [ ] Export decorations in SVG component group
      - (?) `decorate <xy> ...`


### TO BE DONE

- [ ] Better error messaging
      - https://ishadeed.com/article/css-has-guide/

- [ ] API
      - Go REST API

- [ ] Custom helper.py to merge updates
- [ ] Loadable header file template
- [ ] tab-complete
- [ ] Robust JSON deserialization 
      - Accomodate missing fields
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
      

- [ ] SublimeText plugin
- [ ] VSCode plugin
      https://nuejs.org/blog/introducing-glow/
- [ ] vim plugin


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

