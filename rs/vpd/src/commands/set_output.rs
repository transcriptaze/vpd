use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize, Debug)]
pub struct SetOutput {
    id: String,
    name: Option<String>,
    x: Option<panel::X>,
    y: Option<panel::Y>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    output: SetOutput,
}

impl SetOutput {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.output)
    }
}

impl Command for SetOutput {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        if let Some(ix) = m.find_output(&self.id) {
            if let Some(name) = &self.name {
                if let Some(jx) = m.find_output(&name) {
                    if ix != jx {
                        return Some(format!("duplicate output name '{}'", name).into());
                    }
                }
            }
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        if let Some(ix) = m.find_output(&self.id) {
            if let Some(name) = &self.name {
                let old = m.panel.outputs[ix].name.clone();
                m.panel.outputs[ix].name = name.to_string();
                m.migrate("output", &old, name);
            }

            if let Some(x) = &self.x {
                m.panel.outputs[ix].x = x.clone();
            }

            if let Some(y) = &self.y {
                m.panel.outputs[ix].y = y.clone();
            }

            if let Some(part) = &self.part {
                if part == "" {
                    m.panel.outputs[ix].part = None;
                } else {
                    m.panel.outputs[ix].part = Some(part.to_string());
                }
            }
        }
    }
}
