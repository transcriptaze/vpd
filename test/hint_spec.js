import { describe, it } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter';

import * as hints from '../html/javascript/hints.js'

describe('command hints', function () {
  it('no text', async function () {
    await Parser.init()
    await hints.init(Parser,'./html/wasm/grammars/tree-sitter-hint.wasm')

    const list = hints.parse('').sort()
    const expected = ['new',  'decorate', 'set', 'delete', 'load','unload','save','export','list', 'help'].sort()

    expect(list).to.eql(expected)
  })
})

