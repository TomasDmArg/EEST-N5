package Vehiculos;

public abstract class VehiculoCarga extends Vehiculo {
    protected double pma;

    public VehiculoCarga(String patente, double precioDiarioBase, double pma) {
        super(patente, precioDiarioBase);
        this.pma = pma;
    }

    @Override
    public double calcularPrecioAlquiler(int dias) {
        double precio = super.precioDiarioBase * dias;
        return precio * (1 + 0.2 * pma);
    }
}