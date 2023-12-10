use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

pub struct SetOriginCommand {
    _x: String,
    _y: String,
}

#[derive(Deserialize)]
struct V {
    #[serde(rename = "origin")]
    origin: O,
}

#[derive(Deserialize)]
struct O {
    #[serde(rename = "x")]
    x: String,

    #[serde(rename = "y")]
    y: String,
}

impl SetOriginCommand {
    pub fn new(json: &str) -> Result<SetOriginCommand, Box<dyn Error>> {
        let v: V = serde_json::from_str(json)?;

        Ok(SetOriginCommand {
            _x: v.origin.x,
            _y: v.origin.y,
        })
    }
}

impl Command for SetOriginCommand {
    fn apply(&self, _m: &mut Module) {}
}
