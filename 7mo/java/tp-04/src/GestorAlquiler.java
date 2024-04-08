import Vehiculos.*;

import java.util.ArrayList;
import java.util.List;

import Trailers.*;

public class GestorAlquiler {
    private List<Vehiculo> vehiculos;
    private List<Trailer> trailers;

    public GestorAlquiler() {
        this.vehiculos = new ArrayList<>();
        this.trailers = new ArrayList<>();
    }

    public void agregarVehiculo(Vehiculo vehiculo) {
        this.vehiculos.add(vehiculo);
    }

    public void agregarTrailer(Trailer trailer) {
        this.trailers.add(trailer);
    }

    public double calcularPrecioTotalAlquiler(Vehiculo vehiculo, int dias, Trailer trailer) {
        double precio = vehiculo.calcularPrecioAlquiler(dias);
        if (trailer != null) {
            precio += trailer.calcularPrecioAlquiler(dias);
        }
        return precio;
    }
}