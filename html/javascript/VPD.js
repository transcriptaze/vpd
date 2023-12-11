import * as opentype from 'https://unpkg.com/opentype.js/dist/opentype.module.js'
import { help } from './help.js'
import { parse } from './command.js'
import { exec, restore, render, serialize } from '../wasm/vpd/vpd.js'

const PROJECT = 'projects.current'

export async function initialise () {
  const input = document.getElementById('command')
  const helpText = document.getElementById('help-text')

  input.focus()

  input.oninput = (event) => {
    help(helpText, input.value)
  }

  input.onkeypress = (event) => {
    if (event.key === 'Enter') {
      event.preventDefault()

      execute(input.value)
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

export function onLoad () {
  if (window.showOpenFilePicker) {
    const options = {
      id: 'vpd',
      multiple: false,
      types: [
        {
          description: 'VPD project file',
          accept: {
            'application/json': ['.json', '.vpd']
          }
        }
      ]
    }

    window.showOpenFilePicker(options)
      .then((files) => {
        return files.length > 0 ? files[0].getFile() : null
      })
      .then((file) => {
        if (file != null) {
          load(file)
        }
      })
      .catch((err) => {
        console.error(err)
      })
  } else {
    const file = document.getElementById('picker')

    file.onchange = async (e) => {
      const files = e.target.files

      if (files.length > 0) {
        load(files.item(0))
      }
    }

    file.value = null
    file.click()
  }
}

export function onSave () {
  const json = serialize('project')
  const blob = new Blob([json], { type: 'application/json' })

  save(blob)
}

export function onExport () {
  console.log('export')
}

function execute (cmd) {
  try {
    const command = parse(cmd)

    console.log(command)

    if (command != null) {
      const serialized = exec(JSON.stringify(command))

      store(PROJECT, serialized)
      redraw()
    }
  } catch (err) {
    console.error(err)
  }
}

function redraw () {
  const object = document.querySelector('object#light')
  const svg = render()
  const blob = new Blob([svg], { type: 'image/svg+xml' })
  const old = object.data
  const url = URL.createObjectURL(blob)

  object.data = url

  URL.revokeObjectURL(old)
}

function _text2path () {
  const object = document.querySelector('object#light')
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

async function save (blob) {
  const filename = 'vpd.json'

  if (window.showSaveFilePicker) {
    saveWithPicker(blob, filename)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = 'vpd.json'
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

async function load (file) {
  file.text()
    .then((b) => JSON.parse(b))
    .then((object) => {
      const serialized = JSON.stringify(object)
      restore(serialized)
      store(PROJECT, serialized)
      redraw()
    })
    .catch((err) => {
      console.error(err)
    })
}

async function saveWithPicker (blob, filename) {
  try {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'VPD project file',
          accept: { 'application/json': ['.json'] }
        }
      ]
    }

    const handle = await window.showSaveFilePicker(options)
    const stream = await handle.createWritable()

    await stream.write(blob)
    await stream.close()
  } catch (err) {
    if (err.name !== 'AbortError') {
      console.error(err)
    }
  }
}

function points2mm (pts) {
  return 25.4 * pts / 72
}
