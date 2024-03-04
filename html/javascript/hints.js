let parser

export async function init (Parser, wasm) {
  const grammar = await Parser.Language.load(wasm)

  parser = new Parser()
  parser.setLanguage(grammar)
}

export function parse (text) {
  // const src = `${text}`
  // const tree = parser.parse(src)
  // const root = tree.rootNode
  // const tokens = []

  // if (root.namedChildCount > 0) {
  //   tokens.push(...walk(root.namedChildren[0]))
  // }

  // console.log(tokens)

  const list = new Set(['new', 'decorate', 'set', 'delete', 'load', 'unload', 'save', 'export', 'list', 'help'])

  // for (const c of COMMANDS) {
  //   if (matches(c.command, tokens)) {
  //     const N = tokens.length + 1 < c.min ? c.min : tokens.length + 1
  //     list.add(c.help.slice(0, N + 1).join(' '))
  //   }
  // }

  return Array.from(list)
}
