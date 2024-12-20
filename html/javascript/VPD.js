import * as help from './help.js'
import * as text from './text.js'
import * as command from './command.js'
import * as fs from './fs.js'
import * as db from './db.js'
import { exec, undo, redo, render, serialize, clear, restore, query } from '../wasm/vpd/vpd.js'

export async function initialise (parser) {
  await command.init(parser, '../wasm/grammars/tree-sitter-command.wasm')
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

  // ... load fonts, etc
  db.init()

  // ... intialise macro keys
  const macros = Array.from(document.querySelectorAll('vpd-macro-key'))

  const m = (e) => {
    const list = new Map(macros.map((v) => [v.id, v.command]))
    const object = Object.fromEntries(list)

    db.storeMacros(object)
  }

  try {
    const object = db.getMacros()
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

    busy()
    restore()
      .then(() => {
        redraw()
        onError(null)
        trash.disabled = false
      })
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

export async function onExport (item) {
  try {
    if (item === 'panel.svg') {
      const serialized = serialize('panel.svg')
      const name = serialized.name
      const svg = serialized.serialized
      const filename = `${name}.svg`

      fs.save('svg', filename, svg)
    } else if (item === 'panel.svg.dark') {
      const serialized = serialize('panel.svg.dark')
      const name = serialized.name
      const svg = serialized.serialized
      const filename = `${name}-dark.svg`

      fs.save('svg', filename, svg)
    } else if (item === 'module.h') {
      const serialized = serialize('module.h')
      const name = serialized.name
      const header = serialized.serialized
      const filename = `${name}.h`

      fs.save('.h', filename, header)
    } else if (item === '>>') {
      const serialized = serialize('module >>')
      const string = serialized.serialized

      fs.save('>>', '<clipboard>', string)
    }
  } catch (err) {
    console.error(err)
    onError(err)
  }
}

export function onUndo () {
  try {
    undo().then((ok) => {
      if (ok) {
        redraw()
      }
    })
  } catch (err) {
    console.error(err)
  }
}

export async function onRedo () {
  try {
    redo().then((ok) => {
      if (ok) {
        redraw()
      }
    })
  } catch (err) {
    console.error(err)
  }
}

export function onTrash () {
  const trash = document.querySelector('#trash')
  const info = document.querySelector('fieldset#module')

  try {
    clear()
    db.storeProject(null)

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

export async function onDebug () {
  console.log('** DEBUG **')

  // const font = await db.getFont('DSEG7ClassicMini-BoldItalic')
  // console.log('>>>>>>>>', font)
}

export function onClickPanel (panel, x, y) {
  const bounds = panel.getBoundingClientRect()
  const dx = x / bounds.width
  const dy = y / bounds.height

  const template = document.querySelector('template#template-info-item')
  const ul = document.querySelector('div#info ul')

  ul.replaceChildren()

  try {
    const rs = query(dx, dy)

    if (rs != null) {
      const array = JSON.parse(rs)

      if (array != null && Array.isArray(array)) {
        for (const item of array) {
          const clone = template.content.cloneNode(true)
          const li = clone.querySelector('li')
          const fieldset = li.querySelector('fieldset')

          li.querySelector('fieldset legend').innerHTML = `${item.itype}`.toUpperCase()
          li.querySelector('p[data-tag="item.id"]').innerHTML = `${item.id}`

          if (item.attributes != null) {
            for (const [k, v] of item.attributes) {
              const label = document.createElement('label')
              const value = document.createElement('p')

              label.innerHTML = `${k}`
              value.innerHTML = `${v}`.replaceAll('<', '&lt;').replaceAll('>', '&gt;')

              fieldset.append(label)
              fieldset.append(value)
            }
          }

          ul.append(clone)
        }
      }
    }
  } catch (err) {
    console.error(err)
  }
}

function execute (v) {
  onError(null)

  try {
    const cmd = command.parse(v)
    if (cmd != null) {
      console.log(cmd)

      exec(JSON.stringify(cmd)).then((ok) => {
        if (ok) {
          redraw()
        }
      })
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
