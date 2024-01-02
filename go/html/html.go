package html

import (
	"embed"
)

//go:embed index.html favicon.ico css images fonts javascript wasm
var HTML embed.FS
