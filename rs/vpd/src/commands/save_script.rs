use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct SaveScript {
    timestamp: Option<bool>,
}

#[derive(Deserialize)]
struct Object {
    script: SaveScript,
}

impl SaveScript {
    pub fn new(json: &str) -> Result<SaveScript, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.script)
    }
}

impl Command for SaveScript {
    fn apply(&self, m: &mut Module) {
        let timestamp = match self.timestamp {
            Some(v) => v,
            _ => false,
        };

        m.save_script(timestamp);
    }
}
