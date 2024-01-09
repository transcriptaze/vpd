use std::error::Error;

use serde::Deserialize;

use wasm_bindgen::prelude::*;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[wasm_bindgen(raw_module = "../../javascript/text.js")]
extern "C" {
    fn text2path(text: &str) -> String;
}

#[derive(Deserialize)]
pub struct NewLabelCommand {
    text: String,
    x: panel::X,
    y: panel::Y,
}

#[derive(Deserialize)]
struct Object {
    label: NewLabelCommand,
}

impl NewLabelCommand {
    pub fn new(json: &str) -> Result<NewLabelCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.label)
    }
}

impl Command for NewLabelCommand {
    fn apply(&self, m: &mut Module) {
        let path = text2path(&self.text).to_string();

        m.panel
            .labels
            .push(panel::Label::new(&self.text, &self.x, &self.y, &path));
    }
}
