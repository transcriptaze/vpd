use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

pub struct NewInputCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    input: Input,
}

#[derive(Deserialize)]
struct Input {
    name: String,
    x: X,
    y: Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct X {
    reference: String,
    offset: f32,
}

#[derive(Deserialize)]
struct Y {
    reference: String,
    offset: f32,
}

impl NewInputCommand {
    pub fn new(json: &str) -> Result<NewInputCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewInputCommand {
            name: o.input.name.to_string(),
            x: panel::X {
                reference: o.input.x.reference,
                offset: o.input.x.offset,
            },
            y: panel::Y {
                reference: o.input.y.reference,
                offset: o.input.y.offset,
            },
            part: o.input.part,
        })
    }
}

impl Command for NewInputCommand {
    fn apply(&self, m: &mut Module) {
        let id = m.new_input_id();

        m.panel.inputs.push(panel::Input::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));
    }
}
