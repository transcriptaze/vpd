use serde::Deserialize;
use serde::Serialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct ListFonts {
    preloaded: Vec<String>,
    user: Vec<String>,
}

#[derive(Deserialize)]
struct Object {
    fonts: ListFonts,
}

#[derive(Serialize)]
struct FontList {
    preloaded: Vec<String>,
    user: Vec<String>,
}

impl ListFonts {
    pub fn new(json: &str) -> Result<ListFonts, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.fonts)
    }
}

impl Command for ListFonts {
    fn apply(&self, m: &mut Module) {
        let object = FontList {
            preloaded: self.preloaded.clone(),
            user: self.user.clone(),
        };

        m.list_fonts(&object);
    }
}
