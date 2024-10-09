use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::ISet;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize, Debug)]
pub struct SetParameter {
    id: String,
    name: Option<String>,
    x: Option<panel::X>,
    y: Option<panel::Y>,
    offset: Option<panel::Offset>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    parameter: SetParameter,
}

impl SetParameter {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.parameter)
    }
}

impl Command for SetParameter {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        if let Some(ix) = m.find_parameter(&self.id) {
            if let Some(name) = &self.name {
                if let Some(jx) = m.find_parameter(&name) {
                    if ix != jx {
                        return Some(format!("duplicate parameter name '{}'", name).into());
                    }
                }
            }
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        if let Some(ix) = m.find_parameter(&self.id) {
            if let Some(name) = &self.name {
                let old = m.panel.parameters[ix].name.clone();
                m.panel.parameters[ix].name = name.to_string();
                m.migrate("parameter", &old, name);
            }

            if let Some(x) = &self.x {
                m.panel.parameters[ix].x = x.clone();
            }

            if let Some(y) = &self.y {
                m.panel.parameters[ix].y = y.clone();
            }

            if let Some(_) = &self.offset {
                let p = &mut m.panel.parameters[ix];

                p.set_offset(&self.offset);
            }

            if let Some(part) = &self.part {
                if part == "" {
                    m.panel.parameters[ix].part = None;
                } else {
                    m.panel.parameters[ix].part = Some(part.to_string());
                }
            }
        }
    }
}
