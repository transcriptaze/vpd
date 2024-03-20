import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('input command translation', () => {
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
})
