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
# 	tar --directory=dist/darwin --exclude=".DS_Store" -cvzf dist/vpd-0.0.0-darwin.tar.gz .
# 	tar --directory=dist/linux  --exclude=".DS_Store" -cvzf dist/vpd-0.0.0-linux.tar.gz  .
# 	cd dist/windows; zip --recurse-paths ../vpd-0.0.0-windows.zip .

debug: build
	./bin/vpd --debug --port 9876 --html ../HTML

run: build
	./bin/vpd

