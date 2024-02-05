use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct DeleteOutput {
    id: String,
}

#[derive(Deserialize)]
struct Object {
    output: DeleteOutput,
}

impl DeleteOutput {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.output)
    }
}

impl Command for DeleteOutput {
    fn validate(&self, _m: &mut Module) -> Option<Box<dyn Error>> {
        None
    }

    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        match m.panel.outputs.iter().position(|v| v.id == self.id) {
            Some(ix) => {
                m.panel.outputs.remove(ix);
            }

            None => match m.panel.outputs.iter().position(|v| v.name == self.id) {
                Some(ix) => {
                    m.panel.outputs.remove(ix);
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
