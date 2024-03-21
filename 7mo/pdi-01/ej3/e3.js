import { platform, release, totalmem, freemem, arch, cpus } from 'node:os'

console.log('Sistema operativo:' + platform())
console.log('Versión del sistema operativo:' + release())
console.log('Memoria total:' + totalmem() + ' bytes')
console.log('Memoria libre:' + freemem() + ' bytes')
console.log('Arquitectura CPU:' + arch)
console.log('Número de procesadores lógicos:' + cpus().length)
cpus().forEach(cpu => {
  console.log('Nombre: ' + cpu.model)
  console.log('Núcleos: ' + cpu.cores)
})