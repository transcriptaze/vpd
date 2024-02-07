use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct SetInput {
    id: String,
    name: Option<String>,
    x: Option<panel::X>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    input: SetInput,
}

impl SetInput {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.input)
    }
}

impl Command for SetInput {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        if let Some(ix) = m.find_input(&self.id) {
            if let Some(name) = &self.name {
                if let Some(jx) = m.find_input(&name) {
                    if ix != jx {
                        return Some(format!("duplicate input name '{}'", name).into());
                    }
                }
            }
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        if let Some(ix) = m.find_input(&self.id) {
            if let Some(name) = &self.name {
                let old = m.panel.inputs[ix].name.clone();
                m.panel.inputs[ix].name = name.to_string();
                m.migrate("input", &old, name);
            }

            if let Some(x) = &self.x {
                m.panel.inputs[ix].x = x.clone();
            }

            if let Some(part) = &self.part {
                if part == "" {
                    m.panel.inputs[ix].part = None;
                } else {
                    m.panel.inputs[ix].part = Some(part.to_string());
                }
            }
        }
    }
}
