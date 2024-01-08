export function set (node) {
  const object = {
    action: 'set',
    background: {
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'rgb') {
      if (object.background.rgb == null) {
        object.background.rgb = [child.text, child.text]
      } else {
        object.background.rgb[1] = child.text
      }

      object.background.background = 'rgb'
    }

    if (child.type === 'rgba') {
      if (object.background.rgba == null) {
        object.background.rgba = [child.text, child.text]
      } else {
        object.background.rgba[1] = child.text
      }

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
