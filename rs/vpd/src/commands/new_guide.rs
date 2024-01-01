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
struct E {
    #[serde(rename = "guide")]
    guide: V,
}

#[derive(Deserialize)]
struct V {
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
        let e: E = serde_json::from_str(json)?;

        Ok(NewGuideCommand {
            name: e.guide.name,
            orientation: e.guide.orientation,
            reference: e.guide.reference,
            offset: e.guide.offset,
        })
    }
}

impl Command for NewGuideCommand {
    fn apply(&self, m: &mut Module) {
        let name = match &self.name {
            Some(v) => v.to_string(),
            None => m.panel.new_guide_name(&self.orientation, &self.reference),
        };

        let reference = self.reference.as_str();
        let orientation = match (self.orientation.as_str(), reference) {
            ("", "left") => "vertical",
            ("", "centre") => "vertical",
            ("", "center") => "vertical",
            ("", "right") => "vertical",

            ("", "top") => "horizontal",
            ("", "middle") => "horizontal",
            ("", "bottom") => "horizontal",

            ("", v) => match m.panel.guides.get(v) {
                Some(g) => match g.orientation.as_str() {
                    "vertical" => "vertical",
                    "horizontal" => "horizontal",
                    _ => "",
                },
                _ => "",
            },

            (o, _) => o,
        };

        if validate(&name, &reference, &m) {
            m.panel
                .guides
                .entry(name)
                .or_insert(Guide::new(&orientation, &reference, self.offset));
        }
    }
}

fn validate(name: &str, reference: &str, m: &Module) -> bool {
    // ... name
    if m.panel.guides.contains_key(name) {
        warnf!("duplicate guideline name '{}'", name);
        return false;
    }

    // ... reference
    match reference {
        "" => false,

        "absolute" | "origin" | "left" | "centre" | "center" | "right" | "top" | "middle"
        | "bottom" => true,

        _ => {
            if m.panel.guides.contains_key(reference) {
                true
            } else {
                warnf!("no reference guideline '{}'", reference);
                false
            }
        }
    }
}
