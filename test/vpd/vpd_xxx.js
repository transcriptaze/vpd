import { describe, it, before } from 'mocha'
import { expect } from 'chai'


import { default as vpd_init } from './wasm/vpd/vpd.js'

before(async function () {
  await vpd_init()
})

describe('vpd WASM API', () => {
  it('serialize', function () {
    console.log('>>>>>>>>>>>>>> woot')
  })
})
