/**
 * Dado un archivo de texto con números enteros, se pide contar cuántos números tienen el mismo dígito en la primera y última posición. 
 * Luego, se debe guardar en otro archivo de texto los números que cumplen con la condición.
 */

const file = await Bun.file(import.meta.dir + '/io/datos.in').text();

const allNumbers = (file).split('\n')?.[1]?.split(' ') ?? [];

const filteredNumbers = allNumbers.filter(n => n.startsWith(n[n.length - 1]));

await Bun.write(import.meta.dir + '/io/datos.out', `${filteredNumbers.length}\n${filteredNumbers.join(' ')}`);
