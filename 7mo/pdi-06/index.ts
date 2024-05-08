/**
 * Genera la secuencia de números a partir de una semilla dada, siguiendo la regla
 * de que si el número actual es par, se divide por 2, y si es impar, se multiplica por 3 y se le suma 1.
 *
 * @param seed - El número inicial de la secuencia.
 * @returns La secuencia de números generada.
 */
function generarSecuencia(seed: number): number[] {
    const sequence: number[] = [];
    let current = seed;

    while (current !== 1) {
        sequence.push(current);
        current = current % 2 === 0 ? current / 2 : current * 3 + 1;
    }
    sequence.push(1);

    return sequence;
}

/**
 * Procesa el archivo de entrada 'matematico.in' y obtiene la semilla de la secuencia.
 * Luego, genera la secuencia y calcula su longitud y el número más grande.
 *
 * @returns Un objeto que contiene la longitud de la secuencia y el número más grande.
 */
async function procesarEntrada() {
  const file = await Bun.file(import.meta.dir + '/io/datos.in').text();
  const semilla = parseInt(file.trim());

  const secuencia = generarSecuencia(semilla);
  const largo = secuencia.length;
  const mayor = Math.max(...secuencia);

  return { largo, mayor };
}

const { largo, mayor } = await procesarEntrada();

await Bun.write(import.meta.dir + '/io/datos.out', `${largo}\n${mayor}`);
