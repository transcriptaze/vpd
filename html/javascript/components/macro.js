export class MacroKey extends HTMLElement {
  static get observedAttributes () {
    return ['label', 'key', 'command']
  }

  constructor () {
    super()

    this.internal = {
    }

    const template = document.querySelector('#template-macro-key')
    const stylesheet = document.createElement('link')
    const content = template.content
    const shadow = this.attachShadow({ mode: 'open' })
    const clone = content.cloneNode(true)

    stylesheet.setAttribute('rel', 'stylesheet')
    stylesheet.setAttribute('href', '/css/components.css')

    shadow.appendChild(stylesheet)
    shadow.appendChild(clone)
  }

  connectedCallback () {
    const shadow = this.shadowRoot
    const button = shadow.querySelector('button')

    button.onclick = (e) => onClick(this, e)

    window.addEventListener('keydown', e => onKeyDown(this, event))
  }

  disconnectedCallback () {
  }

  adoptedCallback () {
  }

  attributeChangedCallback (name, from, to) {
    if (name === 'label') {
      this.label = to
    }

    if (name === 'key') {
      this.key = to
    }

    if (name === 'command') {
      this.command = to
    }
  }

  /* eslint-disable-next-line accessor-pairs */
  set label (v) {
    const shadow = this.shadowRoot
    const button = shadow.querySelector('button')

    button.innerHTML = `${v}`
  }

  /* eslint-disable-next-line accessor-pairs */
  set key (v) {
    this.internal.key = `${v}`
  }

  /* eslint-disable-next-line accessor-pairs */
  set command (v) {
    this.internal.command = `${v}`

    const shadow = this.shadowRoot
    const button = shadow.querySelector('button')

    button.title = `${v}`
  }
}

function onClick (object, event) {
  if (object.internal.command != null) {
    const cmd = document.getElementById('command')

    cmd.focus()
    cmd.value = object.internal.command
  }
}

function onKeyDown (object, event) {
  if (event.ctrlKey && object.internal.key != null && `ctrl-${event.key}` === object.internal.key) {
    const cmd = document.getElementById('command')

    cmd.focus()
    cmd.value = object.internal.command
  }
}

customElements.define('vpd-macro-key', MacroKey)
