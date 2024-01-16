use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Panel;

#[derive(Deserialize)]
pub struct NewModule {
    name: String,
    width: f32,
    height: f32,
}

#[derive(Deserialize)]
struct Object {
    module: NewModule,
}

impl NewModule {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.module)
    }
}

impl Command for NewModule {
    // fn new(json: &str) -> Result<Self, Box<dyn Error>> {
    //     let object: Object = serde_json::from_str(json)?;

    //     Ok(object.module)
    // }

    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        m.name = self.name.clone().into();
        m.panel = Panel::new(self.width, self.height);

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
