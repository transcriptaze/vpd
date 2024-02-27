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

  fonts.push(...db.listFonts())

  const object = {
    src: `${src}`,
    action: 'list',
    fonts: {
      local: fonts
    }
  }

  return object
}
