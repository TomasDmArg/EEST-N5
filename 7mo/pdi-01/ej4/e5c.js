import { readdir } from 'node:fs/promises'

async function leerDirectorio() {
  const archivos = await readdir("./")
  for (let archivo of archivos) {
    console.log(archivo)
  }
}

leerDirectorio()