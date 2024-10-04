import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('parameter command translation', () => {
  it('set parameter volume xy (input in +10mm,+12.5mm)', () => {
    const cmd = command.parse('set parameter volume xy (input in +10mm,+12.5mm)')
    const expected = {
      src: 'set parameter volume xy (input in +10mm,+12.5mm)',
      action: 'set',
      parameter: {
        id: 'volume',
        x: {
          reference: 'input<in>',
          offset: 10
        },
        y: {
          reference: 'input<in>',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new parameter volume @30°,10mm', () => {
    const cmd = command.parse('new parameter volume @30°,10mm')
    const expected = {
      src: 'new parameter volume @30°,10mm',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'absolute',
          offset: 8.660
        },
        y: {
          reference: 'absolute',
          offset: -5.000
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new parameter volume 30°,10mm', () => {
    const cmd = command.parse('new parameter volume 30°,10mm')
    const expected = {
      src: 'new parameter volume 30°,10mm',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'origin',
          offset: 8.660
        },
        y: {
          reference: 'origin',
          offset: -5.000
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new parameter volume (v1,h1 30°,10mm)', () => {
    const cmd = command.parse('new parameter volume (v1,h1 30°,10mm)')
    const expected = {
      src: 'new parameter volume (v1,h1 30°,10mm)',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'v1',
          offset: 8.660
        },
        y: {
          reference: 'h1',
          offset: -5.000
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new parameter volume (input in 30°,10mm)', () => {
    const cmd = command.parse('new parameter volume (input in 30°,10mm)')
    const expected = {
      src: 'new parameter volume (input in 30°,10mm)',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'input<in>',
          offset: 8.660
        },
        y: {
          reference: 'input<in>',
          offset: -5.000
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})
