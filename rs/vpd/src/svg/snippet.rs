use regex::Regex;
use serde::{Deserialize, Serialize};

const DECORATIONS: [&'static str; 1] = ["CircularGraduations"];

#[derive(Serialize, Deserialize, Debug)]
pub struct Snippet {
    pub name: String,
    pub x: f32,
    pub y: f32,
    pub template: String,
    pub layer: String,
}

impl Snippet {
    pub fn new(name: &str, x: f32, y: f32, layer: &str) -> Snippet {
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
            template: template.to_string(),
            layer: layer.to_string(),
        }
    }
}

fn normalise(v: &str) -> String {
    Regex::new(r#"\s+"#)
        .unwrap()
        .replace_all(v, "")
        .to_lowercase()
}
