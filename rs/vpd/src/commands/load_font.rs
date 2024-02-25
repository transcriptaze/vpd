use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct LoadFont {}

#[derive(Deserialize)]
struct Object {
    font: LoadFont,
}

impl LoadFont {
    pub fn new(json: &str) -> Result<LoadFont, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.font)
    }
}

impl Command for LoadFont {
    fn apply(&self, m: &mut Module) {
        m.load_font();
    }
}
