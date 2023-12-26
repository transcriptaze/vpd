export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    switch (entity.type) {
      case 'svg':
        return exportSVG(entity)

      default:
        throw new Error(`unknown 'export' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'new' command")
}

function exportSVG (node) {
  const object = {
    action: 'export',
    svg: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'light') {
      object.svg.theme = 'light'
    } else if (child.type === 'dark') {
      object.svg.theme = 'dark'
    }
  }

  return object
}
