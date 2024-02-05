use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct SetInput {
    id: String,
    name: Option<String>,
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

    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        if let Some(ix) = m.find_input(&self.id) {
            if let Some(name) = &self.name {
                m.panel.inputs[ix].name = name.to_string();
            }
        }

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
