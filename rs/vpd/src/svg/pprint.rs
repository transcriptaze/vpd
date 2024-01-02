pub struct PrettyPrinter {}

impl PrettyPrinter {
    pub fn new() -> PrettyPrinter {
        PrettyPrinter {}
    }

    pub fn prettify(&self, svg: &str) -> String {
        return svg.to_string();
    }
}
