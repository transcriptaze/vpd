use serde::{Deserialize, Serialize};

use crate::module::IItem;
use crate::module::Item;
use crate::panel::Panel;
use crate::panel::X;
use crate::panel::Y;
use crate::svg::GuideLine;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Guide {
    pub id: String,
    pub x: Option<X>,
    pub y: Option<Y>,
}

impl Guide {
    pub fn new(id: &str, orientation: &str, reference: &str, offset: f32) -> Guide {
        let x = match orientation {
            "vertical" => Some(X::new(reference, offset)),
            _ => None,
        };

        let y = match orientation {
            "horizontal" => Some(Y::new(reference, offset)),
            _ => None,
        };

        Guide {
            id: id.to_string(),
            x: x,
            y: y,
        }
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, label: &str, panel: &Panel) -> Option<GuideLine> {
        let width = panel.width;
        let height = panel.height;
        let gutter = panel.gutter;

        return match (&self.x, &self.y) {
            (Some(x), None) => {
                let offset = x.resolve(panel);

                Some(GuideLine::new(
                    label,
                    offset,
                    -gutter,
                    offset,
                    height + gutter,
                    "vertical".to_string(),
                ))
            }

            (None, Some(y)) => {
                let offset = y.resolve(panel);
                Some(GuideLine::new(
                    label,
                    -gutter,
                    offset,
                    width + gutter,
                    offset,
                    "horizontal".to_string(),
                ))
            }

            _ => None,
        };
    }
}

impl IItem for Guide {
    fn as_item(&self) -> Item {
        let mut attributes = vec![];

        if let Some(x) = &self.x {
            attributes.push(("orientation".to_string(), format!("vertical")));
            attributes.push(("x".to_string(), format!("{}", x)));
        }

        if let Some(y) = &self.y {
            attributes.push(("type".to_string(), format!("horizontal")));
            attributes.push(("y".to_string(), format!("{}", y)));
        }

        Item {
            itype: "guide".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}
