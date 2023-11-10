.DEFAULT_GOAL=debug

.PHONY: format
.PHONY: sass

clean:
	rm -rf bin/*

format:
	go fmt ./...

build: format
# 	npx eslint --fix ./html/javascript/components/*.js
# 	npx eslint --fix ./html/javascript/*.js
	sass --no-source-map sass/themes:html/css
	go build -o bin/ ./...

test: build

benchmark: test

coverage: build

vet: build
	go vet ./...

build-all: test vet
	mkdir -p dist/$(DIST)/windows
	mkdir -p dist/$(DIST)/darwin
	mkdir -p dist/$(DIST)/linux
	env GOOS=linux   GOARCH=amd64 GOWORK=off go build -trimpath -o dist/$(DIST)/linux   ./...
	env GOOS=darwin  GOARCH=amd64 GOWORK=off go build -trimpath -o dist/$(DIST)/darwin  ./...
	env GOOS=windows GOARCH=amd64 GOWORK=off go build -trimpath -o dist/$(DIST)/windows ./...

debug: build
	./bin/vpd

run: build
	./bin/vpd

sass: 
	find sass -name "*.scss" | entr sass --no-source-map sass/themes:html/css


