use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewDecoration {
    name: String,
    scale: f32,
    stretch: Stretch,

    reference: String,
    offset: Offset,
}

#[derive(Deserialize)]
struct Object {
    decoration: NewDecoration,
}

#[derive(Deserialize)]
struct Offset {
    x: f32,
    y: f32,
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
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        let id = m.new_decoration_id();
        let x = panel::X::new(&self.reference, self.offset.x);
        let y = panel::Y::new(&self.reference, self.offset.y);

        m.panel.decorations.push(panel::Decoration::new(
            &id,
            &self.name,
            &self.reference,
            &x,
            &y,
            self.scale,
            &panel::Stretch::new(self.stretch.x,self.stretch.y),
        ));

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
