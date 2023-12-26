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

export function onDropped (file) {
  load(file)
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
  for (const theme of ['light', 'dark']) {
    const object = document.querySelector(`object#${theme}`)
    const svg = render(theme)
    const blob = new Blob([svg], { type: 'image/svg+xml' })
    const old = object.data
    const url = URL.createObjectURL(blob)

    object.data = url

    URL.revokeObjectURL(old)
  }
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
