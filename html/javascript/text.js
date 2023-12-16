import * as opentype from 'https://unpkg.com/opentype.js/dist/opentype.module.js'

const fonts = new Map()

export async function init () {
  fetch('/fonts/RobotoMono-Bold.ttf')
    .then((response) => response.arrayBuffer())
    .then((bytes) => fonts.set('RobotoMono-Bold', bytes))
    .catch((err) => console.error(err))
}

export function text2path (text) {
  const options = {
    decimalPlaces: 3
  }

  const bytes = fonts.get('RobotoMono-Bold')
  const fontSize = points2mm(12)
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
