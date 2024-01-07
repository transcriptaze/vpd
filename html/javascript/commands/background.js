export function set (node) {
  const object = {
    action: 'set',
    background: {
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'rgb') {
      object.background.rgb = child.text
      object.background.background = 'rgb'
    }

    if (child.type === 'rgba') {
      object.background.rgba = child.text
      object.background.background = 'rgba'
    }

    if (child.type === 'name') {
      const name = child.text.trim()
      const match = name.match(/"(.*?)"/)

      if (match && match.length > 1) {
        object.background.background = match[1]
      } else {
        object.background.background = child.text
      }
    }
  }

  return object
}
