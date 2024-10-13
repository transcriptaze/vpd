use std::fmt;

use serde::{Deserialize, Deserializer, Serialize};

use crate::module::IItem;
use crate::module::IQueryable;
use crate::module::ISet;
use crate::module::Is;
use crate::module::Item;
use crate::panel::Offset;
use crate::panel::Panel;
use crate::panel::IXY;
use crate::panel::X;
use crate::panel::XY;
use crate::panel::Y;
use crate::svg::Text;

#[derive(Serialize, Debug)]
pub struct Label {
    version: u8,

    pub id: String,
    pub text: String,
    pub xy: XY,

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
        offset: &Option<Offset>,
        font: &str,
        fontsize: f32,
        halign: &str,
        valign: &str,
        path: &Path,
        colour: &Colour,
    ) -> Label {
        Label {
            version: 1,
            id: id.to_string(),
            text: text.to_string(),
            xy: XY::new(&x, &y, offset),
            font: font.to_string(),
            fontsize: fontsize,
            halign: halign.to_string(),
            valign: valign.to_string(),
            path: path.clone(),
            colour: colour.clone(),
        }
    }

    pub fn as_svg(&self, panel: &Panel, theme: &str) -> Text {
        let (mut x, mut y) = self.resolvexy(panel);

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
        if self.xy.x.reference == from {
            self.xy.x.reference = to.to_string();
        }

        if self.xy.y.reference == from {
            self.xy.y.reference = to.to_string();
        }
    }

    pub fn x(&self) -> X {
        return self.xy.x.clone();
    }

    pub fn y(&self) -> Y {
        return self.xy.y.clone();
    }
}

impl Is for Label {
    fn is(&self, id: &str) -> bool {
        self.id == id
    }

    fn named(&self, name: &str) -> bool {
        self.text.trim().to_lowercase() == name
    }
}

impl ISet for Label {
    fn set_x(&mut self, x: &X) {
        self.xy.set_x(x);
    }

    fn set_y(&mut self, y: &Y) {
        self.xy.set_y(y);
    }

    fn set_offset(&mut self, offset: &Option<Offset>) {
        self.xy.set_offset(offset);
    }
}

impl IXY for Label {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.xy.x.resolve(panel);
        let y = self.xy.y.resolve(panel);

        (x, y)
    }
}

impl IQueryable for Label {
    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        let (mut _x, mut _y) = self.resolvexy(panel);

        _x += match self.halign.as_str() {
            "left" => 0.0,
            "centre" => -(self.path.bounds.x1 + self.path.bounds.x2) / 2.0,
            "center" => -(self.path.bounds.x1 + self.path.bounds.x2) / 2.0,
            "right" => -self.path.bounds.x2,
            _ => 0.0,
        };

        _y += match self.valign.as_str() {
            "top" => -self.path.bounds.y1,
            "middle" => -(self.path.bounds.y1 + self.path.bounds.y2) / 2.0,
            "baseline" => 0.0,
            "bottom" => -self.path.bounds.y2,
            _ => 0.0,
        };

        let x1 = _x + self.path.bounds.x1;
        let x2 = _x + self.path.bounds.x2;
        let y1 = _y + self.path.bounds.y1;
        let y2 = _y + self.path.bounds.y2;

        return x >= x1 && x <= x2 && y >= y1 && y <= y2;
    }
}

impl IItem for Label {
    fn as_item(&self) -> Item {
        let mut attributes = vec![
            ("text".to_string(), self.text.clone()),
            ("x".to_string(), format!("{}", &self.xy.x)),
            ("y".to_string(), format!("{}", &self.xy.y)),
        ];

        if let Some(offset) = &self.xy.offset {
            if offset.radius > 0.0 {
                attributes.push((
                    "offset".to_string(),
                    format!("{}°/{}mm", offset.angle, offset.radius),
                ));
            }
        }

        attributes.push(("font".to_string(), self.font.clone()));
        attributes.push(("size".to_string(), format!("{:1}pt", self.fontsize)));
        attributes.push(("halign".to_string(), self.halign.clone()));
        attributes.push(("valign".to_string(), self.valign.clone()));
        attributes.push(("colour".to_string(), format!("{}", &self.colour)));

        Item {
            itype: "label".to_string(),
            id: self.id.clone(),
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

impl<'de> Deserialize<'de> for Label {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum _Label {
            V1 {
                version: u8,
                id: String,
                text: String,
                xy: XY,
                font: String,
                fontsize: f32,
                halign: String,
                valign: String,
                path: Path,
                colour: Colour,
            },

            V0 {
                id: String,
                text: String,
                x: X,
                y: Y,
                font: String,
                fontsize: f32,
                halign: String,
                valign: String,
                path: Path,
                colour: Colour,
            },
        }

        let l = _Label::deserialize(deserializer)?;

        match l {
            #[rustfmt::skip]
            _Label::V0 {id,text,x,y,font,fontsize,halign,valign,path, colour } => {
                Ok(Label {
                    version: 0,
                    id: id,
                    text: text,
                    xy: XY::new_without_offset(x.clone(),y.clone()),
                    font: font,
                    fontsize: fontsize,
                    halign: halign,
                    valign: valign,
                    path: path,
                    colour: colour,
                })
            },

            #[rustfmt::skip]
            _Label::V1 {version, id,text,xy, font,fontsize,halign,valign,path, colour } => {
                  Ok(Label {
                    version: version,
                    id: id,
                    text: text,
                    xy: xy,
                    font: font,
                    fontsize: fontsize,
                    halign: halign,
                    valign: valign,
                    path: path,
                    colour: colour,
                  })
              },
        }
    }
}
