use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Gradient {
    pub id: String,
    pub stops: Vec<Stop>,
}

#[derive(Serialize, Deserialize)]
pub struct Stop {
    pub offset: f32,
    pub colour: String,
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
    pub fn new(offset: f32, colour: &str) -> Stop {
        Stop {
            offset: offset,
            colour: colour.to_string(),
        }
    }
}
