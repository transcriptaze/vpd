export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'panel':
        return exportPanel(child, src)

      default:
        throw new Error(`unknown 'export' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'export' command")
}

function exportPanel (node, src) {
  for (const child of node.namedChildren) {
    if (child.type === 'svg') {
      return exportSVG(child, src)
    }

    if (child.type === 'header') {
      return exportHeader(child, src)
    }
  }

  throw new Error('invalid \'export panel\' command')
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

function exportHeader (node, src) {
  const object = {
    src: `${src}`,
    action: 'export',
    header: {
    }
  }

  return object
}
