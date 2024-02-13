import * as components from './components.js'

export function newLight (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    light: components.parse(node)
  }
}

export function deleteLight (node, src) {
  return {
    src: `${src}`,
    action: 'delete',
    light: components.del(node)
  }
}

export function setLight (node, src) {
  return {
    src: `${src}`,
    action: 'set',
    light: components.set(node)
  }
}
