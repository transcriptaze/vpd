import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('output command translation', () => {
  it('delete output audio', () => {
    const cmd = command.parse('delete output audio')
    const expected = {
      src: 'delete output audio',
      action: 'delete',
      output: {
        id: 'audio'
      }
    }

    expect(cmd).to.eql(expected)
  })
})
