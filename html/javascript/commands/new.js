import { newModule } from './modules.js'
import { newInput } from './inputs.js'
import { newParameter } from './parameters.js'
import { newLabel } from './labels.js'
import { newGuide } from './guides.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    switch (entity.type) {
      case 'module':
        return newModule(entity)

      case 'input':
        return newInput(entity)

      case 'parameter':
        return newParameter(entity)

      case 'label':
        return newLabel(entity)

      case 'guide':
        return newGuide(entity)

      default:
        throw new Error(`unknown 'new' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'new' command")
}
