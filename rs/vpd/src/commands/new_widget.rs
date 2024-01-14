use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewWidget {
    name: String,
    x: panel::X,
    y: panel::Y,
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
    fn apply(&self, m: &mut Module) -> bool {
        let id = m.new_widget_id();

        m.panel.widgets.push(panel::Widget::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));

        true
    }
}
