import java.util.ArrayList;
import java.util.List;

// Clase Libro
class Libro {
    private String titulo;
    private String autor;
    private String editorial;
    private int anio;

    public Libro(String titulo) {
        this.titulo = titulo;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getAutor() {
        return autor;
    }

    public void setEditorial(String editorial) {
        this.editorial = editorial;
    }

    public String getEditorial() {
        return editorial;
    }

    public void setAnio(int anio) {
        this.anio = anio;
    }

    public int getAnio() {
        return anio;
    }

    @Override
    public String toString() {
        return "Libro [titulo=" + titulo + ", autor=" + autor + ", editorial=" + editorial + ", anio=" + anio + "]";
    }
}

// Clase Socio

class Socio {
    private String nombre;
    private int numeroSocio;
    private List<Libro> librosRetirados;

    public Socio(String nombre, int numeroSocio) {
        this.nombre = nombre;
        this.numeroSocio = numeroSocio;
        librosRetirados = new ArrayList<>();
    }

    public String getNombre() {
        return nombre;
    }

    public int getNumeroSocio() {
        return numeroSocio;
    }

    public void retirarLibro(Libro libro) {
        librosRetirados.add(libro);
    }

    public void devolverLibro(Libro libro) {
        librosRetirados.remove(libro);
    }

    public List<Libro> getLibrosRetirados() {
        return librosRetirados;
    }
}


class Biblioteca {
    private String nombre;
    private String direccion;
    private List<Libro> libros;
    private List<Socio> socios;

    public Biblioteca(String nombre, String direccion) {
        this.nombre = nombre;
        this.direccion = direccion;
        libros = new ArrayList<>();
        socios = new ArrayList<>();
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public void agregarLibro(Libro libro) {
        libros.add(libro);
    }

    public void borrarLibro(Libro libro) {
        libros.remove(libro);
    }

    public void agregarSocio(Socio socio) {
        socios.add(socio);
    }

    public void borrarSocio(Socio socio) {
        socios.remove(socio);
    }

    public void prestarLibro(Socio socio, Libro libro) {
        if (libros.contains(libro)) {
            socio.retirarLibro(libro);
            libros.remove(libro);
        } else {
            System.out.println("El libro no está disponible.");
        }
    }

    public void recibirLibro(Socio socio, Libro libro) {
        if (socio.getLibrosRetirados().contains(libro)) {
            socio.devolverLibro(libro);
            libros.add(libro);
        } else {
            System.out.println("El socio no tiene ese libro retirado.");
        }
    }

    public List<Libro> getLibrosExistentes() {
        return libros;
    }

    public List<Libro> getLibrosPrestados() {
        List<Libro> librosPrestados = new ArrayList<>();
        for (Socio socio : socios) {
            librosPrestados.addAll(socio.getLibrosRetirados());
        }
        return librosPrestados;
    }
}

// Clase Prueba
class Prueba {
    public static void main(String[] args) {
        Biblioteca biblioteca = new Biblioteca("Biblioteca Municipal", "Calle Principal 123");

        Libro libro1 = new Libro("Libro 1");
        libro1.setAutor("Autor 1");
        libro1.setEditorial("Editorial 1");
        libro1.setAnio(2020);

        Libro libro2 = new Libro("Libro 2");
        libro2.setAutor("Autor 2");
        libro2.setEditorial("Editorial 2");
        libro2.setAnio(2021);

        biblioteca.agregarLibro(libro1);
        biblioteca.agregarLibro(libro2);

        Socio socio1 = new Socio("Socio 1", 1);
        Socio socio2 = new Socio("Socio 2", 2);

        biblioteca.agregarSocio(socio1);
        biblioteca.agregarSocio(socio2);

        biblioteca.prestarLibro(socio1, libro1);
        biblioteca.prestarLibro(socio2, libro2);

        System.out.println("Libros existentes: " + biblioteca.getLibrosExistentes());
        System.out.println("Libros prestados: " + biblioteca.getLibrosPrestados());

        biblioteca.recibirLibro(socio1, libro1);

        System.out.println("Libros existentes: " + biblioteca.getLibrosExistentes());
        System.out.println("Libros prestados: " + biblioteca.getLibrosPrestados());
    }
}