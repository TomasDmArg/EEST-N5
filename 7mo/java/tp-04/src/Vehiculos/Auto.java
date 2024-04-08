package Vehiculos;

public class Auto extends Vehiculo {
    // Implementación de la clase Auto
    private int plazas;

    public Auto(String patente, double precioDiarioBase, int plazas) {
        super(patente, precioDiarioBase);
        this.plazas = plazas;
    }

    @Override
    public double calcularPrecioAlquiler(int dias) {
        double precio = super.precioDiarioBase * dias;
        return precio * (1 + 0.015 * plazas);
    }
}