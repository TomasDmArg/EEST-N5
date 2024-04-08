package Trailers;

public abstract class Trailer {
    protected String tipo;
    protected double precioDiario;

    public Trailer(String tipo, double precioDiario) {
        this.tipo = tipo;
        this.precioDiario = precioDiario;
    }

    public double calcularPrecioAlquiler(int dias) {
        return precioDiario * dias;
    }
}