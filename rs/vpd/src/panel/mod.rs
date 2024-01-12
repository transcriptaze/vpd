mod background;
mod guide;
mod input;
mod label;
mod light;
mod origin;
mod output;
mod panel;
mod parameter;
mod widget;
mod xy;

pub use background::Background;
pub use background::RGB;
pub use background::RGBA;
pub use guide::Guide;
pub use input::Input;
pub use label::Bounds;
pub use label::Label;
pub use light::Light;
pub use origin::Origin;
pub use output::Output;
pub use panel::Panel;
pub use parameter::Parameter;
pub use widget::Widget;
pub use xy::X;
pub use xy::Y;

pub const DEFAULT_WIDTH: f32 = 45.72; // 9H
pub const DEFAULT_HEIGHT: f32 = 128.5; // 1U
