.PHONY: format

.DEFAULT_GOAL = test

format:
	cargo fmt

regenerate:
	tree-sitter generate

build: regenerate format
	cargo build

test: build
	tree-sitter test

wasm: regenerate
	tree-sitter build-wasm 
	mv tree-sitter-hint.wasm ../../html/wasm/grammars/

run: build
	tree-sitter parse example

debug: build
	tree-sitter parse debug

