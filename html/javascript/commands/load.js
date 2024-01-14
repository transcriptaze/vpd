export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    switch (child.type) {
      case 'project':
        return loadProject()

      case 'script':
        return loadScript()

      default:
        throw new Error(`unknown 'load' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'load' command")
}

function loadProject (node) {
  const object = {
    action: 'load',
    project: {
    }
  }

  return object
}

function loadScript (node) {
  const object = {
    action: 'load',
    script: {
    }
  }

  return object
}
