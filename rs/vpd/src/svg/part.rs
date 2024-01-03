use serde::{Deserialize, Serialize};

const PARTS: [&'static str; 2] = ["PJ301M", "RoundBlackKnob"];

#[derive(Serialize, Deserialize)]
pub struct Part {
    pub name: String,
    pub x: f32,
    pub y: f32,
    pub template: String,
}

impl Part {
    pub fn new(name: &str, x: f32, y: f32) -> Part {
        let template = match PARTS.iter().find(|v| *v == &name) {
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

