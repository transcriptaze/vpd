export function set (node) {
  const object = {
    action: 'set',
    background: {
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'rgb') {
      object.background.rgb = child.text
    }

    if (child.type === 'rgba') {
      object.background.rgba = child.text
    }

    if (child.type === 'name') {
      object.background.name = child.text
    }
  }

  return object
}
