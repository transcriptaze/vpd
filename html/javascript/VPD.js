import { help } from './help.js'
import { parse, parseVPX } from './command.js'
import { store, retrieve, PROJECT, MACROS } from './db.js'
import { exec, restore, render, serialize } from '../wasm/vpd/vpd.js'

export async function initialise () {
  // ... 'command' handler
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
    }
  }

  // ... intialise macro keys
  const macros = Array.from(document.querySelectorAll('vpd-macro-key'))

  const m = (e) => {
    const list = new Map(macros.map((v) => [v.id, v.command]))
    const object = Object.fromEntries(list)

    store(MACROS, object)
  }

  try {
    const object = retrieve(MACROS)
    if (object != null) {
      for (const [k, v] of Object.entries(object)) {
        const key = macros.find((e) => k === e.id)
        if (key != null) {
          key.command = v
        }
      }
    }
  } catch (err) {
    console.error(err)
  }

  for (const v of macros) {
    v.onchanged = m
  }

  // // ... restore project
  // try {
  //   const json = retrieve(PROJECT)
  //
  //   if (json != null) {
  //     restore(json)
  //     redraw()
  //   }
  // } catch (err) {
  //   console.error(err)
  // }
}

export function onLoad (event) {
  const type = event.altKey ? 'vpx' : 'vpd'

  if (window.showOpenFilePicker) {
    const options = {
      id: 'vpd',
      multiple: false,
      types: []
    }

    if (type === 'vpd') {
      options.types.push(
        {
          description: 'VPD project file',
          accept: {
            'application/json': ['.vpd']
          }
        })
    }

    if (type === 'vpx') {
      options.types.push(
        {
          description: 'VPD script file',
          accept: {
            'text/plain': ['.vpx']
          }
        })
    }

    window.showOpenFilePicker(options)
      .then((files) => {
        return files.length > 0 ? files[0].getFile() : null
      })
      .then((file) => {
        if (file != null) {
          load(file, type)
        }
      })
      .catch((err) => {
        console.error(err)
      })
  } else {
    const file = document.getElementById('picker')

    if (type === 'vpd') {
      file.accept = 'application/json, .vpd'
    }

    if (type === 'vpx') {
      file.accept = 'text/plain, .vpx'
    }

    file.onchange = async (e) => {
      const files = e.target.files

      if (files.length > 0) {
        load(files.item(0), type)
      }
    }

    file.value = null
    file.click()
  }
}

export function onDropped (file) {
  console.log(file)

  if (file.type === 'application/json' || file.name.endsWith('.vpd')) {
    load(file, 'vpd')
  }

  if (file.type === 'text/plain' || file.name.endsWith('.vpx')) {
    load(file, 'vpx')
  }
}

export function onSave () {
  const json = serialize('project')
  const blob = new Blob([json], { type: 'application/json' })

  save(blob)
}

export function onExport (event, theme) {
  execute(`export module svg ${theme}`)
}

function execute (cmd) {
  try {
    const command = parse(cmd)

    if (command != null) {
      console.log(command)

      const serialized = exec(JSON.stringify(command))

      store(PROJECT, serialized)
      redraw()
    }
  } catch (err) {
    console.error(err)
  }
}

function redraw () {
  if (redraw.buffer == null) {
    redraw.buffer = 0
  }

  const kx = redraw.buffer % 2
  redraw.buffer++
  const ix = redraw.buffer % 2

  for (const theme of ['light', 'dark']) {
    const object0 = document.querySelector(`object#${theme}${kx}`)
    const object = document.querySelector(`object#${theme}${ix}`)
    const svg = render(theme)
    const blob = new Blob([svg], { type: 'image/svg+xml' })
    const old = object.data
    const url = URL.createObjectURL(blob)

    object.data = url
    object0.classList.remove('visible')
    object.classList.add('visible')

    URL.revokeObjectURL(old)
  }
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

async function load (file, type) {
  if (type === 'vpd') {
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

  if (type === 'vpx') {
    file.text()
      .then((text) => parseVPX(text))
      .then((script) => {
        for (const command of script) {
          const serialized = exec(JSON.stringify(command))
          store(PROJECT, serialized)
        }
      })
      .catch((err) => {
        console.error(err)
      })
      .finally(() => {
        redraw()
      })
  }
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
