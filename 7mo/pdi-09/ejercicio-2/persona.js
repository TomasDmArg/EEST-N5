/**
 * Clase que representa a una Persona.
 */
export class Persona {
    /**
     * Crea una nueva Persona.
     * @param {string} nombre - El nombre de la persona.
     * @param {number} edad - La edad de la persona.
     */
    constructor(nombre, edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    /**
     * Muestra la información de la persona.
     */
    mostrarInformacion() {
        console.log(`Nombre: ${this.nombre}, Edad: ${this.edad}`);
    }
}