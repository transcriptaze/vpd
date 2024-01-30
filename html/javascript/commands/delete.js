import * as guides from './guides.js'
import * as inputs from './inputs.js'
import * as outputs from './outputs.js'
import * as parameters from './parameters.js'
import * as lights from './lights.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'guide':
        return guides.deleteGuide(child, src)

      case 'input':
        return inputs.deleteInput(child, src)

      case 'output':
        return outputs.deleteOutput(child, src)

      case 'parameter':
        return parameters.deleteParameter(child, src)

      case 'light':
        return lights.deleteLight(child, src)

      default:
        throw new Error(`unknown 'delete' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'delete' command")
}
