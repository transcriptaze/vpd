.PHONY: format
.PHONY: sass

.DEFAULT_GOAL = build

format:
	npx eslint --fix ./html/javascript/*.js

build: format
	sass --no-source-map sass/themes:html/css
	cd rs && wasm-pack build --target web --out-dir ../html/wasm

run:
	python3 -m http.server 9876 -d html

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css
