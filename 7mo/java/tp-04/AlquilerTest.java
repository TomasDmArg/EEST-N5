import Vehiculos.*;
import Trailers.*;

public class AlquilerTest {
    public static void main(String[] args) {
        // Crear algunos vehículos y trailers
        Auto auto = new Auto("ABC123", 500, 5);
        Combi combi = new Combi("DEF456", 500, 8);
        Camion camion = new Camion("GHI789", 500, 2.5, new TrailerRefrigerado(100, -10));

        // Crear el gestor de alquiler
        GestorAlquiler gestor = new GestorAlquiler();
        gestor.agregarVehiculo(auto);
        gestor.agregarVehiculo(combi);
        gestor.agregarVehiculo(camion);
        gestor.agregarTrailer(camion.getTrailer());

        // Calcular y mostrar los precios de alquiler
        int dias = 3;
        System.out.println("Precio alquiler auto: " + gestor.calcularPrecioTotalAlquiler(auto, dias, null));
        System.out.println("Precio alquiler combi: " + gestor.calcularPrecioTotalAlquiler(combi, dias, null));
        System.out.println("Precio alquiler camión con trailer: " + gestor.calcularPrecioTotalAlquiler(camion, dias, camion.getTrailer()));
    }
}