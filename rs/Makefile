.PHONY: sass

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css

build:
	npx eslint --fix ./html/javascript/*.js
# 	npx eslint --fix ./html/javascript/components/*.js
	sass --no-source-map sass/themes:html/css
	wasm-pack build --target web --out-dir html/wasm

run:
	python3 -m http.server 9876 -d html
