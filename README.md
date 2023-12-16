# vcv-panel-designer

Web app for basic VCV panel layout.

## Getting Started

### _web-app_

### Releases

### Running locally

## Development Notes

### Building from source

You need a **bunch** of tools:

- sass
- tree-sitter
- Rust
- Go
- eslint

1. Clone the repository

```
git clone https://github.com/transcriptaze/vpd
cd vpd
```

## Fonts

VPD is a static web app and as such CORS restrictions mean it is limited to those fonts included in the app:

- Lato-Regular
- Lato-Semibold
- Lato-Bold
- RobotoMono-Regular
- RobotoMono-Bold
- RobotoCondensed-Regular
- RobotoCondensed-Bold
- StyleScript-Regular

To use an alternative font:

1. Download the _TrueType_ or _OpenType_ font file (support for _woff_ and _woff2_ files will be added .. sometime ..)
2. Open the font list (`show fonts`)
3. Add the font using the the **+** button to load the font file.

The font will be stored more-or-less permanently in the browser local storage.
