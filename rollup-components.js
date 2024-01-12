import terser from '@rollup/plugin-terser';

export default {
    input: 'html/javascript/components/components.js',
    output: {
        file: 'dist/cloudflare/javascript/components.js',
        format: 'es',
        sourcemap: false,
        plugins: [terser()]
    }
}