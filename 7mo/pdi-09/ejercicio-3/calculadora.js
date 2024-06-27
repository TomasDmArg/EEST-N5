/**
 * Clase que representa una Calculadora.
 */
export default class Calculadora {
    /**
     * Multiplica dos números.
     * @param {number} a - El primer número.
     * @param {number} b - El segundo número.
     * @returns {number} El producto de los dos números.
     */
    multiplicar(a, b) {
        return a * b;
    }

    /**
     * Divide dos números.
     * @param {number} a - El primer número.
     * @param {number} b - El segundo número.
     * @returns {number} El cociente de los dos números.
     * @throws {Error} Si el divisor es cero.
     */
    dividir(a, b) {
        if (b !== 0) {
            return a / b;
        } else {
            throw new Error('No se puede dividir por cero');
        }
    }
}