.DEFAULT_GOAL=debug

.PHONY: clean
.PHONY: format

clean:
	rm -rf bin/*

format:
	go fmt ./...

build: format
	rsync -av --exclude *.gitignore \
	          --exclude LICENSE \
	          --exclude package.json \
	          ../html/* \
	          html
	go build -o bin/ ./...

test: build

benchmark: test

coverage: build

vet: build
	go vet ./...

build-all: test vet
	mkdir -p ../dist/linux/vpd
	mkdir -p ../dist/darwin/vpd
	mkdir -p ../dist/windows/vpd
	env GOOS=linux   GOARCH=amd64 GOWORK=off go build -trimpath -o ../dist/linux/vpd   ./...
	env GOOS=darwin  GOARCH=amd64 GOWORK=off go build -trimpath -o ../dist/darwin/vpd  ./...
	env GOOS=windows GOARCH=amd64 GOWORK=off go build -trimpath -o ../dist/windows/vpd ./... 

debug: build
	./bin/vpd --debug --port 9876 --html ../HTML

run: build
	./bin/vpd

