use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::panel::X;
use crate::panel::Y;

#[derive(Deserialize, Debug)]
pub struct SetInput {
    id: String,
    name: Option<String>,
    x: Option<panel::X>,
    y: Option<panel::Y>,
    offset: Option<panel::Offset>,
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

            if let Some(y) = &self.y {
                m.panel.inputs[ix].y = y.clone();
            }

            if let Some(offset) = &self.offset {
                let x = X::new_with_offset(
                    m.panel.inputs[ix].x.reference.as_str(),
                    m.panel.inputs[ix].x.offset,
                    &self.offset,
                );

                let y = Y::new_with_offset(
                    m.panel.inputs[ix].y.reference.as_str(),
                    m.panel.inputs[ix].y.offset,
                    &self.offset,
                );

                m.panel.inputs[ix].x = x;
                m.panel.inputs[ix].y = y;
                m.panel.inputs[ix].offset = Some(offset.clone());
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
