import * as components from './components.js'

export function newOutput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    output: components.create(node)
  }
}

export function deleteOutput (node, src) {
  return {
    src: `${src}`,
    action: 'set',
    output: components.del(node)
  }
}

export function setOutput (node, src) {
  return {
    src: `${src}`,
    action: 'set',
    output: components.set(node)
  }
}
