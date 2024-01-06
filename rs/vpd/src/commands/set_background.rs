use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct SetBackgroundCommand {
    rgb: Option<String>,
    rgba: Option<String>,
    name: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    background: SetBackgroundCommand,
}

impl SetBackgroundCommand {
    pub fn new(json: &str) -> Result<SetBackgroundCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.background)
    }
}

impl Command for SetBackgroundCommand {
    fn apply(&self, _m: &mut Module) {
    }
}
