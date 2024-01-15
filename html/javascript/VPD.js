import * as help from './help.js'
import * as text from './text.js'
import * as command from './command.js'
import * as fs from './fs.js'
import { store, retrieve, PROJECT, MACROS } from './db.js'
import { exec, render, serialize } from '../wasm/vpd/vpd.js'

export async function initialise (parser) {
  await command.init(parser)
  await help.init(parser)
  await text.init()

  // ... 'command' handler
  const input = document.getElementById('command')
  const helpText = document.getElementById('help-text')

  input.focus()

  input.oninput = (event) => {
    help.help(helpText, input.value)
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

  help.help(helpText, '')
}

export function onLoad (type) {
  fs.load(type)
}

export function onDropped (file) {
  if (file.type === 'application/json' || file.name.endsWith('.vpd')) {
    fs.load('vpd', file)
  }

  if (file.type === 'text/plain' || file.name.endsWith('.vpx')) {
    fs.load('vpx', file)
  }
}

export function onSave (type, timestamped) {
  try {
    const json = serialize('project')
    const object = JSON.parse(json)

    const now = new Date()
    const year = `${now.getFullYear()}`.padStart(4, '0')
    const month = `${now.getMonth() + 1}`.padStart(2, '0')
    const day = `${now.getDate()}`.padStart(2, '0')
    const hour = `${now.getHours()}`.padStart(2, '0')
    const minute = `${now.getMinutes()}`.padStart(2, '0')
    const second = `${now.getSeconds()}`.padStart(2, '0')
    const timestamp = `${year}-${month}-${day} ${hour}.${minute}.${second}`

    let filename = timestamped ? `VPD ${timestamp}.vpd` : 'VPD.vpd'

    if (Object.hasOwn(object, 'name')) {
      filename = timestamped ? `${object.name} ${timestamp}.vpd` : `${object.name}.vpd`
    }

    fs.save('vpd', filename, json)
  } catch (err) {
    console.error(err)
    onError(err)
  }
}

export function onExport (event, theme) {
  execute(`export panel svg ${theme}`)
}

function execute (v) {
  onError(null)

  try {
    const cmd = command.parse(v)

    if (cmd != null) {
      console.log(cmd)

      const serialized = exec(JSON.stringify(cmd), `${v}`)

      if (serialized !== '') {
        store(PROJECT, serialized)
        redraw()
      }
    }
  } catch (err) {
    onError(err)
    console.error(err)
  }
}

export function onError (err) {
  const div = document.querySelector('div#message')
  const span = div.querySelector('div')

  if (err == null) {
    span.innerHTML = ''
    div.classList.remove('visible')
  } else if (err instanceof Error) {
    span.innerHTML = `${err.message}`
    div.classList.add('visible')
  } else {
    span.innerHTML = `${err}`
    div.classList.add('visible')
  }
}

// FIXME interimly exported for refactoring file load stuff
export function redraw () {
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
