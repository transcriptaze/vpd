export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    if (child.type === 'attr' && child.namedChildCount > 0) {
      const attr = child.namedChildren[0]

      switch (attr.type) {
        case 'origin':
          return setOrigin(attr)

        default:
          throw new Error(`unknown 'set' attribute <<${attr.type}>>`)
      }
    }
  }

  throw new Error("invalid 'set' command")
}

export function setOrigin (node) {
  const object = {
    action: 'set',
    origin: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'x') {
      object.origin.x = child.text.trim()
    } else if (child.type === 'y') {
      object.origin.y = child.text.trim()
    }
  }

  return object
}
