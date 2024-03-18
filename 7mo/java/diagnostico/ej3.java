abstract class NaveEspacial {
    protected String nombre;
    protected int energia;
    protected double posicionX;
    protected double posicionY;

    public NaveEspacial(double posicionX, double posicionY) {
        this.posicionX = posicionX;
        this.posicionY = posicionY;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getEnergia() {
        return energia;
    }

    public void setEnergia(int energia) {
        this.energia = energia;
    }

    public double getPosicionX() {
        return posicionX;
    }

    public double getPosicionY() {
        return posicionY;
    }

    public void mueve(double x, double y) {
        posicionX += x;
        posicionY += y;
    }

    @Override
    public String toString() {
        return "NaveEspacial [nombre=" + nombre + ", energia=" + energia + ", posicionX=" + posicionX + ", posicionY="
                + posicionY + "]";
    }

    public abstract void ataca(NaveEspacial adversario);
}

// Clase DestructorEstelar
class DestructorEstelar extends NaveEspacial {
    private int cantidadTripulantes;

    public DestructorEstelar(double posicionX, double posicionY) {
        super(posicionX, posicionY);
        energia = 1000; // Energía inicial de 1000 unidades
    }

    public int getCantidadTripulantes() {
        return cantidadTripulantes;
    }

    public void setCantidadTripulantes(int cantidadTripulantes) {
        this.cantidadTripulantes = cantidadTripulantes;
    }

    @Override
    public void ataca(NaveEspacial adversario) {
        adversario.setEnergia(adversario.getEnergia() - 200);
    }

    @Override
    public void mueve(double x, double y) {
        // Reducir los incrementos un 50%
        super.mueve(x / 2, y / 2);
    }

    @Override
    public String toString() {
        return "DestructorEstelar [cantidadTripulantes=" + cantidadTripulantes + ", nombre=" + nombre + ", energia="
                + energia + ", posicionX=" + posicionX + ", posicionY=" + posicionY + "]";
    }
}

class CazaLigero extends NaveEspacial {
    public CazaLigero(double posicionX, double posicionY) {
        super(posicionX, posicionY);
        energia = 500;
    }

    @Override
    public void ataca(NaveEspacial adversario) {
        adversario.setEnergia(adversario.getEnergia() - 50);
    }

    @Override
    public String toString() {
        return "CazaLigero [nombre=" + nombre + ", energia=" + energia + ", posicionX=" + posicionX + ", posicionY="
                + posicionY + "]";
    }
}

// Clase Prueba
class Prueba {
    public static void main(String[] args) {
        DestructorEstelar destructor = new DestructorEstelar(0, 0);
        destructor.setNombre("Destructor Estelar");
        destructor.setCantidadTripulantes(500);

        CazaLigero caza = new CazaLigero(100, 100);
        caza.setNombre("Caza Ligero");

        System.out.println("Antes del ataque:");
        System.out.println(destructor);
        System.out.println(caza);

        destructor.ataca(caza);
        caza.ataca(destructor);

        System.out.println("\nDespués del ataque:");
        System.out.println(destructor);
        System.out.println(caza);

        destructor.mueve(50, 50);
        caza.mueve(50, 50);

        System.out.println("\nDespués de mover:");
        System.out.println(destructor);
        System.out.println(caza);
    }
}