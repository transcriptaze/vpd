use std::error::Error;
use tera::Context;
use tera::Tera;

use crate::svg::GuideLine;
use crate::svg::Point;
use crate::svg::Rect;

const OUTLINE_STROKE: f32 = 0.125;

pub struct SVG {
    width: f32,
    height: f32,
    viewport: Rect,
    background: Option<Rect>,
    outline: Option<Rect>,
    origin: Option<Point>,
    guidelines: Option<Vec<GuideLine>>,
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

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, _theme: &str) -> Result<String, Box<dyn Error>> {
        let panel = include_str!("templates/panel.svg");
        let styles = include_str!("templates/styles.svg");
        let backgrounds = include_str!("templates/backgrounds.svg");
        let guidelines = include_str!("templates/guidelines.svg");

        let mut tera = Tera::default();
        let mut context = Context::new();

        tera.add_raw_template("panel", &panel).unwrap();
        tera.add_raw_template("styles", &styles).unwrap();
        tera.add_raw_template("backgrounds", &backgrounds).unwrap();
        tera.add_raw_template("guidelines", &guidelines).unwrap();

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

        // context.insert("origin", &origin);
        // context.insert("guides", &guides);

        let svg = tera.render("panel", &context).unwrap();

        Ok(svg.to_string())
    }
}

// <g inkscape:groupmode="layer" inkscape:label="guidelines">
//   <rect x="0" y="0" width="{{panel.width}}" height="{{panel.height}}" class="outline"/>
//
//   <g id="origin">
//     <polygon points="{{origin.x-2.5}},{{origin.y}} {{origin.x}},{{origin.y+2.5}} {{origin.x+2.5}},{{origin.y}} {{origin.x}},{{origin.y-2.5}}" class="origin" />
//     <line x1="{{origin.x}}" y1="{{viewport.y}}"
//           x2="{{origin.x}}" y2="{{viewport.y + viewport.height}}"
//           class="guideline" />
//     <line x1="{{viewport.x}}" y1="{{origin.y}}"
//           x2="{{viewport.x + viewport.width}}" y2="{{origin.y}}"
//           class="guideline" />
//    </g>
//
//   <g id="guidelines">
//     {% for v in guides %}
//     <g font-size="3" font-family="Roboto Condensed" font-style="italic" text-anchor="start" >
//       {% if v.orientation == 'vertical' %}
//       <text x="{{v.x1 + 0.5}}" y="{{v.y1 + 2.5}}" text-align="start">{{v.label}}</text>
//       {% elif v.orientation == 'horizontal'%}
//       <text x="{{v.x1}}" y="{{v.y1 - 0.25}}">{{v.label}}</text>
//       {% endif %}
//       <line x1="{{v.x1}}"  y1="{{v.y1}}" x2="{{v.x2}}" y2="{{v.y2}}" class="guideline" />
//     </g>
//   {% endfor %}
//   </g>
//
// </g>
