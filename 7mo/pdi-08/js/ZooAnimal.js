/**
 * Clase ZooAnimal
 * Representa un animal del zoológico.
 */
export class ZooAnimal {
    /**
     * Constructor de la clase ZooAnimal
     * @param {string} name - Nombre del animal.
     * @param {number} cageNumber - Número de jaula del animal.
     * @param {number} animalTypeId - ID del tipo de animal.
     * @param {number} weight - Peso del animal.
     */
    constructor(name, cageNumber, animalTypeId, weight) {
        this.id = Math.random();
        this.name = name;
        this.cageNumber = cageNumber;
        this.animalTypeId = animalTypeId;
        this.weight = weight;
    }

    /**
     * Cuenta la cantidad de animales en la jaula 5 que pesan menos de 3kg.
     * @param {ZooAnimal[]} animals - Lista de animales.
     * @returns {number} Cantidad de animales en la jaula 5 que pesan menos de 3kg.
     */
    static countAnimalsInCage5Under3kg(animals) {
        return animals.filter(animal => animal.cageNumber === 5 && animal.weight < 3).length;
    }

    /**
     * Cuenta la cantidad de animales felinos entre las jaulas 2 y 5.
     * @param {ZooAnimal[]} animals - Lista de animales.
     * @returns {number} Cantidad de animales felinos entre las jaulas 2 y 5.
     */
    static countFelineAnimalsBetweenCages2And5(animals) {
        return animals.filter(animal => animal.animalTypeId === 1 && animal.cageNumber >= 2 && animal.cageNumber <= 5).length;
    }

    /**
     * Obtiene una lista con los nombres de los animales en la jaula 4 que pesan menos de 120kg.
     * @param {ZooAnimal[]} animals - Lista de animales.
     * @returns {string[]} Lista de nombres de animales en la jaula 4 que pesan menos de 120kg.
     */
    static listAnimalNameInCage4Under120(animals) {
        return animals.filter(animal => animal.cageNumber === 4 && animal.weight < 120).map(animal => animal.name);
    }
}