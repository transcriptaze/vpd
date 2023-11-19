export function initialise () {
  const input = document.getElementById('command')

  input.focus()
  input.value = 'woot'

  input.onkeypress = (event) => {
    if (event.key === 'Enter') {
      event.preventDefault()

      const cmd = input.value

      if (cmd === 'woot') {
        woot()
      }
    }
  }
}

function woot () {
  const object = document.querySelector('#light object')

  fetch('/images/fonts.svg')
    .then((response) => {
      if (response.status === 200) {
        return response.blob()
      } else {
        response.text().then((msg) => { throw new Error(msg) })
      }
    })
    .then((blob) => {
      const old = object.data
      const url = URL.createObjectURL(blob)

      URL.revokeObjectURL(old)
      object.data = url
    })
    .catch(function (err) {
      console.error(`${err.message}`)
    })
}
