use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct DeleteGuide {
    id: String,
}

#[derive(Deserialize)]
struct Object {
    guide: DeleteGuide,
}

impl DeleteGuide {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.guide)
    }
}

impl Command for DeleteGuide {
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        m.panel.guides.remove(&self.id);

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
