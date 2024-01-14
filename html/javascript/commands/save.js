export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    switch (child.type) {
      case 'project':
        return saveProject()

      default:
        throw new Error(`unknown 'save' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'save' command")
}

function saveProject (node) {
  const object = {
    action: 'save',
    project: {
    }
  }

  return object
}
