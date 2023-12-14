export class HelpText extends HTMLElement {
  static get observedAttributes () {
    return []
  }

  constructor () {
    super()

    this.internal = {
    }

    const template = document.querySelector('#template-help-text')
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
  }

  disconnectedCallback () {
  }

  adoptedCallback () {
  }

  attributeChangedCallback (name, from, to) {
  }

  display (help) {
    const shadow = this.shadowRoot
    const ul = shadow.querySelector('ul')

    ul.replaceChildren()

    for (const v of help) {
      const li = document.createElement('li')
      li.innerHTML = `${v}`
      ul.append(li)
    }
  }
}

customElements.define('vpd-help-text', HelpText)
