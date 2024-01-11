use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewInputCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    input: NewInputCommand,
}

impl NewInputCommand {
    pub fn new(json: &str) -> Result<NewInputCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.input)
    }
}

impl Command for NewInputCommand {
    fn apply(&self, m: &mut Module) -> bool {
        let id = m.new_input_id();

        m.panel.inputs.push(panel::Input::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));

        true
    }
}
