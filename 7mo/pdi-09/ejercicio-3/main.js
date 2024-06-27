import Calculadora from './calculadora.js';

const calculadora = new Calculadora();

const resultadoMultiplicacion = calculadora.multiplicar(6, 4);
const resultadoDivision = calculadora.dividir(20, 5);

console.log(`Resultado de la multiplicación: ${resultadoMultiplicacion}`);
console.log(`Resultado de la división: ${resultadoDivision}`);