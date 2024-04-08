package Vehiculos;

import Trailers.Trailer;

public class Camion extends VehiculoCarga {
    private Trailer trailer;

    public Camion(String patente, double precioDiarioBase, double pma, Trailer trailer) {
        super(patente, precioDiarioBase, pma);
        this.trailer = trailer;
    }

    @Override
    public double calcularPrecioAlquiler(int dias) {
        double precio = super.calcularPrecioAlquiler(dias);
        precio += precio * 0.4;
        if (trailer != null) {
            precio += trailer.calcularPrecioAlquiler(dias);
        }
        return precio;
    }

    public Trailer getTrailer() {
        return trailer;
    }
}