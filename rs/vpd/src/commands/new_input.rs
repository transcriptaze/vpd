use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewInput {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    input: NewInput,
}

impl NewInput {
    pub fn new(json: &str) -> Result<NewInput, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.input)
    }
}

impl Command for NewInput {
    fn apply(&self, m: &mut Module) -> bool {
        let id = m.new_input_id();

        m.panel.inputs.push(panel::Input::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));

        true
    }
}
