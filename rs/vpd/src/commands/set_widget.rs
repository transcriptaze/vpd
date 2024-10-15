use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::IWidget;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize, Debug)]
pub struct SetWidget {
    id: String,
    name: Option<String>,
    x: Option<panel::X>,
    y: Option<panel::Y>,
    offset: Option<panel::Offset>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    widget: SetWidget,
}

impl SetWidget {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.widget)
    }
}

impl Command for SetWidget {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        if let Some(ix) = m.find_widget(&self.id) {
            if let Some(name) = &self.name {
                if let Some(jx) = m.find_widget(&name) {
                    if ix != jx {
                        return Some(format!("duplicate widget name '{}'", name).into());
                    }
                }
            }
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        if let Some(ix) = m.find_widget(&self.id) {
            if let Some(name) = &self.name {
                let old = m.panel.widgets[ix].name.clone();
                m.panel.widgets[ix].name = name.to_string();
                m.migrate("widget", &old, name);
            }

            if let Some(x) = &self.x {
                m.panel.widgets[ix].set_x(&x);
            }

            if let Some(y) = &self.y {
                m.panel.widgets[ix].set_y(&y);
            }

            if let Some(_) = &self.offset {
                let w = &mut m.panel.widgets[ix];

                w.set_offset(&self.offset);
            }

            if let Some(part) = &self.part {
                if part == "" {
                    m.panel.widgets[ix].part = None;
                } else {
                    m.panel.widgets[ix].part = Some(part.to_string());
                }
            }
        }
    }
}
