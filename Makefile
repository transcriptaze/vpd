.PHONY: format
.PHONY: sass

.DEFAULT_GOAL = build

format:
	npx eslint --fix ./html/javascript/*.js

build: format
	sass --no-source-map sass/themes:html/css
	cd rs/vpd     && wasm-pack build --target web --out-dir ../../html/wasm/vpd
# 	cd rs/grammar && wasm-pack build --target web --out-dir ../../html/wasm/grammar

run:
	python3 -m http.server 9876 -d html

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css
