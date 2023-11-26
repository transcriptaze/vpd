let parser

export async function init(Parser) {
      const grammar = await Parser.Language.load('../wasm/grammar/tree-sitter-vpd.wasm')

      parser = new Parser()
      parser.setLanguage(grammar)
}

export function parse(cmd) {
   const src = `${cmd}`
   const tree = parser.parse(src)
   const root = tree.rootNode
   const child = root.children[0]
   const child1 = child.children[0]
   const child2 = child.children[1]

    console.log(`>>>>>>>>>> tree`,tree)
    console.log(`>>>>>>>>>> root`,root)
    console.log(`>>>>>>>>>> root.type`,root.type)
    console.log(`>>>>>>>>>> root.children`,root.childCount)

    console.log(`>>>>>>>>>> node`, child.type, child.childCount)
    console.log(`>>>>>>>>>> child(1)`, child1.type)
    console.log(`>>>>>>>>>> child(2)`, child2.type)

   return 'zoot'
}