.PHONY: format
.PHONY: sass

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

build-release: build-all
	cd rs/vpd && wasm-pack build --target web --release --out-dir ../../html/wasm/vpd

run:
	python3 -m http.server 9876 -d html

run-npx:
	npx http-server html --port 9876

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css

cloudflare: build-release
	rm -rf dist/cloudflare
	mkdir -p dist/cloudflare
	cp -r  ./html/*        dist/cloudflare
	cp -r  ./cloudflare/*  dist/cloudflare

