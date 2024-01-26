import * as help from './help.js'
import * as text from './text.js'
import * as command from './command.js'
import * as fs from './fs.js'
import { store, retrieve, PROJECT, MACROS } from './db.js'
import { exec, render, serialize, clear, restore, query } from '../wasm/vpd/vpd.js'

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

  // ... restore project
  try {
    const trash = document.querySelector('#trash')
    const json = retrieve(PROJECT)

    if (json != null) {
      busy()
      restore(json)
      redraw()

      trash.disabled = false
    }

    onError(null)
  } catch (err) {
    console.error(err)
  } finally {
    unbusy()
  }

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
  const timestamp = yyyymmddhhmmss()

  try {
    if (type === 'vpd') {
      const serialized = serialize('project')
      const name = serialized.name
      const json = serialized.serialized
      const filename = timestamped ? `${name} ${timestamp}.vpd` : `${name}.vpd`

      fs.save('vpd', filename, json)
    }

    if (type === 'vpx') {
      const serialized = serialize('script')
      const name = serialized.name
      const text = serialized.serialized
      const filename = timestamped ? `${name} ${timestamp}.vpx` : `${name}.vpx`

      fs.save('vpx', filename, text)
    }
  } catch (err) {
    console.error(err)
    onError(err)
  }
}

export function onExport (theme) {
  try {
    if (theme === 'dark') {
      const serialized = serialize('panel-dark')
      const name = serialized.name
      const svg = serialized.serialized
      const filename = `${name}-dark.svg`

      fs.save('svg', filename, svg)
    } else {
      const serialized = serialize('panel')
      const name = serialized.name
      const svg = serialized.serialized
      const filename = `${name}.svg`

      fs.save('svg', filename, svg)
    }
  } catch (err) {
    console.error(err)
    onError(err)
  }
}

export function onTrash () {
  const trash = document.querySelector('#trash')
  const info = document.querySelector('fieldset#module')

  try {
    clear()
    store(PROJECT, null)

    document.querySelectorAll('div.panel.light object').forEach((o) => {
      o.data = './images/panel-light.svg'
    })

    document.querySelectorAll('div.panel.dark object').forEach((o) => {
      o.data = './images/panel-dark.svg'
    })

    info.classList.remove('visible')

    trash.disabled = true
  } catch (err) {
    console.error(err)
  }
}

export function onClickPanel (panel, x, y) {
  const bounds = panel.getBoundingClientRect()
  const dx = x / bounds.width
  const dy = y / bounds.height

  // console.log(panel, { x }, { dx }, dx * (50.8 + 10.16) - 5.08)
  // console.log(panel, { y }, { dy }, dy * (128.5 + 10.16) - 5.08)

  try {
    const rs = query(dx,dy)

    if (rs != null) {
      const object = JSON.parse(rs)

      console.log(object)
    }
  } catch (err) {
    console.error(err)
  }
}

function execute (v) {
  const trash = document.querySelector('#trash')

  onError(null)

  try {
    const cmd = command.parse(v)

    if (cmd != null) {
      console.log(cmd)

      const serialized = exec(JSON.stringify(cmd))

      if (serialized !== '') {
        store(PROJECT, serialized)
        redraw()
        trash.disabled = false
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

function yyyymmddhhmmss () {
  const now = new Date()
  const year = `${now.getFullYear()}`.padStart(4, '0')
  const month = `${now.getMonth() + 1}`.padStart(2, '0')
  const day = `${now.getDate()}`.padStart(2, '0')
  const hour = `${now.getHours()}`.padStart(2, '0')
  const minute = `${now.getMinutes()}`.padStart(2, '0')
  const second = `${now.getSeconds()}`.padStart(2, '0')

  return `${year}-${month}-${day} ${hour}.${minute}.${second}`
}

function busy () {
  const windmill = document.querySelector('#windmill')

  windmill.classList.add('visible')
}

function unbusy () {
  const windmill = document.querySelector('#windmill')

  windmill.classList.remove('visible')
}
