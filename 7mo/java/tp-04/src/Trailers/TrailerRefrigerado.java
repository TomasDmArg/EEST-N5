package Trailers;

public class TrailerRefrigerado extends Trailer {
    private double temperaturaMinima;

    public TrailerRefrigerado(double precioDiario, double temperaturaMinima) {
        super("Refrigerado", precioDiario);
        this.temperaturaMinima = temperaturaMinima;
    }
}