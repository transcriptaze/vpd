use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewDecoration {
    name: String,
    scale: f32,
    component: String,
}

#[derive(Deserialize)]
struct Object {
    decoration: NewDecoration,
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
        let x = panel::X::new(&self.component, 0.0);
        let y = panel::Y::new(&self.component, 0.0);

        m.panel.decorations.push(panel::Decoration::new(
            &id,
            &self.name,
            &self.component,
            &x,
            &y,
            self.scale,
        ));

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
