use std::error::Error;
use tera::Context;
use tera::Tera;

use crate::svg::GuideLine;
use crate::svg::Point;
use crate::svg::Rect;
use crate::svg::Text;

const OUTLINE_STROKE: f32 = 0.125;

pub struct SVG {
    width: f32,
    height: f32,
    viewport: Rect,
    background: Option<Rect>,
    outline: Option<Rect>,
    origin: Option<Point>,
    guidelines: Option<Vec<GuideLine>>,
    labels: Option<Vec<Text>>,
}

// TODO include_dir
//      https://crates.io/crates/include_dir
impl SVG {
    pub fn new(width: f32, height: f32, viewport: Rect) -> SVG {
        SVG {
            width: width,
            height: height,
            viewport: viewport,
            background: None,
            outline: None,
            origin: None,
            guidelines: None,
            labels: None,
        }
    }

    pub fn background(mut self, bg: Rect) -> Self {
        self.background = Some(bg);
        self
    }

    pub fn outline(mut self, outline: Rect) -> Self {
        self.outline = Some(Rect {
            x: outline.x - OUTLINE_STROKE / 2.0,
            y: outline.y - OUTLINE_STROKE / 2.0,
            width: outline.width,
            height: outline.height,
        });
        self
    }

    pub fn origin(mut self, pt: Point) -> Self {
        self.origin = Some(pt);
        self
    }

    pub fn guidelines(mut self, guidelines: Vec<GuideLine>) -> Self {
        self.guidelines = Some(guidelines);
        self
    }

    pub fn labels(mut self, labels: Vec<Text>) -> Self {
        self.labels = Some(labels);
        self
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, _theme: &str) -> Result<String, Box<dyn Error>> {
        let panel = include_str!("templates/panel.svg");
        let styles = include_str!("templates/styles.svg");
        let backgrounds = include_str!("templates/backgrounds.svg");
        let guidelines = include_str!("templates/guidelines.svg");
        let labels = include_str!("templates/labels.svg");

        let mut tera = Tera::default();
        let mut context = Context::new();

        tera.add_raw_template("panel", &panel).unwrap();
        tera.add_raw_template("styles", &styles).unwrap();
        tera.add_raw_template("backgrounds", &backgrounds).unwrap();
        tera.add_raw_template("guidelines", &guidelines).unwrap();
        tera.add_raw_template("labels", &labels).unwrap();

        context.insert("width", &format!("{:3}", self.width));
        context.insert("height", &format!("{:3}", self.height));
        context.insert("viewport", &self.viewport);

        match &self.background {
            Some(v) => context.insert("background", &v),
            _ => todo!(),
        }

        match &self.outline {
            Some(v) => context.insert("outline", &v),
            _ => todo!(),
        }

        match &self.origin {
            Some(v) => context.insert("origin", &v),
            _ => todo!(),
        }

        match &self.guidelines {
            Some(v) => context.insert("guidelines", &v),
            _ => todo!(),
        }

        match &self.labels {
            Some(v) => context.insert("labels", &v),
            _ => todo!(),
        }

        let svg = tera.render("panel", &context).unwrap();

        Ok(svg.to_string())
    }
}
