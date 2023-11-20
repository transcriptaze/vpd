.PHONY: format
.PHONY: sass
.DEFAULT_GOAL = build

format:
	cargo fmt

build: format
	npx eslint --fix ./html/javascript/*.js
	sass --no-source-map sass/themes:html/css
	wasm-pack build --target web --out-dir html/wasm

test:
#	wasm-pack test --chrome --headlesss
# 	cargo test --target wasm32-unknown-unknown
	cargo test

run:
	python3 -m http.server 9876 -d html

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css
