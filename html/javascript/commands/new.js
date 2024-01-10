import * as module from './modules.js'
import * as inputs from './inputs.js'
import * as outputs from './outputs.js'
import * as parameters from './parameters.js'
import * as lights from './lights.js'
import * as widgets from './widgets.js'
import * as labels from './labels.js'
import * as guides from './guides.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    switch (entity.type) {
      case 'module':
        return module.newModule(entity)

      case 'input':
        return inputs.newInput(entity)

      case 'output':
        return outputs.newOutput(entity)

      case 'parameter':
        return parameters.newParameter(entity)

      case 'light':
        return lights.newLight(entity)

      case 'widget':
        return widgets.newWidget(entity)

      case 'label':
        return labels.newLabel(entity)

      case 'guide':
        return guides.newGuide(entity)

      default:
        throw new Error(`unknown 'new' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'new' command")
}
