import { redraw } from './VPD.js'
import { store, PROJECT } from './db.js'
import { exec, restore } from '../wasm/vpd/vpd.js'
import * as command from './command.js'

export function load (filetype, file) {
  if (file != null && filetype === 'vpd') {
    loadVPD(file)
  } else if (file != null && filetype === 'vpx') {
    loadVPX(file)
  } else if (filetype === 'vpd' && window.showOpenFilePicker) {
    pickVPD(filetype)
  } else if (filetype === 'vpd') {
    chooseVPD(filetype)
  } else if (filetype === 'vpx' && window.showOpenFilePicker) {
    pickVPX(filetype)
  } else if (filetype === 'vpx') {
    chooseVPX(filetype)
  }
}

export function save (filename, svg) {
  const blob = new Blob([svg], { type: 'image/svg+xml' })

  const match = `${filename}`.match(/(.*?)(\.svg)/)
  if (match.length > 2) {
    filename = `${match[1].replaceAll(/[^a-zA-Z0-9-]+/g, '_')}.svg`
  }

  if (window.showSaveFilePicker) {
    saveWithPicker(filename, blob)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = filename
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

function pickVPD () {
  const options = {
    id: 'vpd',
    multiple: false,
    types: [
      {
        description: 'VPD project file',
        accept: {
          'application/json': ['.vpd']
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
        loadVPD(file)
      }
    })
    .catch((err) => {
      console.error(err)
    })
}

function chooseVPD () {
  const file = document.getElementById('picker')

  file.accept = 'application/json, .vpd'

  file.onchange = async (e) => {
    const files = e.target.files

    if (files.length > 0) {
      loadVPD(files.item(0))
    }
  }

  file.value = null
  file.click()
}

function pickVPX (filetype) {
  const options = {
    id: 'vpd',
    multiple: false,
    types: [
      {
        description: 'VPD script file',
        accept: {
          'text/plain': ['.vpx']
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
        loadVPX(file)
      }
    })
    .catch((err) => {
      console.error(err)
    })
}

function chooseVPX (filetype) {
  const file = document.getElementById('picker')

  file.accept = 'text/plain, .vpx'

  file.onchange = async (e) => {
    const files = e.target.files

    if (files.length > 0) {
      loadVPX(files.item(0))
    }
  }

  file.value = null
  file.click()
}

async function loadVPD (file) {
  file.text()
    .then((b) => JSON.parse(b))
    .then((object) => {
      const serialized = JSON.stringify(object)
      restore(serialized)
      store(PROJECT, serialized)
    })
    .catch((err) => {
      console.error(err)
    })
    .finally(() => {
      redraw()
    })
}

async function loadVPX (file) {
  file.text()
    .then((text) => command.parseVPX(text))
    .then((script) => {
      for (const cmd of script) {
        const serialized = exec(JSON.stringify(cmd))
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

async function saveWithPicker (filename, blob) {
  try {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'VCV panel SVG',
          accept: { 'image/svg+xml': ['.svg'] }
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
