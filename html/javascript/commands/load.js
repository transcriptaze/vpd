export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    switch (entity.type) {
      case 'script':
        return loadScript()

      default:
        throw new Error(`unknown 'load' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'load' command")
}

function loadScript (node) {
  const object = {
    action: 'load',
    script: {
    }
  }

  return object
}
