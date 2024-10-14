use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::panel::XY;

#[derive(Deserialize)]
pub struct NewDecoration {
    name: String,
    x: panel::X,
    y: panel::Y,
    offset: Option<panel::Offset>,
    scale: f32,
    stretch: Stretch,
}

#[derive(Deserialize)]
struct Object {
    decoration: NewDecoration,
}

#[derive(Deserialize)]
struct Stretch {
    x: f32,
    y: f32,
}

impl NewDecoration {
    pub fn new(json: &str) -> Result<NewDecoration, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.decoration)
    }
}

impl Command for NewDecoration {
    fn apply(&self, m: &mut Module) {
        let id = m.new_decoration_id();
        let xy = XY::new(&self.x, &self.y, &self.offset);

        m.panel.decorations.push(panel::Decoration::new(
            &id,
            &self.name,
            &xy,
            self.scale,
            &panel::Stretch::new(self.stretch.x, self.stretch.y),
        ));
    }
}
