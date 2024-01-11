use std::error::Error;

use serde::Deserialize;

use wasm_bindgen::prelude::*;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

const FONT: &str = "RobotoMono-Bold";
const FONTSIZE: f32 = 12.0;

#[wasm_bindgen(raw_module = "../../javascript/text.js")]
extern "C" {
    fn text2path(text: &str, font: &str, fontsize: f32) -> String;
}

#[derive(Deserialize)]
pub struct NewLabel {
    text: String,
    x: panel::X,
    y: panel::Y,
    font: Option<String>,
    fontsize: Option<f32>,
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
        let path = match (&self.font,self.fontsize) {
            (Some(font),Some(fontsize)) => text2path(&self.text,&font, fontsize),
            (Some(font),_) => text2path(&self.text,&font, FONTSIZE),
            (_,Some(fontsize)) => text2path(&self.text,FONT, fontsize),
            (_,_) => text2path(&self.text, FONT, FONTSIZE),
        }.to_string();

        m.panel
            .labels
            .push(panel::Label::new(&self.text, &self.x, &self.y, &path));
    }
}
