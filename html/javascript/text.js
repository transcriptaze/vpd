import * as opentype from 'https://unpkg.com/opentype.js/dist/opentype.module.js'

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
      fonts.set(DEFAULT.name, bytes)
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
        fonts.set(font.name, font.bytes)
      }
    })
    .catch((err) => {
      console.log(err)
    })
}

export function text2path (text, fontName, size) {
  const options = {
    decimalPlaces: 3
  }

  const bytes = fonts.has(fontName) ? fonts.get(fontName) : fonts.get(DEFAULT)
  const fontSize = points2mm(size)
  const font = opentype.parse(bytes)
  const path = font.getPath(text, 0, 0, fontSize, {})
  const bounds = path.getBoundingBox()
  const advance = font.getAdvanceWidth(text, fontSize, options)

  console.log('>>>>>>>>>', bounds)
  console.log('>>>>>>>>>', advance)

  return `${path.toSVG()}`
}

function points2mm (pts) {
  return 25.4 * pts / 72
}
