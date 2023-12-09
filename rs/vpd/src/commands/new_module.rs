use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

pub struct NewModuleCommand {
    _name: String,
    _width: f64,
    _height: f64,
}

#[derive(Deserialize)]
struct V {
    #[serde(rename = "action")]
    _action: String,
    module: M,
}

#[derive(Deserialize)]
struct M {
    name: String,
    width: f64,
    height: f64,
}

impl NewModuleCommand {
    pub fn new(json: &str) -> Result<NewModuleCommand, Box<dyn Error>> {
        let v: V = serde_json::from_str(json)?;

        Ok(NewModuleCommand {
            _name: v.module.name,
            _width: v.module.width,
            _height: v.module.height,
        })
    }
}

impl Command for NewModuleCommand {
    fn apply(&self, m: &mut Module) {
        m.name = "kwitequte".into();
    }
}
