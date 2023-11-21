use wasm_bindgen::prelude::*;

#[wasm_bindgen]
pub struct Panel {
    width: f32,
    height: f32,
}

pub fn new() -> Panel {
    return Panel {
        width: 45.72,
        height: 128.5,
    };
}

#[wasm_bindgen]
impl Panel {
    #[allow(non_snake_case)]
    pub fn to_SVG(&self) -> String {
        let svg = format!(
            r#"<svg xmlns="http://www.w3.org/2000/svg"
     xmlns:svg="http://www.w3.org/2000/svg"
     xmlns:inkscape="http://www.inkscape.org/namespaces/inkscape"
     version="1.1"
     width="{0}mm"
     height="{1}mm"
     viewBox="0 0 45.72 128.5">
  <defs>
    <style>
        @import url("https://fonts.googleapis.com/css?family=Roboto+Condensed");
        @import url("https://fonts.googleapis.com/css?family=Open+Sans");
        @import url("https://fonts.googleapis.com/css?family=Anonymous+Pro:400");
        @import url("https://fonts.googleapis.com/css?family=Style+Script");
        @import url("https://fonts.googleapis.com/css?family=Lato");
    </style>
  </defs>
  <g font-size="8px" text-anchor="middle">
    <text font-family="Roboto Condensed" x="22.86" y="20">Roboto Condensed</text>
    <text font-family="Open Sans"        x="22.86" y="40">Open Sans</text>
    <text font-family="Style Script"     x="22.86" y="60">ScriptThing</text>
    <text font-family="Lato"             x="22.86" y="80">Latoley</text>
  </g>
</svg>"#,
            self.width, self.height
        );

        return svg.to_string();
    }
}
