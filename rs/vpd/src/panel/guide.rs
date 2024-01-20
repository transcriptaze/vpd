use serde::{Deserialize, Serialize};

use crate::panel::Panel;
use crate::panel::X;
use crate::panel::Y;
use crate::svg::GuideLine;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Guide {
    pub x: Option<X>,
    pub y: Option<Y>,
}

impl Guide {
    pub fn new(orientation: &str, reference: &str, offset: f32) -> Guide {
        let x = match orientation {
            "vertical" => Some(X::new(reference, offset)),
            _ => None,
        };

        let y = match orientation {
            "horizontal" => Some(Y::new(reference, offset)),
            _ => None,
        };

        Guide { x: x, y: y }
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
