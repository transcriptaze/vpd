use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct DeleteLight {
    id: String,
}

#[derive(Deserialize)]
struct Object {
    light: DeleteLight,
}

impl DeleteLight {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.light)
    }
}

impl Command for DeleteLight {
    fn apply(&self, m: &mut Module) {
        match m.panel.lights.iter().position(|v| v.id == self.id) {
            Some(ix) => {
                m.panel.lights.remove(ix);
            }

            None => match m.panel.lights.iter().position(|v| v.name == self.id) {
                Some(ix) => {
                    m.panel.lights.remove(ix);
                }

                None => {}
            },
        }
    }
}
