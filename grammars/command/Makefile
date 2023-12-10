.PHONY: format

.DEFAULT_GOAL = build

format:
	cargo fmt

regenerate:
	tree-sitter generate

build: regenerate format
	cargo build

wasm: regenerate
	tree-sitter build-wasm 
	mv tree-sitter-vpd.wasm ../../html/wasm/grammar

run: build
	tree-sitter parse example
# 	cargo run
