package Vehiculos;

public class Combi extends Vehiculo {
    private int plazas;

    public Combi(String patente, double precioDiarioBase, int plazas) {
        super(patente, precioDiarioBase);
        this.plazas = plazas;
    }

    @Override
    public double calcularPrecioAlquiler(int dias) {
        double precio = super.precioDiarioBase * dias;
        return precio * (1 + 0.02 * plazas);
    }
}