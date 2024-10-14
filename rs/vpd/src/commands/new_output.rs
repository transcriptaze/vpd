use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::panel::XY;

#[derive(Deserialize)]
pub struct NewOutput {
    name: String,
    x: panel::X,
    y: panel::Y,
    offset: Option<panel::Offset>,
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
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        let name = self.name.as_str();

        if let Some(_) = m.find_output(&name) {
            return Some(format!("duplicate output name '{}'", name).into());
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        let id = m.new_output_id();
        let xy = XY::new(&self.x, &self.y, &self.offset);

        m.panel
            .outputs
            .push(panel::Output::new(&id, &self.name, &xy, &self.part));
    }
}
