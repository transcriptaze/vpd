use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Debug)]
pub struct Background {
    pub rgb: Option<RGB>,
    pub rgba: Option<RGBA>,
    pub background: String,
}

#[derive(Serialize, Deserialize, Debug)]
pub struct RGB {
    pub colour: [String; 2],
}

#[derive(Serialize, Deserialize, Debug)]
pub struct RGBA {
    pub colour: [String; 2],
}

impl Background {
    pub fn new_rgb(id: &str, rgb1: &str, rgb2: &str) -> Background {
        Background {
            rgb: Some(RGB::new(rgb1, rgb2)),
            rgba: None,
            background: id.to_string(),
        }
    }

    pub fn new_rgba(id: &str, rgba1: &str, rgba2: &str) -> Background {
        Background {
            rgb: None,
            rgba: Some(RGBA::new(rgba1, rgba2)),
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
    pub fn new(rgb1: &str, rgb2: &str) -> RGB {
        return RGB {
            colour: [rgb1.to_string(), rgb2.to_string()],
        };
    }
}

impl RGBA {
    pub fn new(rgba1: &str, rgba2: &str) -> RGBA {
        return RGBA {
            colour: [rgba1.to_string(), rgba2.to_string()],
        };
    }
}
