import { parse, render } from '../wasm/vpd.js'

export function initialise () {
  const input = document.getElementById('command')

  input.focus()
  input.value = 'woot'

  input.onkeypress = (event) => {
    if (event.key === 'Enter') {
      event.preventDefault()

      exec(input.value)
    }
  }
}

function exec (cmd) {
  try {
    const v = parse(cmd)
    console.log('>>>>>>>>>', v)
    redraw()
  } catch (err) {
    console.error('>>>>>>>>>', err)
  }
}

function redraw () {
  const object = document.querySelector('#light object')
  const svg = render()
  const blob = new Blob([svg], { type: 'image/svg+xml' })

  URL.revokeObjectURL(object.data)
  object.data = URL.createObjectURL(blob)
}
