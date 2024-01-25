use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Panel;

const HEIGHT: f32 = 128.5;

#[derive(Deserialize)]
pub struct NewModule {
    name: String,
    width: f32,
    height: Option<f32>,
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
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        let height = match self.height {
            Some(h) => h,
            _ => HEIGHT,
        };

        m.name = self.name.clone().into();
        m.panel = Panel::new(self.width, height);

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
