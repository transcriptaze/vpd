use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct DeleteInput {
    id: String,
}

#[derive(Deserialize)]
struct Object {
    input: DeleteInput,
}

impl DeleteInput {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.input)
    }
}

impl Command for DeleteInput {
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        if let Some(ix) = m.find_input(&self.id) {
            m.panel.inputs.remove(ix);
        }

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
