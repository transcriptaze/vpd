use std::error::Error;
use tera::Context;
use tera::Tera;

use crate::svg::Rect;

pub struct SVG {
    width: f32,
    height: f32,
    viewport: Rect,
    background: Option<Rect>,
}

impl SVG {
    pub fn new(width: f32, height: f32, viewport: Rect) -> SVG {
        SVG {
            width: width,
            height: height,
            viewport: viewport,
            background: None,
        }
    }

    pub fn background(mut self, bg: Rect) -> Self {
        self.background = Some(bg);
        self
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, _theme: &str) -> Result<String, Box<dyn Error>> {
        let panel = include_str!("templates/panel.svg");
        let styles = include_str!("templates/styles.svg");
        let backgrounds = include_str!("templates/backgrounds.svg");
        // let guidelines = include_str!("templates/guidelines.svg");

        let mut tera = Tera::default();
        let mut context = Context::new();

        tera.add_raw_template("panel", &panel).unwrap();
        tera.add_raw_template("styles", &styles).unwrap();
        tera.add_raw_template("backgrounds", &backgrounds).unwrap();
        // tera.add_raw_template("guidelines", &guidelines).unwrap();

        context.insert("width", &format!("{:2}", self.width));
        context.insert("height", &format!("{:2}", self.height));
        context.insert("viewport", &self.viewport);

        if self.background.is_some() {
            context.insert(
                "background",
                &Rect {
                    x: 0.0,
                    y: 0.0,
                    width: 45.72,
                    height: 128.5,
                },
            );
        }

        // context.insert("origin", &origin);
        // context.insert("guides", &guides);

        let svg = tera.render("panel", &context).unwrap();

        Ok(svg.to_string())
    }
}
