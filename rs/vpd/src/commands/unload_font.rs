use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct UnloadFont {
    name: String,
}

#[derive(Deserialize)]
struct Object {
    font: UnloadFont,
}

impl UnloadFont {
    pub fn new(json: &str) -> Result<UnloadFont, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.font)
    }
}

impl Command for UnloadFont {
    fn apply(&self, m: &mut Module) {
        m.unload_font(&self.name);
    }
}
