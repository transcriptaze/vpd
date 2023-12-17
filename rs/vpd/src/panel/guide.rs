use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Guide {
    pub orientation: String,
    pub reference: String,
    pub offset: f32,
}

impl Guide {
    pub fn new(orientation: &str, reference: &str, offset: f32) -> Guide {
        Guide {
            orientation: orientation.to_string(),
            reference: reference.to_string(),
            offset: offset,
        }
    }
}
