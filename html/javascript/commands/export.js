export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'module':
        return exportModule(child, src)

      case 'panel':
        return exportPanel(child, src)

      default:
        throw new Error(`unknown 'export' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'export' command")
}

function exportModule (node, src) {
  for (const child of node.namedChildren) {
    if (child.type === 'header') {
      return exportHeader(child, src)
    }

    if (child.type === 'helper') {
      return exportHelper(child, src)
    }
  }

  throw new Error("invalid 'export module' command")
}

function exportPanel (node, src) {
  for (const child of node.namedChildren) {
    if (child.type === 'svg') {
      return exportSVG(child, src)
    }
  }

  throw new Error("invalid 'export panel' command")
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

function exportHelper (node, src) {
  const object = {
    src: `${src}`,
    action: 'export',
    helper: {
    }
  }

  return object
}
