import * as components from './components.js'

export function newParameter (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    parameter: components.create(node)
  }
}

export function deleteParameter (node, src) {
  return {
    src: `${src}`,
    action: 'delete',
    parameter: components.del(node)
  }
}

export function setParameter (node, src) {
  return {
    src: `${src}`,
    action: 'set',
    parameter: components.set(node)
  }
}
