use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct DeleteParameter {
    id: String,
}

#[derive(Deserialize)]
struct Object {
    parameter: DeleteParameter,
}

impl DeleteParameter {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.parameter)
    }
}

impl Command for DeleteParameter {
    fn validate(&self, _m: &mut Module) -> Option<Box<dyn Error>> {
        None
    }

    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        match m.panel.parameters.iter().position(|v| v.id == self.id) {
            Some(ix) => {
                m.panel.parameters.remove(ix);
            }

            None => match m.panel.parameters.iter().position(|v| v.name == self.id) {
                Some(ix) => {
                    m.panel.parameters.remove(ix);
                }

                None => {}
            },
        }

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
