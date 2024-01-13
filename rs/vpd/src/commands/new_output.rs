use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewOutput {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    output: NewOutput,
}

impl NewOutput {
    pub fn new(json: &str) -> Result<NewOutput, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.output)
    }
}

impl Command for NewOutput {
    fn apply(&self, m: &mut Module) -> bool {
        let id = m.new_output_id();

        m.panel.outputs.push(panel::Output::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));

        true
    }
}
