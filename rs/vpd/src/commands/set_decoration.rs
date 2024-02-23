use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize, Debug)]
pub struct SetDecoration {
    id: Option<String>,
    reference: Option<String>,
    name: Option<String>,
    x: Option<Offset>,
    y: Option<Offset>,
    stretch: Option<Stretch>,
    scale: Option<f32>,
}

#[derive(Deserialize)]
struct Object {
    decoration: SetDecoration,
}

#[derive(Deserialize, Debug)]
struct Offset {
    offset: f32,
}

#[derive(Deserialize, Debug)]
struct Stretch {
    x: f32,
    y: f32,
}

impl SetDecoration {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.decoration)
    }
}

impl Command for SetDecoration {
    fn apply(&self, m: &mut Module) {
        if let Some(ix) = m.find_decoration(&self.id, &self.reference, &self.name) {
            if let Some(x) = &self.x {
                m.panel.decorations[ix].x.offset = x.offset;
            }

            if let Some(y) = &self.y {
                m.panel.decorations[ix].y.offset = y.offset;
            }

            if let Some(stretch) = &self.stretch {
                m.panel.decorations[ix].stretch.x = stretch.x;
                m.panel.decorations[ix].stretch.y = stretch.y;
            }

            if let Some(scale) = self.scale {
                m.panel.decorations[ix].scale = scale;
            }
        }
    }
}
