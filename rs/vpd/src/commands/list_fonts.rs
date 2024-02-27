use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct ListFonts {
    local: Vec<String>,
}

#[derive(Deserialize)]
struct Object {
    fonts: ListFonts,
}

impl ListFonts {
    pub fn new(json: &str) -> Result<ListFonts, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.fonts)
    }
}

impl Command for ListFonts {
    fn apply(&self, m: &mut Module) {
        m.list_fonts(&self.local);
    }
}
