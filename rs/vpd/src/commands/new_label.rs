use std::error::Error;

use serde::Deserialize;

use wasm_bindgen::prelude::*;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::svg::Point;

#[wasm_bindgen(raw_module = "../../javascript/text.js")]
extern "C" {
    fn text2path(text: &str) -> String;
}

pub struct NewLabelCommand {
    name: String,
    text: String,
    anchor: Point,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "label")]
    label: Label,
}

#[derive(Deserialize)]
struct Label {
    #[serde(rename = "name")]
    name: Option<String>,

    #[serde(rename = "text")]
    text: String,

    #[serde(rename = "anchor")]
    anchor: Anchor,
}

#[derive(Deserialize)]
struct Anchor {
    #[serde(rename = "x")]
    x: f32,

    #[serde(rename = "y")]
    y: f32,
}

impl NewLabelCommand {
    pub fn new(json: &str) -> Result<NewLabelCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewLabelCommand {
            name: o.label.name.unwrap_or("".to_string()),
            text: o.label.text,
            anchor: Point {
                x: o.label.anchor.x,
                y: o.label.anchor.y,
            },
        })
    }
}

impl Command for NewLabelCommand {
    fn apply(&self, m: &mut Module) {
        let name = self.name.clone();
        let text = self.text.clone();
        let x = self.anchor.x;
        let y = self.anchor.y;
        let path = text2path(&self.text);

        m.panel
            .labels
            .push(panel::Label::new(name, text, x, y, path));
    }
}
