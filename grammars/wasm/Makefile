.PHONY: format

.DEFAULT_GOAL = build

format:
	cargo fmt

build: format
	wasm-pack build --target web --out-dir ../../html/wasm/grammar

test:
#	wasm-pack test --chrome --headlesss
# 	cargo test --target wasm32-unknown-unknown
	cargo test

