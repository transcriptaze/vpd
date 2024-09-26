use regex::Regex;
use serde::{Deserialize, Serialize};

pub const PARTS: [&'static str; 6] = ["PJ301M", "RoundBlackKnob", "Trimpot", "PushButton", "Button", "Slider"];

#[derive(Serialize, Deserialize, Debug)]
pub struct Part {
    pub name: String,
    pub x: f32,
    pub y: f32,
    pub template: String,
}

impl Part {
    pub fn new(name: &str, x: f32, y: f32) -> Part {
        let template = match PARTS.iter().find(|v| normalise(*v) == normalise(&name)) {
            Some(p) => p,
            None => "placeholder",
        };

        Part {
            name: name.to_string(),
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
