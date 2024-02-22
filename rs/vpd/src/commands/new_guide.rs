use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Guide;
use crate::panel::X;
use crate::panel::Y;

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
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        // ... id
        if let Some(name) = &self.name {
            if let Some(_) = m.find_guide(&name) {
                return Some(format!("duplicate guide name '{}'", name).into());
            }
        }

        // ... reference
        match self.reference.as_str() {
            "" => {}
            "absolute" | "origin" | "V0" | "H0" => {}
            "left" | "centre" | "center" | "right" => {}
            "top" | "middle" | "bottom" => {}

            reference => {
                if !m.panel.guides.contains_key(reference) {
                    return Some(format!("missing reference guideline '{}'", reference).into());
                }
            }
        };

        // ... duplicate offset?
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

        if orientation == "vertical" {
            let x = X::new(reference, self.offset).resolve(&m.panel);

            for (k, v) in m.panel.guides.iter() {
                if let Some(g) = &v.x {
                    let dx = x - g.resolve(&m.panel);
                    if dx.abs() < 0.25 {
                        return Some(format!("duplicate guideline offset '{}'", k).into());
                    }
                }
            }
        }

        if orientation == "horizontal" {
            let y = Y::new(reference, self.offset).resolve(&m.panel);

            for (k, v) in m.panel.guides.iter() {
                if let Some(g) = &v.y {
                    let dy = y - g.resolve(&m.panel);
                    if dy.abs() < 0.25 {
                        return Some(format!("duplicate guideline offset '{}'", k).into());
                    }
                }
            }
        }

        None
    }

    fn apply(&self, m: &mut Module) {
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

        m.panel.guides.entry(id.clone()).or_insert(Guide::new(
            &id,
            &orientation,
            &reference,
            self.offset,
        ));
    }
}
