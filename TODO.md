# TODO

- [x] Drop shadows
- [x] [Add supported component and position items in polar coordinates](cf. https://github.com/transcriptaze/vpd/issues/4)
- [x] DuckDuckGo
- [x] Firefox
- [x] Safari
      - [x] dark mode parts
      - [x] load VPD file
      - [x] opentype CORS issue
      - [x] db.js:138
            - https://webkit.org/blog/12257/the-file-system-access-api-with-origin-private-file-system
            - https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle
      - [ ] sigh .. probably need to wait for 'completed' message
```
worker.js:28
NoModificationAllowedError: Failed to execute 'createSyncAccessHandle' on 'FileSystemFileHandle': Access Handles cannot be created if there is another open Access Handle or Writable stream associated with the same file.
```      

- [ ] `redo`
      - [x] undo/redo state
      - [ ] undo/redo command
      - [ ] save
      - [ ] restore

- !! https://v8.dev/blog/jspi
- [ ] Set CSS panel element width from module width
- [ ] Cheatsheet
      - [ ] XY

- [ ] Export header file
      - [ ] pretty-print
      - [ ] optional prefix

- [ ] _load_ web component
- [ ] _command_ web component
- [ ] preload fonts, javascript, etc
      - https://www.youtube.com/watch?v=-Ln-8QM8KhQ

### Fonts
   - [ ] `delete all fonts`
   - [ ] Flush font from cache on delete font

### _undo_
   - [ ] enable/disable trash (empty project + empty stack)
   - [ ] truncate history on new module, trash, etc

### Help
- [ ] Replace help with hints
      - [ ] Auto-generate hint corpus from grammar/examples
- [ ] `help ..` command
- https://www.adamgrant.info/tiny-predictive-text

### Overlay
- [ ] Only add used widgets to defs

### Commands
- [ ] Allow H in decoration offsets
- [ ] Default to mm in dimensions
- [ ] Genericize ID generation
- [ ] Minimum module width is 3H
- [ ] `set label` _t1/l1_ ????
      - sometimes takes t1, sometime l1

- [ ] _guidelines_
      - [ ] allow both guide and guideline
      - [ ] `set guide v1 (input in +10mm)`
      - [ ] clean up Module::new_guide_id
      - [ ] clean up NewGuide::apply

- [ ] _decorate_
      - [ ] `set decoration d1 dx (parameter v +10mm)`
      - [ ] `new decoration [name]`


## TO BE DONE EVENTUALLY
- (?) 'new button' => eventually export with code and all?
- (?) Radial guides

- [ ] Side-by-side structure editor
      - https://github.com/ianstormtaylor/slate

- [ ] LLM
      - https://towardsdatascience.com/clone-the-abilities-of-powerful-llms-into-small-local-models-using-knowledge-distillation-12e954d256c2

- [ ] `async_apply`
      - https://stackoverflow.com/questions/69560112/how-to-use-rust-async-trait-generic-to-a-lifetime-parameter

- [ ] Docker container
      - [ ] ghcr

- [ ] Bundle with rollup.js
      - wasm-pack bundler
      - https://rustwasm.github.io/wasm-bindgen/reference/deployment.html

- [ ] CLI
- [ ] Custom helper.py to merge updates
- [ ] 'approximate' name matching
- [ ] Better error messaging
      - https://ishadeed.com/article/css-has-guide/

- [ ] API
      - Go REST API

- [ ] Loadable header file template
- [ ] tab-complete
- [ ] Robust JSON deserialization 
      - Accomodate missing fields
      - https://stackoverflow.com/questions/64192343/how-to-partially-deserialise-a-json-object

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
      - https://nuejs.org/blog/introducing-glow/
      - https://www.freecodecamp.org/news/things-you-need-to-know-about-working-with-svg-in-vs-code-63be593444dd/
      - https://marketplace.visualstudio.com/items?itemName=sndst00m.vscode-native-svg-preview
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

