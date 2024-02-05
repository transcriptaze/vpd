use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Guide;

use crate::utils::log;
use crate::warnf;

#[derive(Deserialize, Debug)]
pub struct NewGuide {
    name: Option<String>,
    orientation: String,
    reference: String,
    offset: f32,
}

#[derive(Deserialize)]
struct Object {
    guide: NewGuide,
}

impl NewGuide {
    pub fn new(json: &str) -> Result<NewGuide, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.guide)
    }
}

impl Command for NewGuide {
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        let reference = self.reference.as_str();
        let orientation = match (self.orientation.as_str(), reference) {
            ("", "V0") => "vertical",
            ("", "H0") => "horizontal",

            ("", "left") => "vertical",
            ("", "centre") => "vertical",
            ("", "center") => "vertical",
            ("", "right") => "vertical",

            ("", "top") => "horizontal",
            ("", "middle") => "horizontal",
            ("", "bottom") => "horizontal",

            ("", v) => match m.panel.guides.get(v) {
                Some(g) => match (&g.x, &g.y) {
                    (Some(_), None) => "vertical",
                    (None, Some(_)) => "horizontal",
                    _ => "",
                },
                _ => "",
            },

            (o, _) => o,
        };

        let id = match &self.name {
            Some(v) => v.to_string(),
            None => m.new_guide_id(&orientation, &reference),
        };

        if validate(&id, &reference, &m) {
            m.panel
                .guides
                .entry(id)
                .or_insert(Guide::new(&orientation, &reference, self.offset));

            match line {
                Some(v) => m.script.push(v.to_string()),
                _ => {}
            }
        }

        true
    }
}

fn validate(id: &str, reference: &str, m: &Module) -> bool {
    // ... name
    if m.panel.guides.contains_key(id) {
        warnf!("duplicate guideline ID '{}'", id);
        return false;
    }

    // ... reference
    match reference {
        "" => false,

        "absolute" | "origin" | "V0" | "H0" => true,
        "left" | "centre" | "center" | "right" => true,
        "top" | "middle" | "bottom" => true,

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
