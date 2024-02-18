use std::fmt;

use serde::{Deserialize, Serialize};

use crate::module::IItem;
use crate::module::Item;
use crate::panel::Panel;
use crate::panel::X;
use crate::panel::Y;
use crate::svg::Text;

#[derive(Serialize, Deserialize, Debug)]
pub struct Label {
    pub id: String,
    pub text: String,
    pub x: X,
    pub y: Y,
    pub font: String,
    pub fontsize: f32,
    pub halign: String,
    pub valign: String,
    pub path: Path,
    pub colour: Colour,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Path {
    pub path: String,
    pub bounds: Bounds,
    pub ascender: f32,
    pub descender: f32,
    pub advance: f32,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Bounds {
    pub x1: f32,
    pub y1: f32,
    pub x2: f32,
    pub y2: f32,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Colour {
    pub light: String,
    pub dark: String,
}

impl Label {
    pub fn new(
        id: &str,
        text: &str,
        x: &X,
        y: &Y,
        font: &str,
        fontsize: f32,
        halign: &str,
        valign: &str,
        path: &Path,
        colour: &Colour,
    ) -> Label {
        Label {
            id: id.to_string(),
            text: text.to_string(),
            x: x.clone(),
            y: y.clone(),
            font: font.to_string(),
            fontsize: fontsize,
            halign: halign.to_string(),
            valign: valign.to_string(),
            path: path.clone(),
            colour: colour.clone(),
        }
    }

    pub fn as_svg(&self, panel: &Panel, theme: &str) -> Text {
        let mut x = self.x.resolve(panel);
        let mut y = self.y.resolve(panel);
        let colour = match theme {
            "dark" => self.colour.dark.as_str(),
            _ => self.colour.light.as_str(),
        };

        x += match self.halign.as_str() {
            "left" => 0.0,
            "centre" => -(self.path.bounds.x1 + self.path.bounds.x2) / 2.0,
            "center" => -(self.path.bounds.x1 + self.path.bounds.x2) / 2.0,
            "right" => -self.path.bounds.x2,
            _ => 0.0,
        };

        y += match self.valign.as_str() {
            "top" => -self.path.bounds.y1,
            "middle" => -(self.path.bounds.y1 + self.path.bounds.y2) / 2.0,
            "baseline" => 0.0,
            "bottom" => -self.path.bounds.y2,
            _ => 0.0,
        };

        Text::new(&self.text, x, y, &self.path.path, &colour)
    }

    pub fn migrate(&mut self, from: &str, to: &str) {
        if self.x.reference == from {
            self.x.reference = to.to_string();
        }

        if self.y.reference == from {
            self.y.reference = to.to_string();
        }
    }
}

impl IItem for Label {
    fn as_item(&self) -> Item {
        let mut attributes = vec![
            ("x".to_string(), format!("{}", &self.x)),
            ("y".to_string(), format!("{}", &self.y)),
        ];

        attributes.push(("font".to_string(), self.font.clone()));
        attributes.push(("size".to_string(), format!("{:1}pt", self.fontsize)));
        attributes.push(("halign".to_string(), self.halign.clone()));
        attributes.push(("valign".to_string(), self.valign.clone()));
        attributes.push(("colour".to_string(), format!("{}", &self.colour)));

        Item {
            itype: "label".to_string(),
            id: self.id.clone(),
            name: self.text.clone(),
            attributes: attributes,
        }
    }
}

impl Path {
    pub fn new(path: &str, bounds: &Bounds, ascender: f32, descender: f32, advance: f32) -> Path {
        Path {
            path: path.to_string(),
            bounds: bounds.clone(),
            ascender: ascender,
            descender: descender,
            advance: advance,
        }
    }
}

impl Colour {
    pub fn new(light: &str, dark: &str) -> Colour {
        Colour {
            light: light.to_string(),
            dark: dark.to_string(),
        }
    }
}

impl fmt::Display for Colour {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        if self.light == self.dark {
            write!(f, "{}", &self.light)
        } else {
            write!(f, "{},{}", &self.light, &self.dark)
        }
    }
}
