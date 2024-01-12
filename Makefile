.PHONY: format
.PHONY: sass
.PHONY: cloudflare

.DEFAULT_GOAL = build

docker:
	open -a docker

www:
	npx eslint --fix ./html/javascript/*.js
	npx eslint --fix ./html/javascript/components/*.js
	npx eslint --fix ./html/javascript/commands/*.js
	sass --no-source-map sass/themes:html/css

build: www
	cd rs/vpd && wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd

test: build
	cd grammars/command && make test
	cd grammars/help    && make test

build-all: test
	cd grammars/command && make wasm
	cd grammars/help    && make wasm
	cd rs/vpd           && wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd
	cd go               && make build-all

build-release: build-all
	mkdir -p dist/darwin/vpd
	mkdir -p dist/linux/vpd
	mkdir -p dist/windows/vpd
	mkdir -p dist/html
	cd rs/vpd && wasm-pack build --target web --release --out-dir ../../html/wasm/vpd
	cd go     && make build-all
	cp -r html/* dist/html/

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css

cloudflare: 
	rm    -rf dist/cloudflare
	mkdir -p  dist/cloudflare
	rsync -av --progress html/* dist/cloudflare --exclude html/javascript
	cp -r  ./cloudflare/*  dist/cloudflare
	npx rollup --config rollup-vpd.js
	npx rollup --config rollup-components.js
	sed -i '' 's#VPD\.js#bundle\.js#'                       dist/cloudflare/index.html
	sed -i '' 's#command\.js#bundle\.js#'                   dist/cloudflare/index.html
	sed -i '' 's#help\.js#bundle\.js#'                      dist/cloudflare/index.html
	sed -i '' 's#text\.js#bundle\.js#'                      dist/cloudflare/index.html
	sed -i '' 's#components/components\.js#components\.js#' dist/cloudflare/index.html

run-python:
	python3 -m http.server 9876 -d html

run-nodejs:
	npx http-server html --port 9876

run-go:
	cd go && make run

run-cloudflare:
	python3 -m http.server 9876 -d dist/cloudflare

run: run-python

