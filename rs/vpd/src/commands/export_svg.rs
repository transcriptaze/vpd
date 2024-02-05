use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

pub struct ExportSVG {
    theme: String,
}

#[derive(Deserialize)]
struct Object {
    svg: SVG,
}

#[derive(Deserialize)]
struct SVG {
    theme: String,
}

impl ExportSVG {
    pub fn new(json: &str) -> Result<ExportSVG, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(ExportSVG { theme: o.svg.theme })
    }
}

impl Command for ExportSVG {
    fn apply(&self, m: &mut Module, _line: &Option<String>) -> bool {
        m.export_svg(&self.theme);
        false
    }
}
