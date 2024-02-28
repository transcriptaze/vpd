import { identifier } from './commands.js'
import * as db from '../db.js'

export function loadFont (node, src) {
  const object = {
    src: `${src}`,
    action: 'load',
    font: {
    }
  }

  return object
}

export function unloadFont (node, src) {
  const object = {
    src: `${src}`,
    action: 'unload',
    font: {
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.font.name = identifier(child)
    }
  }

  return object
}

export function listFonts (node, src) {
  const fonts = [
    'Lato-Regular',
    'Lato-Bold',
    'RobotoMono-Regular',
    'RobotoMono-Bold',
    'RobotoCondensed-Regular',
    'RobotoCondensed-Bold',
    'StyleScript-Regular'
  ]

  const object = {
    src: `${src}`,
    action: 'list',
    fonts: {
      preloaded: fonts,
      user: db.listFonts()
    }
  }

  return object
}
