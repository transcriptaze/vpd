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
    const div = shadow.querySelector('div.vpd-help-text div.ul')

    div.replaceChildren()
    for (const v of help) {
      const li = document.createElement('div')
      li.innerHTML = `${v}`
      li.classList.add('li')
      div.append(li)
    }
  }
}

customElements.define('vpd-help-text', HelpText)
