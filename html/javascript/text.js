import * as opentype from 'https://unpkg.com/opentype.js/dist/opentype.module.js'

import * as db from './db.js'

const FONTS = [
  { name: 'Lato-Regular', url: '/fonts/Lato-Regular.ttf' },
  { name: 'Lato-Bold', url: '/fonts/Lato-Bold.ttf' },
  { name: 'RobotoMono-Regular', url: '/fonts/RobotoMono-Regular.ttf' },
  { name: 'RobotoMono-Bold', url: '/fonts/RobotoMono-Bold.ttf' },
  { name: 'RobotoCondensed-Regular', url: '/fonts/RobotoCondensed-Regular.ttf' },
  { name: 'RobotoCondensed-Bold', url: '/fonts/RobotoCondensed-Bold.ttf' },
  { name: 'StyleScript-Regular', url: '/fonts/StyleScript-Regular.ttf' }
]

const DEFAULT = {
  name: 'RobotoMono-Bold',
  url: '/fonts/RobotoMono-Bold.ttf'
}

const fonts = new Map()

export async function init () {
  // ... get default font
  fetch(DEFAULT.url)
    .then((response) => response.arrayBuffer())
    .then((bytes) => {
      fonts.set(normalise(DEFAULT.name), opentype.parse(bytes))
    })
    .catch((err) => console.error(err))

  // ... load other font
  const promises = []
  for (const f of FONTS) {
    promises.push(
      fetch(f.url)
        .then((response) => response.arrayBuffer())
        .then((bytes) => {
          return {
            name: f.name,
            bytes
          }
        }))
  }

  Promise.all(promises)
    .then((v) => {
      for (const font of v) {
        fonts.set(normalise(font.name), opentype.parse(font.bytes))
      }
    })
    .catch((err) => {
      console.log(err)
    })
}

export function text2path (text, fontName, points) {
  const options = {
    decimalPlaces: 3
  }

  let font = fonts.get(normalise(DEFAULT.name))
  const normalised = normalise(fontName)

  if (fonts.has(normalised)) {
    font = fonts.get(normalised)
  } else {
    const f = db.getFont(fontName)
    if (f != null) {
      font = opentype.parse(f.buffer)
      fonts.set(normalised, font)
    }
  }

  const fontSize = points2mm(points)
  const unitsPerEm = font.unitsPerEm
  const ascender = points2mm(points * font.ascender / unitsPerEm)
  const descender = points2mm(points * font.descender / unitsPerEm)
  const path = font.getPath(text, 0, 0, fontSize, {})
  const bounds = path.getBoundingBox()
  const advance = font.getAdvanceWidth(text, fontSize, options)

  return {
    path: `${path.toSVG()}`,
    bounds,
    ascender,
    descender,
    advance
  }
}

function points2mm (pts) {
  return 25.4 * pts / 72
}

export function normalise (v) {
  return `${v}`.replaceAll(/[^a-zA-Z0-9]+/g, '').toLowerCase()
}
