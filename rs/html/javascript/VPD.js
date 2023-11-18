export function initialise () {
  const command = document.getElementById('command')

  command.onkeypress = (event) => {
    if (event.key === 'Enter') {
      event.preventDefault()

      console.log('woot')
    }
  }
}
