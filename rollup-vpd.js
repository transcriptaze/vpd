import terser from '@rollup/plugin-terser';

export default {
    input: {
        bundle: 'html/javascript/VPD.js',
    },
    output: {
        dir: 'dist/cloudflare/javascript',
        format: 'es',
        sourcemap: false,
        plugins: [terser()]
    },
    external: ['https://unpkg.com/opentype.js/dist/opentype.module.js'], 
}


