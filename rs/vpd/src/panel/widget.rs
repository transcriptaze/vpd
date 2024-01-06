use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;
use crate::panel::Component;

#[derive(Serialize, Deserialize)]
pub struct Widget {
    pub component: Component,
}

impl Widget {
    pub fn new(id: &str, name: &str, x: &X, y: &Y, part: &Option<String>) -> Widget {
        Widget {
            component: Component::new(id,name,x,y,part),
        }
    }
}
