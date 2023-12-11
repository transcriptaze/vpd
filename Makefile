.PHONY: format
.PHONY: sass

.DEFAULT_GOAL = build

format:
	npx eslint --fix ./html/javascript/*.js
	npx eslint --fix ./html/javascript/components/*.js
	npx eslint --fix ./html/javascript/commands/*.js

build: format
	sass --no-source-map sass/themes:html/css
	cd rs/vpd     && wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd

build-release: format
	sass --no-source-map sass/themes:html/css
	cd rs/vpd     && wasm-pack build --target web --release --out-dir ../../html/wasm/vpd

run:
	python3 -m http.server 9876 -d html

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css
