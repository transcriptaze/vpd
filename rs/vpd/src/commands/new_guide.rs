use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Guide;

use crate::utils::log;
use crate::warnf;

pub struct NewGuideCommand {
    name: Option<String>,
    orientation: String,
    reference: String,
    offset: f32,
}

#[derive(Deserialize)]
struct V {
    #[serde(rename = "guide")]
    guide: G,
}

#[derive(Deserialize)]
struct G {
    #[serde(rename = "name")]
    name: Option<String>,

    #[serde(rename = "orientation")]
    orientation: String,

    #[serde(rename = "reference")]
    reference: String,

    #[serde(rename = "offset")]
    offset: f32,
}

impl NewGuideCommand {
    pub fn new(json: &str) -> Result<NewGuideCommand, Box<dyn Error>> {
        let v: V = serde_json::from_str(json)?;

        Ok(NewGuideCommand {
            name: v.guide.name,
            orientation: v.guide.orientation,
            reference: v.guide.reference,
            offset: v.guide.offset,
        })
    }
}

impl Command for NewGuideCommand {
    fn apply(&self, m: &mut Module) {
        let name = match &self.name {
            Some(v) => v.to_string(),
            None => m.panel.new_guide_name(&self.orientation),
        };

        let reference = self.reference.as_str();

        match reference {
            "" => {}

            "absolute" | "origin" | "left" | "centre" | "center" | "right" | "top" | "middle"
            | "bottom" => {
                m.panel.guides.entry(name).or_insert(Guide::new(
                    &self.orientation,
                    &reference,
                    self.offset,
                ));
            }

            _ => {
                if m.panel.guides.contains_key(reference) {
                    m.panel.guides.entry(name).or_insert(Guide::new(
                        &self.orientation,
                        &reference,
                        self.offset,
                    ));
                } else {
                    warnf!("no reference guideline '{}'", reference);
                }
            }
        }
    }
}
