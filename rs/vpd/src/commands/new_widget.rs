use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewWidgetCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "widget")]
    widget: NewWidgetCommand,
}

impl NewWidgetCommand {
    pub fn new(json: &str) -> Result<NewWidgetCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewWidgetCommand {
            name: o.widget.name.to_string(),
            x: panel::X {
                reference: o.widget.x.reference,
                offset: o.widget.x.offset,
            },
            y: panel::Y {
                reference: o.widget.y.reference,
                offset: o.widget.y.offset,
            },
            part: o.widget.part,
        })
    }
}

impl Command for NewWidgetCommand {
    fn apply(&self, m: &mut Module) {
        let id = m.new_widget_id();

        m.panel.widgets.push(panel::Widget::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));
    }
}
