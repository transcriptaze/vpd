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
      object.background.background = child.text
    }
  }

  return object
}
