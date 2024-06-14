import { ZooAnimal } from "./ZooAnimal";

/**
 * Clase ZooManager
 * Maneja la gestión de animales en el zoológico.
 */
export class ZooManager {
    /**
     * Constructor de la clase ZooManager
     * Inicializa los animales del zoológico.
     */
    constructor() {
        this.animals = [
            new ZooAnimal('Leon', 1, 1, 250),
            new ZooAnimal('Tigre', 2, 1, 200),
            new ZooAnimal('Elefante', 3, 2, 1200),
            new ZooAnimal('Mono', 4, 3, 25),
            new ZooAnimal('Serpiente', 5, 4, 5)
        ];
    }

    /**
     * Agrega un nuevo animal al zoológico.
     * @param {string} name - Nombre del animal.
     * @param {number} cageNumber - Número de jaula del animal.
     * @param {number} animalTypeId - ID del tipo de animal.
     * @param {number} weight - Peso del animal.
     */
    addAnimal(name, cageNumber, animalTypeId, weight) {
        const newAnimal = new ZooAnimal(name, cageNumber, animalTypeId, weight);
        this.animals.push(newAnimal);
    }

    /**
     * Elimina un animal del zoológico.
     * @param {number} animalId - ID del animal a eliminar.
     */
    removeAnimal(animalId) {
        this.animals = this.animals.filter(animal => animal.id !== animalId);
    }

    /**
     * Obtiene la lista de animales del zoológico.
     * @returns {ZooAnimal[]} Lista de animales.
     */
    getAnimals() {
        return this.animals;
    }
}
