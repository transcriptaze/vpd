use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

pub struct NewInputCommand {
    name: String,
    x: panel::Anchor,
    y: panel::Anchor,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "input")]
    input: Input,
}

#[derive(Deserialize)]
struct Input {
    #[serde(rename = "name")]
    name: Option<String>,

    #[serde(rename = "x")]
    x: Anchor,

    #[serde(rename = "y")]
    y: Anchor,
}

#[derive(Deserialize)]
struct Anchor {
    #[serde(rename = "reference")]
    reference: String,

    #[serde(rename = "offset")]
    offset: f32,
}

impl NewInputCommand {
    pub fn new(json: &str) -> Result<NewInputCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewInputCommand {
            name: o.input.name.unwrap_or("".to_string()),
            x: panel::Anchor {
                reference: o.input.x.reference,
                offset: o.input.x.offset,
            },
            y: panel::Anchor {
                reference: o.input.y.reference,
                offset: o.input.y.offset,
            },
        })
    }
}

impl Command for NewInputCommand {
    fn apply(&self, m: &mut Module) {
        m.panel
            .inputs
            .push(panel::Input::new(&self.name, &self.x, &self.y));
    }
}
