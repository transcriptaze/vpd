import * as opentype from 'https://unpkg.com/opentype.js/dist/opentype.module.js'
import { parse } from './grammar.js'
import { exec, restore, render } from '../wasm/vpd/vpd.js'

const PROJECT = 'projects.current'

export async function initialise () {
  const input = document.getElementById('command')

  input.focus()
  input.value = 'new module "woot" 1U 5H'

  input.onkeypress = (event) => {
    if (event.key === 'Enter') {
      event.preventDefault()

      _exec(input.value)
      // text2path()
    }
  }

  // ... restore project
  try {
    const json = retrieve(PROJECT)

    if (json != null) {
      restore(json)
    }
  } catch (err) {
    console.error(err)
  }
}

function _exec (cmd) {
  try {
    const command = parse(cmd)
    const json = exec(command)

    console.log(json)
    store(PROJECT, json)
    redraw()
  } catch (err) {
    console.error(err)
  }
}

function redraw () {
  const object = document.querySelector('#light object')
  const svg = render()
  const blob = new Blob([svg], { type: 'image/svg+xml' })
  const old = object.data
  const url = URL.createObjectURL(blob)

  object.data = url

  URL.revokeObjectURL(old)
}

function _text2path () {
  const object = document.querySelector('#light object')
  const options = {
    decimalPlaces: 3
  }

  fetch('/fonts/RobotoMono-Bold.ttf')
    .then((response) => {
      return response.arrayBuffer()
    })
    .then((bytes) => {
      const text = 'θ'
      const fontSize = points2mm(64)
      const font = opentype.parse(bytes)
      const path = font.getPath(text, 0, 0, fontSize, {})
      const bounds = path.getBoundingBox()
      const advance = font.getAdvanceWidth(text, fontSize, options)

      console.log('>>>>>>>>>', bounds)
      console.log('>>>>>>>>>', advance)
      const svg = `<svg xmlns="http://www.w3.org/2000/svg"
     xmlns:svg="http://www.w3.org/2000/svg"
     xmlns:inkscape="http://www.inkscape.org/namespaces/inkscape"
     version="1.1"
     width="45.72mm"
     height="128.5mm"
     viewBox="0 0 45.72 128.5">
  <defs>
    <g id="theta">${path.toSVG()}</g>
  </defs>
  <rect x="0" y="0" width="45.72" height="128.5" fill="none" stroke="purple" stroke-width="0.25" />
  <g transform="translate(${45.72 / 2 - advance / 2},50)" fill="red">
    <use href="#theta" />
    <rect fill="none" stroke="green" stroke-width="0.25" 
          x="${bounds.x1}" 
          y="${bounds.y1}" 
          width="${bounds.x2 - bounds.x1}" 
          height="${bounds.y2 - bounds.y1}"/>
  </g>
</svg>
`

      const blob = new Blob([svg], { type: 'image/svg+xml' })
      URL.revokeObjectURL(object.data)
      object.data = URL.createObjectURL(blob)
    })
    .catch((err) => {
      console.error(err)
    })
}

function store (tag, json) {
  localStorage.setItem(tag, json)
}

function retrieve (tag) {
  try {
    return localStorage.getItem(tag)
  } catch (err) {
    console.error(err)
  }

  return null
}

function points2mm (pts) {
  return 25.4 * pts / 72
}