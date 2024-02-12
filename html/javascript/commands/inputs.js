import { identifier, string, mm } from './commands.js'
import * as components from './components.js'

export function newInput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    input: components.create(node)
  }
}

export function deleteInput (node, src) {
  return {
    src: `${src}`,
    action: 'delete',
    input: components.del(node)
  }
}

export function setInput (node, src) {
  return {
    src: `${src}`,
    action: 'set',
    input: components.set(node)
  }
}
