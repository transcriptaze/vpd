.PHONY: format
.PHONY: sass

.DEFAULT_GOAL = build

docker:
	open -a docker

format:
	npx eslint --fix ./html/javascript/*.js
	npx eslint --fix ./html/javascript/components/*.js
	npx eslint --fix ./html/javascript/commands/*.js

build: format
	sass --no-source-map sass/themes:html/css
	cd rs/vpd && wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd

test:
	npx eslint ./html/javascript/*.js
	npx eslint ./html/javascript/components/*.js
	npx eslint ./html/javascript/commands/*.js
	cd grammars/command && make test
	cd grammars/help    && make test

build-all: format
	sass --no-source-map sass/themes:html/css
# 	cd grammars/command && make wasm
# 	cd grammars/help    && make wasm
# 	cd rs/vpd           && wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd

build-release: format
	sass --no-source-map sass/themes:html/css
	cd grammars/command && make wasm
	cd grammars/help    && make wasm
	cd rs/vpd     && wasm-pack build --target web --release --out-dir ../../html/wasm/vpd

run:
	python3 -m http.server 9876 -d html

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css
