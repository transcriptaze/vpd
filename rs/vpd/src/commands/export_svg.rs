use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

pub struct ExportSVGCommand {
    theme: String,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "svg")]
    svg: SVG,
}

#[derive(Deserialize)]
struct SVG {
    #[serde(rename = "theme")]
    theme: String,
}

impl ExportSVGCommand {
    pub fn new(json: &str) -> Result<ExportSVGCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(ExportSVGCommand { theme: o.svg.theme })
    }
}

impl Command for ExportSVGCommand {
    fn apply(&self, m: &mut Module) {
        m.export_svg(&self.theme);
    }
}
