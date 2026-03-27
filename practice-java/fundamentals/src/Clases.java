public class Clases {
    public static void main(String[] args) {

        // ===== CREAR INSTANCIAS DE CLASES =====

        System.out.println("===== CREAR INSTANCIAS DE CLASES =====");

        // crear una instancia (objeto) de la clase Persona
        Persona persona1 = new Persona("Juan", 28);
        Persona persona2 = new Persona("María", 25);

        System.out.println("Persona 1: " + persona1.obtenerNombre() + ", " + persona1.obtenerEdad() + " años");
        System.out.println("Persona 2: " + persona2.obtenerNombre() + ", " + persona2.obtenerEdad() + " años");

        // ===== MODIFICAR ATRIBUTOS CON SETTERS =====

        System.out.println("\n===== MODIFICAR ATRIBUTOS CON SETTERS =====");

        persona1.establecerEdad(29);
        System.out.println("Edad actualizada de " + persona1.obtenerNombre() + ": " + persona1.obtenerEdad());

        // ===== MÉTODOS DE LA CLASE =====

        System.out.println("\n===== MÉTODOS DE LA CLASE =====");

        persona1.presentarse();
        persona2.presentarse();

        // ===== COMPARAR OBJETOS =====

        System.out.println("\n===== COMPARAR OBJETOS =====");

        Persona persona3 = new Persona("Juan", 28);
        System.out.println("¿persona1 y persona3 son iguales? " + persona1.sonIguales(persona3));

        // ===== CLASE CUENTA BANCARIA =====

        System.out.println("\n===== CLASE CUENTA BANCARIA =====");

        CuentaBancaria cuenta1 = new CuentaBancaria("Juan Pérez", 1000.0);
        CuentaBancaria cuenta2 = new CuentaBancaria("María García", 500.0);

        System.out.println("Titular: " + cuenta1.obtenerTitular() + ", Saldo: $" + cuenta1.obtenerSaldo());
        System.out.println("Titular: " + cuenta2.obtenerTitular() + ", Saldo: $" + cuenta2.obtenerSaldo());

        // realizar operaciones
        cuenta1.depositar(200);
        System.out.println("Después de depositar $200: $" + cuenta1.obtenerSaldo());

        cuenta1.retirar(150);
        System.out.println("Después de retirar $150: $" + cuenta1.obtenerSaldo());

        // intentar retirar más de lo disponible
        cuenta2.retirar(1000);

    }
}

// ===== DEFINICIÓN DE CLASE PERSONA =====

class Persona {
    // atributos (campos privados)
    private String nombre;
    private int edad;

    // constructor: se ejecuta al crear una instancia de la clase
    public Persona(String nombre, int edad) {
        this.nombre = nombre; // this se refiere al atributo de la instancia
        this.edad = edad;
    }

    // método getter: obtener el valor de un atributo
    public String obtenerNombre() {
        return this.nombre;
    }

    // método getter: obtener la edad
    public int obtenerEdad() {
        return this.edad;
    }

    // método setter: establecer la edad
    public void establecerEdad(int nuevaEdad) {
        if (nuevaEdad > 0) {
            this.edad = nuevaEdad;
        } else {
            System.out.println("Error: la edad no puede ser negativa");
        }
    }

    // método que imprime información de la persona
    public void presentarse() {
        System.out.println("Hola, me llamo " + this.nombre + " y tengo " + this.edad + " años");
    }

    // método que compara dos personas
    public boolean sonIguales(Persona otra) {
        return this.nombre.equals(otra.nombre) && this.edad == otra.edad;
    }
}

// ===== DEFINICIÓN DE CLASE CUENTA BANCARIA =====

class CuentaBancaria {
    // atributos privados
    private String titular;
    private double saldo;

    // constructor
    public CuentaBancaria(String titular, double saldoInicial) {
        this.titular = titular;
        this.saldo = saldoInicial;
        System.out.println("Cuenta creada para: " + this.titular);
    }

    // getter del titular
    public String obtenerTitular() {
        return this.titular;
    }

    // getter del saldo
    public double obtenerSaldo() {
        return this.saldo;
    }

    // método depositar: añade dinero a la cuenta
    public void depositar(double cantidad) {
        if (cantidad > 0) {
            this.saldo += cantidad;
            System.out.println("Se depositó $" + cantidad);
        } else {
            System.out.println("Error: la cantidad debe ser positiva");
        }
    }

    // método retirar: saca dinero de la cuenta
    public void retirar(double cantidad) {
        if (cantidad > 0 && cantidad <= this.saldo) {
            this.saldo -= cantidad;
            System.out.println("Se retiró $" + cantidad);
        } else if (cantidad > this.saldo) {
            System.out.println("Error: saldo insuficiente. Saldo actual: $" + this.saldo);
        } else {
            System.out.println("Error: la cantidad debe ser positiva");
        }
    }

    // método que imprime el estado de la cuenta
    public void mostrarEstado() {
        System.out.println("Titular: " + this.titular);
        System.out.println("Saldo: $" + this.saldo);
    }
}
