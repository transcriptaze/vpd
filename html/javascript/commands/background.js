import { string } from './commands.js'

export function set (node, src) {
  const object = {
    src: `${src}`,
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
      object.background.background = string(child)
    }
  }

  return object
}
