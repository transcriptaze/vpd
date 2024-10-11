use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::ISet;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize, Debug)]
pub struct SetLight {
    id: String,
    name: Option<String>,
    x: Option<panel::X>,
    y: Option<panel::Y>,
    offset: Option<panel::Offset>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    light: SetLight,
}

impl SetLight {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.light)
    }
}

impl Command for SetLight {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        if let Some(ix) = m.find_light(&self.id) {
            if let Some(name) = &self.name {
                if let Some(jx) = m.find_light(&name) {
                    if ix != jx {
                        return Some(format!("duplicate light name '{}'", name).into());
                    }
                }
            }
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        if let Some(ix) = m.find_light(&self.id) {
            if let Some(name) = &self.name {
                let old = m.panel.lights[ix].name.clone();
                m.panel.lights[ix].name = name.to_string();
                m.migrate("light", &old, name);
            }

            if let Some(x) = &self.x {
                m.panel.lights[ix].set_x(&x);
            }

            if let Some(y) = &self.y {
                m.panel.lights[ix].set_y(&y);
            }

            if let Some(_) = &self.offset {
                let l = &mut m.panel.lights[ix];

                l.set_offset(&self.offset);
            }

            if let Some(part) = &self.part {
                if part == "" {
                    m.panel.lights[ix].part = None;
                } else {
                    m.panel.lights[ix].part = Some(part.to_string());
                }
            }
        }
    }
}
