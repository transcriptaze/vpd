use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
// use crate::panel;
use crate::svg::Point;

pub struct NewParameterCommand {
    _name: String,
    _anchor: Point,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "parameter")]
    parameter: Parameter,
}

#[derive(Deserialize)]
struct Parameter {
    #[serde(rename = "name")]
    name: Option<String>,

    #[serde(rename = "anchor")]
    anchor: Anchor,
}

#[derive(Deserialize)]
struct Anchor {
    #[serde(rename = "x")]
    x: f32,

    #[serde(rename = "y")]
    y: f32,
}

impl NewParameterCommand {
    pub fn new(json: &str) -> Result<NewParameterCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewParameterCommand {
            _name: o.parameter.name.unwrap_or("".to_string()),
            _anchor: Point {
                x: o.parameter.anchor.x,
                y: o.parameter.anchor.y,
            },
        })
    }
}

impl Command for NewParameterCommand {
    fn apply(&self, _m: &mut Module) {
        // m.panel.labels.push(panel::Label::new(
        //     &self.name,
        //     &self.text,
        //     self.anchor.x,
        //     self.anchor.y,
        //     &path,
        // ));
    }
}
