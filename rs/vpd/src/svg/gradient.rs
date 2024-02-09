use regex::Regex;
use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Debug)]
pub struct Gradient {
    pub id: String,
    pub stops: Vec<Stop>,
}

#[derive(Serialize, Deserialize, Debug)]
pub struct Stop {
    pub offset: f32,
    pub colour: String,
    pub opacity: f32,
}

impl Gradient {
    pub fn new(id: &str, stop1: Stop, stop2: Stop) -> Gradient {
        let mut stops: Vec<Stop> = Vec::new();

        stops.push(stop1);
        stops.push(stop2);

        Gradient {
            id: id.to_string(),
            stops: stops,
        }
    }
}

impl Stop {
    pub fn new(offset: f32, rgba: &str) -> Stop {
        let re = Regex::new(r"(#[a-fA-F0-9]{6})([a-fA-F0-9]{2})?").unwrap();
        let mut colour = rgba.to_string();
        let mut opacity: f32 = 1.0;

        if let Some(captures) = re.captures(rgba) {
            match (captures.get(1), captures.get(2)) {
                (Some(rgb), Some(alpha)) => {
                    colour = rgb.as_str().to_string();
                    opacity = (u8::from_str_radix(alpha.as_str(), 16).unwrap() as f32) / 255.0;
                }

                (Some(rgb), None) => {
                    colour = rgb.as_str().to_string();
                }

                _ => {}
            };
        }

        Stop {
            offset: offset,
            colour: colour,
            opacity: opacity,
        }
    }
}
