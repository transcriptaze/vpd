export function save (filename, svg) {
  const blob = new Blob([svg], { type: 'image/svg+xml' })

  if (window.showSaveFilePicker) {
    saveWithPicker(filename, blob)
  } else {
    const url = URL.createObjectURL(blob)
    const anchor = document.querySelector('a#save')

    anchor.href = url
    anchor.download = filename
    anchor.click()

    URL.revokeObjectURL(url)
  }
}

async function saveWithPicker (filename, blob) {
  try {
    const options = {
      suggestedName: filename,
      types: [
        {
          description: 'VCV module SVG',
          accept: { 'image/svg+xml': ['.svg'] }
        }
      ]
    }

    const handle = await window.showSaveFilePicker(options)
    const stream = await handle.createWritable()

    await stream.write(blob)
    await stream.close()
  } catch (err) {
    if (err.name !== 'AbortError') {
      console.error(err)
    }
  }
}
