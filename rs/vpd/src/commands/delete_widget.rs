use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct DeleteWidget {
    id: String,
}

#[derive(Deserialize)]
struct Object {
    widget: DeleteWidget,
}

impl DeleteWidget {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.widget)
    }
}

impl Command for DeleteWidget {
    fn validate(&self, _m: &mut Module) -> Option<Box<dyn Error>> {
        None
    }

    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        match m.panel.widgets.iter().position(|v| v.id == self.id) {
            Some(ix) => {
                m.panel.widgets.remove(ix);
            }

            None => match m.panel.widgets.iter().position(|v| v.name == self.id) {
                Some(ix) => {
                    m.panel.widgets.remove(ix);
                }

                None => {}
            },
        }

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
