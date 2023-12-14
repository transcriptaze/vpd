use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Text {
    pub path: String,
}

impl Text {
    pub fn new(path: String) -> Text {
        Text { path: path }
    }
}
