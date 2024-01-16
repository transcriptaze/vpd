export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]
    const src = node.text

    switch (entity.type) {
      case 'panel':
        if (entity.namedChildCount > 0 && entity.namedChildren[0].type === 'svg') {
          return exportSVG(entity.namedChildren[0], src)
        }
        break

      default:
        throw new Error(`unknown 'export' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'export' command")
}

function exportSVG (node, src) {
  const object = {
    src: `${src}`,
    action: 'export',
    svg: {
      theme: 'light'
    }
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
