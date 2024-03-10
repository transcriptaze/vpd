import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('label command translation', () => {
  it('set label lorem xy (input in +10mm,+12.5mm)', () => {
    const cmd = command.parse('set label lorem xy (input in +10mm,+12.5mm)')
    const expected = {
      src: 'set label lorem xy (input in +10mm,+12.5mm)',
      action: 'set',
      label: {
        id: 'lorem',
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
})
