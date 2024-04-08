package Vehiculos;

public abstract class Vehiculo {
    protected String patente;
    protected double precioDiarioBase;

    public Vehiculo(String patente, double precioDiarioBase) {
        this.patente = patente;
        this.precioDiarioBase = precioDiarioBase;
    }

    public abstract double calcularPrecioAlquiler(int dias);
}