use regex::Regex;
use serde::{Deserialize, Serialize};

const DECORATIONS: [&'static str; 2] = ["CircularGraduations", "Pad"];

#[derive(Serialize, Deserialize, Debug)]
pub struct Snippet {
    pub name: String,
    pub x: f32,
    pub y: f32,
    pub scale: f32,
    pub stretch: Stretch,
    pub template: String,
    pub label: String,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Stretch {
    x: f32,
    y: f32,
}

impl Snippet {
    pub fn new(name: &str, x: f32, y: f32, scale: f32, stretch: &Stretch, label: &str) -> Snippet {
        let template = match DECORATIONS
            .iter()
            .find(|v| normalise(*v) == normalise(&name))
        {
            Some(p) => p,
            None => "placeholder",
        };

        Snippet {
            name: name.to_string(),
            x: x,
            y: y,
            scale: scale,
            stretch: stretch.clone(),
            template: template.to_string(),
            label: label.to_string(),
        }
    }
}

impl Stretch {
    pub fn new(x: f32, y: f32) -> Stretch {
        Stretch { x: x, y: y }
    }
}

fn normalise(v: &str) -> String {
    Regex::new(r#"\s+"#)
        .unwrap()
        .replace_all(v, "")
        .to_lowercase()
}
