.DEFAULT_GOAL=debug

.PHONY: clean
.PHONY: format

clean:
	rm -rf bin/*

format:
	go fmt ./...

build: format
	cp -r ../html .
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
	./bin/vpd --debug --port 9876 --html ../HTML

run: build
	./bin/vpd

