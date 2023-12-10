use tree_sitter::Parser;

fn main() {
    println!("VPD grammar");

    let mut parser = Parser::new();
    let src = r#"new module "woot" 1U 5H"#;

    parser.set_language(tree_sitter_vpd::language()).unwrap();

    let tree = parser.parse(src, None).unwrap();
    let root = tree.root_node();
    let child = root.child(0).unwrap();
    let child1 = child.child(0).unwrap();
    let child2 = child.child(1).unwrap();

    println!(">>>>>>>>>> root {}", root.kind());
    println!(">>>>>>>>>> root.start {}", root.start_position());
    println!(">>>>>>>>>> root.end {}", root.end_position());
    println!(">>>>>>>>>> root.children {}", root.child_count());

    println!(">>>>>>>>>> node {} {}", child.kind(), child.child_count());
    println!(">>>>>>>>>> child(1) {}", child1.kind());
    println!(">>>>>>>>>> child(2) {}", child2.kind());
}
