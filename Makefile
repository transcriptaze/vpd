.DEFAULT_GOAL=debug

.PHONY: format

format:
	go fmt ./...

build: format
	go build -o bin/ ./...

debug: build
	./bin/vpd

run: build
	./bin/vpd


