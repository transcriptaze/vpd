# TODO

https://rustwasm.github.io/wasm-bindgen/examples/import-js.html

- [x] Save project file
- [ ] Load project file
- [ ] _light_ SVG
- [ ] _dark_ SVG
- [ ] gzip project file
- [ ] Show errors
- [ ] Shortcut keys

### Commands
- [x] new module
- [ ] set module name/width/height
- [ ] add guideline
      - [ ] label
      - [ ] error if identifier already exists
      - (?) error if duplicate offset

- [ ] load
- [ ] save
- [ ] download

- [x] Help text skeleton
- [ ] Rework help text as multi-column ul
- [ ] Generate help text from grammar/examples

### Panel
- [ ] Deserialize from JSON with missing fields

### SVG
- [ ] Convert objects to mm
- [ ] Use max 3 digits of precision
      e.g. context.insert("panel_width", &format!("{:.2}", self.width));


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