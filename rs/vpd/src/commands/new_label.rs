use std::error::Error;

use serde::Deserialize;

use wasm_bindgen::prelude::*;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

const FONT: &str = "RobotoMono-Bold";

#[wasm_bindgen(raw_module = "../../javascript/text.js")]
extern "C" {
    fn text2path(text: &str, font: &str) -> String;
}

#[derive(Deserialize)]
pub struct NewLabel {
    text: String,
    x: panel::X,
    y: panel::Y,
    font: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    label: NewLabel,
}

impl NewLabel {
    pub fn new(json: &str) -> Result<NewLabel, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.label)
    }
}

impl Command for NewLabel {
    fn apply(&self, m: &mut Module) {
        let path = match &self.font {
            Some(font) => text2path(&self.text,&font),
            None => text2path(&self.text, FONT),
        }.to_string();

        m.panel
            .labels
            .push(panel::Label::new(&self.text, &self.x, &self.y, &path));
    }
}
