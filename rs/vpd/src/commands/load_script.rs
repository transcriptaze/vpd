use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct LoadScript {}

#[derive(Deserialize)]
struct Object {
    script: LoadScript,
}

impl LoadScript {
    pub fn new(json: &str) -> Result<LoadScript, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.script)
    }
}

impl Command for LoadScript {
    fn validate(&self, _m: &mut Module) -> Option<Box<dyn Error>> {
        None
    }

    fn apply(&self, m: &mut Module, _line: &Option<String>) -> bool {
        m.load_script();
        false
    }
}
