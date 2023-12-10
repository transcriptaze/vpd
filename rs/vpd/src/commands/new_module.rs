use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Panel;

pub struct NewModuleCommand {
    name: String,
    width: f32,
    height: f32,
}

#[derive(Deserialize)]
struct V {
    #[serde(rename = "module")]
    module: M,
}

#[derive(Deserialize)]
struct M {
    #[serde(rename = "name")]
    name: String,

    #[serde(rename = "width")]
    width: f32,

    #[serde(rename = "height")]
    height: f32,
}

impl NewModuleCommand {
    pub fn new(json: &str) -> Result<NewModuleCommand, Box<dyn Error>> {
        let v: V = serde_json::from_str(json)?;

        Ok(NewModuleCommand {
            name: v.module.name,
            width: v.module.width,
            height: v.module.height,
        })
    }
}

impl Command for NewModuleCommand {
    fn apply(&self, m: &mut Module) {
        m.name = self.name.clone().into();
        m.panel = Panel::new(self.width, self.height);
    }
}
