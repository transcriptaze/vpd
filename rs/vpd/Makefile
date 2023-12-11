.PHONY: format

.DEFAULT_GOAL = build

format:
	cargo fmt

build: format
	wasm-pack build --target web --dev --out-dir ../../html/wasm/vpd

build-release: format
	wasm-pack build --target web --release --out-dir ../../html/wasm/vpd

test: format
#	wasm-pack test --chrome --headlesss
# 	cargo test --target wasm32-unknown-unknown
	cargo test -- --nocapture

