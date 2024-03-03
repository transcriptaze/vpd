import * as module from './modules.js'
import * as inputs from './inputs.js'
import * as outputs from './outputs.js'
import * as parameters from './parameters.js'
import * as lights from './lights.js'
import * as widgets from './widgets.js'
import * as labels from './labels.js'
import * as decorations from './decorations.js'
import * as guides from './guides.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]
    const src = node.text

    switch (entity.type) {
      case 'module':
        return module.newModule(entity, src)

      case 'input':
        return inputs.newInput(entity, src)

      case 'output':
        return outputs.newOutput(entity, src)

      case 'parameter':
        return parameters.newParameter(entity, src)

      case 'light':
        return lights.newLight(entity, src)

      case 'widget':
        return widgets.newWidget(entity, src)

      case 'label':
        return labels.newLabel(entity, src)

      case 'decoration':
        return decorations.newDecoration(entity, src)

      case 'guide':
        return guides.newGuide(entity, src)

      default:
        throw new Error(`unknown 'new' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'new' command")
}
