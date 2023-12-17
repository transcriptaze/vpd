.PHONY: format

.DEFAULT_GOAL = build

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
	mv tree-sitter-command.wasm ../../html/wasm/grammars/

run: build
	tree-sitter parse example
# 	cargo run

debug: build
	tree-sitter parse debug
