use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

pub struct SetOriginCommand {
    x: XY,
    y: XY,
}

pub struct XY {
    reference: String,
    offset: f32,
}

#[derive(Deserialize)]
struct V {
    #[serde(rename = "origin")]
    origin: O,
}

#[derive(Deserialize)]
struct O {
    #[serde(rename = "x")]
    x: xy,

    #[serde(rename = "y")]
    y: xy,
}

#[derive(Deserialize)]
#[allow(non_camel_case_types)]
struct xy {
    #[serde(rename = "reference")]
    reference: String,

    #[serde(rename = "offset")]
    offset: f32,
}

impl SetOriginCommand {
    pub fn new(json: &str) -> Result<SetOriginCommand, Box<dyn Error>> {
        let v: V = serde_json::from_str(json)?;

        Ok(SetOriginCommand {
            x: XY {
                reference: v.origin.x.reference,
                offset: v.origin.x.offset,
            },
            y: XY {
                reference: v.origin.y.reference,
                offset: v.origin.y.offset,
            },
        })
    }
}

impl Command for SetOriginCommand {
    fn apply(&self, m: &mut Module) {
        m.panel.origin.set_x(&self.x.reference, self.x.offset);
        m.panel.origin.set_y(&self.y.reference, self.y.offset);
    }
}
