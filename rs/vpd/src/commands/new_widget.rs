use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::panel::XY;

#[derive(Deserialize)]
pub struct NewWidget {
    name: String,
    x: panel::X,
    y: panel::Y,
    offset: Option<panel::Offset>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "widget")]
    widget: NewWidget,
}

impl NewWidget {
    pub fn new(json: &str) -> Result<NewWidget, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.widget)
    }
}

impl Command for NewWidget {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        let name = self.name.as_str();

        if let Some(_) = m.find_widget(&name) {
            return Some(format!("duplicate widget name '{}'", name).into());
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        let id = m.new_widget_id();
        let xy = XY::new(&self.x, &self.y, &self.offset);

        m.panel
            .widgets
            .push(panel::Widget::new(&id, &self.name, &xy, &self.part));
    }
}
