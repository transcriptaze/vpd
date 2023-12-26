use super::panel::Panel;
use super::panel::DEFAULT_HEIGHT;
use super::panel::DEFAULT_WIDTH;
use super::serde::{Deserialize, Serialize};

use wasm_bindgen::prelude::*;

use crate::utils::log;
use crate::warnf;

#[wasm_bindgen(raw_module = "../../javascript/fs.js")]
extern "C" {
    fn save(text: &str, blob: &str);
}

#[derive(Serialize, Deserialize)]
pub struct Module {
    pub name: Box<str>,
    pub panel: Panel,
}

pub fn new() -> Module {
    return Module {
        name: "unknown".into(),
        panel: Panel::new(DEFAULT_WIDTH, DEFAULT_HEIGHT),
    };
}

impl Module {
    pub fn export_svg(&self, theme: &str) {
        match self.panel.export_SVG(theme) {
            Ok(blob) => {
                let filename = match theme {
                    "dark" => format!("{}-dark.svg", self.name),
                    _ => format!("{}.svg", self.name),
                };

                save(&filename, &blob);
            }
            Err(e) => warnf!("error generating SVG '{:?}'", e),
        }
    }
}
