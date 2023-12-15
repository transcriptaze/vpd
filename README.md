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

VPD is a static web app and as such cannot load external fonts because of CORS restrictions - which means it is limited
to those fonts included in the app. If you want to use a specific font there are a couple of alternatives:

- Download the _TrueType_ or _OpenType_ font file and submit a _pull_ request (may take a day or two). Support
  for _woff_ and _woff2_ files will be added .. sometime ..
- Run the web-app on your local machine in `debug` mode, put the font file in the _html/fonts_ folder and run the
  `load font...` command
- Submit a feature request and wait patiently (without complaining or moaning) until I get around to
  downloading it and including it in the web-app.
