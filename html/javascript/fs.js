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

export function save (filetype, filename, blob) {
  if (filetype === 'vpd') {
    saveVPD(filename, blob)
  } else if (filetype === 'vpz') {
    saveVPZ(filename, blob)
  } else if (filetype === 'vpx') {
    saveVPX(filename, blob)
  } else if (filetype === 'svg') {
    saveSVG(filename, blob)
  } else if (filetype === '.h') {
    saveHeader(filename, blob)
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
          'application/json': ['.vpd', '.vpz']
        }
      }
    ]
  }

  window.showOpenFilePicker(options)
    .then((files) => {
      return files.length > 0 ? files[0].getFile() : null
    })
    .then((file) => {
      if (file != null && file.name.endsWith('.vpz')) {
        loadVPZ(file)
      } else {
        loadVPD(file)
      }
    })
    .catch((err) => {
      if (err.name !== 'AbortError') {
        console.error(err)
      }
    })
}

function chooseVPD () {
  const file = document.getElementById('picker')

  file.accept = 'application/json, .vpd, .vpz'

  file.onchange = async (e) => {
    const files = e.target.files

    if (files.length > 0 && files.item[0].name.endsWith('.vpz')) {
      loadVPZ(files.item(0))
    } else {
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
  const trash = document.querySelector('#trash')

  busy()

  file.text()
    .then((b) => JSON.parse(b))
    .then((object) => {
      const serialized = JSON.stringify(object)
      restore(serialized)
      store(PROJECT, serialized)
      trash.disabled = false
    })
    .catch((err) => {
      console.error(err)
    })
    .finally(() => {
      redraw()
      unbusy()
    })
}

async function loadVPZ (file) {
  const trash = document.querySelector('#trash')
  const gzip = new DecompressionStream('gzip')
  const reader = file.stream().pipeThrough(gzip).getReader()
  const decoder = new TextDecoder('utf-8')
  let json = ''

  const f = function () {
    busy()

    reader
      .read()
      .then(({ done, value }) => {
        const chunk = value != null ? value : new Uint8Array()

        json = json.concat(decoder.decode(chunk, { stream: !done }))

        if (done) {
          return JSON.parse(json.concat(chunk))
        } else {
          f()
        }
      })
      .then((object) => {
        if (object != null) {
          const serialized = JSON.stringify(object)
          restore(serialized)
          store(PROJECT, serialized)
          redraw()
          trash.disabled = false
        }
      })
      .catch((err) => {
        console.error(err)
      })
      .finally(() => {
        unbusy()
      })
  }

  f()
}

async function loadVPX (file) {
  const trash = document.querySelector('#trash')
  busy()

  file.text()
    .then((text) => command.parseVPX(text))
    .then((script) => {
      for (const object of script) {
        const json = JSON.stringify(object.command)
        const serialized = exec(json)
        store(PROJECT, serialized)
        trash.disabled = false
      }
    })
    .catch((err) => {
      console.error(err)
    })
    .finally(() => {
      redraw()
      unbusy()
    })
}

function saveVPD (filename, json) {
  const blob = new Blob([json], { type: 'application/json' })

  if (window.showSaveFilePicker) {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'VPD project',
          accept: { 'application/json': ['.vpd'] }
        }
      ]
    }

    saveWithPicker(blob, options)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = filename
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

function saveVPZ (filename, bytes) {
  const blob = new Blob([bytes], { type: 'application/gzip' })

  if (window.showSaveFilePicker) {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'VPD compressed project',
          accept: { 'application/gzip': ['.vpz'] }
        }
      ]
    }

    saveWithPicker(blob, options)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = filename
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

function saveVPX (filename, json) {
  const blob = new Blob([json], { type: 'text/plain' })

  if (window.showSaveFilePicker) {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'VPX script',
          accept: { 'text/plain': ['.vpx'] }
        }
      ]
    }

    saveWithPicker(blob, options)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = filename
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

function saveSVG (filename, svg) {
  const blob = new Blob([svg], { type: 'image/svg+xml' })

  const match = `${filename}`.match(/(.*?)(\.svg)/)
  if (match.length > 2) {
    filename = `${match[1].replaceAll(/[^a-zA-Z0-9-]+/g, '_')}.svg`
  }

  if (window.showSaveFilePicker) {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'VPD panel SVG',
          accept: { 'image/svg+xml': ['.svg'] }
        }
      ]
    }

    saveWithPicker(blob, options)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = filename
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

function saveHeader (filename, svg) {
  const blob = new Blob([svg], { type: 'text/plain' })

  console.log('>>', filename)

  const match = `${filename}`.match(/(.*?)(\.h|\.hpp)/)
  if (match.length > 2) {
    filename = `${match[1].replaceAll(/[^a-zA-Z0-9_-]+/g, '_')}${match[2]}`
  } else if (match.length > 1) {
    filename = `${match[1].replaceAll(/[^a-zA-Z0-9_-]+/g, '_')}.h`
  }

  if (window.showSaveFilePicker) {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'C++ header file',
          accept: { 'text/plain': ['.h', '.hpp'] }
        }
      ]
    }

    saveWithPicker(blob, options)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = filename
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

async function saveWithPicker (blob, options) {
  try {
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

function busy () {
  const windmill = document.querySelector('#windmill')

  windmill.classList.add('visible')
}

function unbusy () {
  const windmill = document.querySelector('#windmill')

  windmill.classList.remove('visible')
}
