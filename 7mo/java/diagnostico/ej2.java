// Clase Clinica
import java.util.ArrayList;
import java.util.List;

// Clase Domicilio
class Domicilio {
    private String calle;
    private int numero;
 
    public Domicilio(String calle, int numero) {
        this.calle = calle;
        this.numero = numero;
    }
 
    public String getCalle() {
        return calle;
    }
 
    public int getNumero() {
        return numero;
    }
 }
 
 // Clase Contrato
 class Contrato {
    private String nombre;
    private double sueldoMensual;
 
    public Contrato(String nombre, double sueldoMensual) {
        this.nombre = nombre;
        this.sueldoMensual = sueldoMensual;
    }
 
    public String getNombre() {
        return nombre;
    }
 
    public double getSueldoMensual() {
        return sueldoMensual;
    }
 }
 
 // Clase Empleado
 abstract class Empleado {
    protected String nombre;
    protected String documento;
    protected Domicilio domicilio;
 
    public Empleado(String nombre, String documento, Domicilio domicilio) {
        this.nombre = nombre;
        this.documento = documento;
        this.domicilio = domicilio;
    }
 
    public abstract double calcularSueldo();
 
    public String getNombre() {
        return nombre;
    }
 }
 
 // Clase Medico
 class Medico extends Empleado {
    private int matricula;
    private Contrato contrato;
 
    public Medico(String nombre, String documento, Domicilio domicilio, int matricula, Contrato contrato) {
        super(nombre, documento, domicilio);
        this.matricula = matricula;
        this.contrato = contrato;
    }
 
    public int getMatricula() {
        return matricula;
    }
 
    public Contrato getContrato() {
        return contrato;
    }
 
    public void cambiarContrato(Contrato nuevoContrato) {
        this.contrato = nuevoContrato;
    }
 
    @Override
    public double calcularSueldo() {
        return contrato.getSueldoMensual();
    }
 }
 
 // Clase Enfermero
 class Enfermero extends Empleado {
    private static double sueldoBasico = 30000;
    private int aniosAntiguedad;
 
    public Enfermero(String nombre, String documento, Domicilio domicilio, int aniosAntiguedad) {
        super(nombre, documento, domicilio);
        this.aniosAntiguedad = aniosAntiguedad;
    }
 
    public static void actualizarSueldoBasico(double nuevoSueldoBasico) {
        sueldoBasico = nuevoSueldoBasico;
    }
 
    @Override
    public double calcularSueldo() {
        double extra = sueldoBasico * 0.05 * aniosAntiguedad;
        return sueldoBasico + extra;
    }
 }

 
 class Clinica {
    private List<Empleado> empleados;
 
    public Clinica() {
        empleados = new ArrayList<>();
    }
 
    public void agregarEmpleado(Empleado empleado) {
        empleados.add(empleado);
    }
 
    public void removerEmpleado(Empleado empleado) {
        empleados.remove(empleado);
    }
 
    public void reporteSueldos() {
        System.out.println("Reporte de sueldos:");
        for (Empleado empleado : empleados) {
            System.out.println(empleado.getNombre() + ": $" + empleado.calcularSueldo());
        }
    }
 }
 
 // Clase Prueba
 class Prueba {
    public static void main(String[] args) {
        Clinica clinica = new Clinica();
 
        // Crear contratos
        Contrato contratoA = new Contrato("Contrato A", 50000);
        Contrato contratoB = new Contrato("Contrato B", 60000);
 
        // Crear médicos
        Domicilio domicilioMedico1 = new Domicilio("Calle 1", 123);
        Medico medico1 = new Medico("Médico 1", "1234567", domicilioMedico1, 12345, contratoA);
        clinica.agregarEmpleado(medico1);
 
        Domicilio domicilioMedico2 = new Domicilio("Calle 2", 456);
        Medico medico2 = new Medico("Médico 2", "7890123", domicilioMedico2, 67890, contratoB);
        clinica.agregarEmpleado(medico2);
 
        // Cambiar contrato del medico1
        medico1.cambiarContrato(contratoB);
 
        // Crear enfermeros
        Domicilio domicilioEnfermero1 = new Domicilio("Calle 3", 789);
        Enfermero enfermero1 = new Enfermero("Enfermero 1", "4567890", domicilioEnfermero1, 3);
        clinica.agregarEmpleado(enfermero1);
 
        Domicilio domicilioEnfermero2 = new Domicilio("Calle 4", 321);
        Enfermero enfermero2 = new Enfermero("Enfermero 2", "9012345", domicilioEnfermero2, 5);
        clinica.agregarEmpleado(enfermero2);
 
        // Actualizar sueldo básico de enfermeros
        Enfermero.actualizarSueldoBasico(35000);
 
        // Reporte de sueldos
        clinica.reporteSueldos();
    }
 }