abstract class Jugador {

    protected String nombre;
    protected double velocidad;
    protected double potencia;

    public Jugador(String nombre, double velocidad, double potencia) {
        this.nombre = nombre;
        this.velocidad = velocidad;
        this.potencia = potencia;
    }

    public abstract double indiceDefensa();

    public abstract double indiceAtaque();
}
