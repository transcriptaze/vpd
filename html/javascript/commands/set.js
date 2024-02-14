import * as origin from './origin.js'
import * as module from './modules.js'
import * as background from './background.js'
import * as inputs from './inputs.js'
import * as outputs from './outputs.js'
import * as parameters from './parameters.js'
import * as lights from './lights.js'
import * as widgets from './widgets.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'origin':
        return origin.set(child, src)

      case 'module':
        return module.set(child, src)

      case 'background':
        return background.set(child, src)

      case 'input':
        return inputs.setInput(child, src)

      case 'output':
        return outputs.setOutput(child, src)

      case 'parameter':
        return parameters.setParameter(child, src)

      case 'light':
        return lights.setLight(child, src)

      case 'widget':
        return widgets.setWidget(child, src)

      default:
        throw new Error(`unknown 'set' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'set' command")
}
