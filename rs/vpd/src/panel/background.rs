use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Debug)]
pub struct Background {
    #[serde(rename = "rgb,omitempty")]
    pub rgb: Option<RGB>,

    #[serde(rename = "rgba,omitempty")]
    pub rgba: Option<RGBA>,

    #[serde(rename = "background,omitempty")]
    pub background: String,
}

#[derive(Serialize, Deserialize, Debug)]
pub struct RGB {
    pub colour: String,
}

#[derive(Serialize, Deserialize, Debug)]
pub struct RGBA {
    pub colour: String,
}

impl Background {
    pub fn new_rgb(id: &str, rgb: &str) -> Background {
        Background {
            rgb: Some(RGB::new(rgb)),
            rgba: None,
            background: id.to_string(),
        }
    }

    pub fn new_rgba(id: &str, rgba: &str) -> Background {
        Background {
            rgb: None,
            rgba: Some(RGBA::new(rgba)),
            background: id.to_string(),
        }
    }

    pub fn new(background: &str) -> Background {
        Background {
            rgb: None,
            rgba: None,
            background: background.to_string(),
        }
    }
}

impl RGB {
    pub fn new(colour: &str) -> RGB {
        return RGB {
            colour: colour.to_string(),
        };
    }
}

impl RGBA {
    pub fn new(colour: &str) -> RGBA {
        return RGBA {
            colour: colour.to_string(),
        };
    }
}
