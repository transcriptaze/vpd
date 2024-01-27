import { string } from './commands.js'

export function set (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    background: {
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'none') {
      // NOTHING TO DO
    }

    if (child.type === 'rgb') {
      if (object.background.rgb == null) {
        object.background.rgb = [rgb(child), rgb(child)]
      } else {
        object.background.rgb[1] = rgb(child)
      }

      object.background.background = 'rgb'
    }

    if (child.type === 'rgba') {
      if (object.background.rgba == null) {
        object.background.rgba = [rgba(child), rgba(child)]
      } else {
        object.background.rgba[1] = rgba(child)
      }

      object.background.background = 'rgba'
    }

    if (child.type === 'name') {
      object.background.background = string(child)
    }
  }

  return object
}

function rgb (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  return node.text
}

function rgba (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  return node.text
}
