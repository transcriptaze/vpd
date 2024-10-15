use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::IWidget;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize, Debug)]
pub struct SetDecoration {
    id: Option<String>,
    reference: Option<String>,
    name: Option<String>,
    x: Option<Offset>,
    y: Option<Offset>,
    offset: Option<panel::Offset>,
    stretch: Option<Stretch>,
    scale: Option<f32>,
}

#[derive(Deserialize)]
struct Object {
    decoration: SetDecoration,
}

#[derive(Deserialize, Debug)]
struct Offset {
    reference: Option<String>,
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
                if let Some(reference) = &x.reference {
                    m.panel.decorations[ix].xy.x.reference = reference.to_string();
                }

                m.panel.decorations[ix].xy.x.set_offset(x.offset);
            }

            if let Some(y) = &self.y {
                if let Some(reference) = &y.reference {
                    m.panel.decorations[ix].xy.y.reference = reference.to_string();
                }

                m.panel.decorations[ix].xy.y.set_offset(y.offset);
            }

            if let Some(_) = &self.offset {
                let d = &mut m.panel.decorations[ix];

                d.set_offset(&self.offset);
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
