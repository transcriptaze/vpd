use regex::Regex;
use serde::{Deserialize, Serialize};

const DECORATIONS: [&'static str; 1] = ["CircularGraduations"];

#[derive(Serialize, Deserialize, Debug)]
pub struct Decoration {
    pub x: f32,
    pub y: f32,
    pub template: String,
}

impl Decoration {
    pub fn new(name: &str, x: f32, y: f32) -> Decoration {
        let template = match DECORATIONS
            .iter()
            .find(|v| normalise(*v) == normalise(&name))
        {
            Some(p) => p,
            None => "placeholder",
        };

        Decoration {
            x: x,
            y: y,
            template: template.to_string(),
        }
    }
}

fn normalise(v: &str) -> String {
    Regex::new(r#"\s+"#)
        .unwrap()
        .replace_all(v, "")
        .to_lowercase()
}
