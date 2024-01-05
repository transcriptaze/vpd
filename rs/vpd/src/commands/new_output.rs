use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewOutputCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    output: NewOutputCommand,
}

impl NewOutputCommand {
    pub fn new(json: &str) -> Result<NewOutputCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewOutputCommand {
            name: o.output.name.to_string(),
            x: panel::X {
                reference: o.output.x.reference,
                offset: o.output.x.offset,
            },
            y: panel::Y {
                reference: o.output.y.reference,
                offset: o.output.y.offset,
            },
            part: o.output.part,
        })
    }
}

impl Command for NewOutputCommand {
    fn apply(&self, m: &mut Module) {
        let id = m.new_output_id();

        m.panel.outputs.push(panel::Output::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));
    }
}
