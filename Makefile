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
	npx eslint --fix ./test/command/*.js
	npx eslint --fix ./test/hint/*.js
	sass --no-source-map sass/themes:html/css

build: www
	cd rs/vpd && wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd

debug:
	npm test

test: build
	cd grammars/command && make test
	cd grammars/help    && make test
#	npm test

build-all: test
	cd grammars/command && make wasm
	cd grammars/help    && make wasm
	cd grammars/hint    && make wasm
	cd rs/vpd           && wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd
	cd go               && make build-all

build-release: 
	rm    -rf dist/html
	mkdir -p  dist/darwin/vpd
	mkdir -p  dist/linux/vpd
	mkdir -p  dist/windows/vpd
	mkdir -p  dist/html
	cd rs/vpd && wasm-pack build --target web --release --out-dir ../../html/wasm/vpd
	cd go     && make build-all
	rsync -av --exclude *.gitignore \
	          --exclude LICENSE \
	          --exclude package.json \
	          html/* \
	          dist/html

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css

cloudflare: 
	rm    -rf dist/cloudflare
	mkdir -p  dist/cloudflare
	cp -r html/* dist/cloudflare/
	rm -f dist/cloudflare/.gitignore
	rm -f dist/cloudflare/LICENSE
	rm -f dist/cloudflare/package.json

run-python: build-release
	python3 -m http.server 9876 -d html

run-nodejs: build-release
	npx http-server html --port 9876

run-go: build-release
	cd go && make run

run-cloudflare:
	python3 -m http.server 9876 -d dist/cloudflare

run: build
	python3 httpd.py

