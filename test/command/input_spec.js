import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('new input command translation', () => {
  it('new input freq  @30°,10mm', () => {
    const cmd = command.parse('new input freq @30°,10mm')
    const expected = {
      src: 'new input freq @30°,10mm',
      action: 'new',
      input: {
        name: 'freq',
        x: {
          reference: 'absolute',
          offset: 0.0
        },
        y: {
          reference: 'absolute',
          offset: 0.0
        },
        offset: {
          dx: 0.0,
          dy: 0.0,
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})

describe('set input command translation', () => {
  it('set input in x @10mm', () => {
    const cmd = command.parse('set input in x @10mm')
    const expected = {
      src: 'set input in x @10mm',
      action: 'set',
      input: {
        id: 'in',
        x: {
          reference: 'absolute',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set input freq xy (v1,h2 30°,10mm)', () => {
    const cmd = command.parse('set input freq xy (v1,h2 30°,10mm)')
    const expected = {
      src: 'set input freq xy (v1,h2 30°,10mm)',
      action: 'set',
      input: {
        id: 'freq',
        x: {
          reference: 'v1',
          offset: 0
        },
        y: {
          reference: 'h2',
          offset: 0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})
