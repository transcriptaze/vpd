use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct SetModule {
    name: Option<String>,
    width: Option<f32>,
    height: Option<f32>,
}

#[derive(Deserialize)]
struct Object {
    module: SetModule,
}

impl SetModule {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.module)
    }
}

impl Command for SetModule {
    fn apply(&self, m: &mut Module) {
        match &self.name {
            Some(v) => {
                m.name = v.clone();
            }
            _ => {}
        }

        match self.height {
            Some(v) => m.panel.height = v,
            _ => {}
        }

        match self.width {
            Some(v) => m.panel.width = v,
            _ => {}
        }
    }
}
