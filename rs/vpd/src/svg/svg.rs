use std::error::Error;
use tera::Context;
use tera::Tera;

use crate::svg::GuideLine;
use crate::svg::Point;
use crate::svg::Rect;
use crate::svg::Style;
use crate::svg::Text;

const OUTLINE_STROKE: f32 = 0.125;

pub struct SVG {
    width: f32,
    height: f32,
    viewport: Rect,
    styles: Option<Vec<Style>>,
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
            styles: None,
            background: None,
            outline: None,
            origin: None,
            guidelines: None,
            labels: None,
        }
    }

    pub fn styles(mut self, styles: Vec<Style>) -> Self {
        self.styles = Some(styles);
        self
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
    pub fn to_SVG(&self, theme: &str) -> Result<String, Box<dyn Error>> {
        let mut tera = Tera::default();
        let mut context = Context::new();

        load_templates(&mut tera, theme);

        context.insert("width", &format!("{:3}", self.width));
        context.insert("height", &format!("{:3}", self.height));
        context.insert("viewport", &self.viewport);

        match &self.styles {
            Some(_) => context.insert("styles", "yes"),
            _ => context.insert("styles", "no"),
        }

        match &self.background {
            Some(v) => context.insert("background", &v),
            _ => {}
        }

        match &self.outline {
            Some(v) => context.insert("outline", &v),
            _ => {}
        }

        match &self.origin {
            Some(v) => context.insert("origin", &v),
            _ => {}
        }

        match &self.guidelines {
            Some(v) => context.insert("guidelines", &v),
            _ => {}
        }

        match &self.labels {
            Some(v) => context.insert("labels", &v),
            _ => {}
        }

        let svg = tera.render("panel", &context).unwrap();

        Ok(svg.to_string())
    }
}

fn load_templates(tera: &mut Tera, theme: &str) {
    let panel = include_str!("templates/panel.svg");
    let mut styles = include_str!("templates/styles.svg");
    let mut backgrounds = include_str!("templates/backgrounds.svg");
    let guidelines = include_str!("templates/guidelines.svg");
    let labels = include_str!("templates/labels.svg");

    if theme == "dark" {
        styles = include_str!("templates/dark/styles.svg");
        backgrounds = include_str!("templates/dark/backgrounds.svg");
    }

    tera.add_raw_template("panel", &panel).unwrap();
    tera.add_raw_template("styles", &styles).unwrap();
    tera.add_raw_template("backgrounds", &backgrounds).unwrap();
    tera.add_raw_template("guidelines", &guidelines).unwrap();
    tera.add_raw_template("labels", &labels).unwrap();
}
