use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize, Debug)]
pub struct SetGuide {
    id: String,
    xy: Option<XY>,
}

#[derive(Deserialize)]
struct Object {
    guide: SetGuide,
}

#[derive(Deserialize, Debug)]
struct XY {
    pub reference: String,
    pub offset: f32,
}

impl SetGuide {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.guide)
    }
}

impl Command for SetGuide {
    fn apply(&self, m: &mut Module) {
        if let Some(g) = m.find_guide(&self.id) {
            if let Some(xy) = &self.xy {
                if let Some(x) = &mut g.x {
                    x.reference = xy.reference.clone();
                    x.offset = xy.offset;
                }

                if let Some(y) = &mut g.y {
                    y.reference = xy.reference.clone();
                    y.offset = xy.offset;
                }
            }
        }
    }
}
