import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('widget command translation', () => {
  it('set widget channels xy (input freq +10mm,+12.5mm)', () => {
    const cmd = command.parse('set widget channels xy (input freq +10mm,+12.5mm)')
    const expected = {
      src: 'set widget channels xy (input freq +10mm,+12.5mm)',
      action: 'set',
      widget: {
        id: 'channels',
        x: {
          reference: 'input<freq>',
          offset: 10
        },
        y: {
          reference: 'input<freq>',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})
