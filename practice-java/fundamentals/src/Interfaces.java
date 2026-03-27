public class Interfaces {
    public static void main(String[] args) {

        // ===== INTERFACES =====

        System.out.println("===== INTERFACES Y CLASES ABSTRACTAS =====\n");

        // crear instancias de diferentes tipos de vehículos
        Coche coche = new Coche("Toyota", 200);
        Bicicleta bicicleta = new Bicicleta("Trek", 4);
        Moto moto = new Moto("Harley", 150);

        // aunque son diferentes tipos, todos implementan Vehiculo
        manejarVehiculos(coche, bicicleta, moto);

        System.out.println("\n===== CLASES ABSTRACTAS =====\n");

        // crear instancias de figuras geométricas
        Circulo circulo = new Circulo(5);
        Rectangulo rectangulo = new Rectangulo(4, 6);
        Triangulo triangulo = new Triangulo(3, 4);

        mostrarAreas(circulo, rectangulo, triangulo);

    }

    // método que recibe interfaces de tipo Vehiculo
    public static void manejarVehiculos(Vehiculo... vehiculos) {
        System.out.println("Operaciones con vehículos:");
        for (Vehiculo v : vehiculos) {
            v.arrancar();
            v.acelerar();
            v.frenar();
            System.out.println();
        }
    }

    // método que recibe clases abstractas de tipo Figura
    public static void mostrarAreas(Figura... figuras) {
        System.out.println("Áreas de figuras geométricas:");
        for (Figura f : figuras) {
            System.out.println(f.obtenerNombre() + ": " + f.calcularArea() + " unidades cuadradas");
        }
    }

}

// ===== INTERFACE =====

// una interface define un contrato que las clases deben cumplir
interface Vehiculo {
    // métodos abstractos (sin implementación)
    void arrancar();
    void acelerar();
    void frenar();
    void obtenerVelocidadMaxima();
}

// ===== CLASE QUE IMPLEMENTA INTERFACE: COCHE =====

class Coche implements Vehiculo {
    private String marca;
    private int velocidadMaxima;

    public Coche(String marca, int velocidadMaxima) {
        this.marca = marca;
        this.velocidadMaxima = velocidadMaxima;
    }

    @Override
    public void arrancar() {
        System.out.println(this.marca + " (coche): El motor arranca");
    }

    @Override
    public void acelerar() {
        System.out.println(this.marca + " (coche): Acelerando a " + this.velocidadMaxima + " km/h");
    }

    @Override
    public void frenar() {
        System.out.println(this.marca + " (coche): Frenando suavemente");
    }

    @Override
    public void obtenerVelocidadMaxima() {
        System.out.println("Velocidad máxima: " + this.velocidadMaxima + " km/h");
    }
}

// ===== CLASE QUE IMPLEMENTA INTERFACE: BICICLETA =====

class Bicicleta implements Vehiculo {
    private String marca;
    private int velocidades;

    public Bicicleta(String marca, int velocidades) {
        this.marca = marca;
        this.velocidades = velocidades;
    }

    @Override
    public void arrancar() {
        System.out.println(this.marca + " (bicicleta): Empezar a pedalear");
    }

    @Override
    public void acelerar() {
        System.out.println(this.marca + " (bicicleta): Pedaleando en " + this.velocidades + " velocidades");
    }

    @Override
    public void frenar() {
        System.out.println(this.marca + " (bicicleta): Frenando con los frenos");
    }

    @Override
    public void obtenerVelocidadMaxima() {
        System.out.println("Velocidad máxima: 40 km/h aproximadamente");
    }
}

// ===== CLASE QUE IMPLEMENTA INTERFACE: MOTO =====

class Moto implements Vehiculo {
    private String marca;
    private int velocidadMaxima;

    public Moto(String marca, int velocidadMaxima) {
        this.marca = marca;
        this.velocidadMaxima = velocidadMaxima;
    }

    @Override
    public void arrancar() {
        System.out.println(this.marca + " (moto): El motor arranca ruidosamente");
    }

    @Override
    public void acelerar() {
        System.out.println(this.marca + " (moto): Acelerando a " + this.velocidadMaxima + " km/h");
    }

    @Override
    public void frenar() {
        System.out.println(this.marca + " (moto): Frenando con frenos potentes");
    }

    @Override
    public void obtenerVelocidadMaxima() {
        System.out.println("Velocidad máxima: " + this.velocidadMaxima + " km/h");
    }
}

// ===== CLASE ABSTRACTA =====

// una clase abstracta es una clase que no puede instanciarse directamente
// define métodos que las subclases deben implementar
abstract class Figura {
    protected String nombre;

    public Figura(String nombre) {
        this.nombre = nombre;
    }

    // método abstracto: debe ser implementado por las subclases
    abstract double calcularArea();

    // método concreto: todas las figuras lo heredan
    public String obtenerNombre() {
        return this.nombre;
    }

    // método para mostrar información
    public void mostrarInfo() {
        System.out.println("Figura: " + this.nombre);
    }
}

// ===== SUBCLASE DE FIGURA ABSTRACTA: CIRCULO =====

class Circulo extends Figura {
    private double radio;

    public Circulo(double radio) {
        super("Círculo");
        this.radio = radio;
    }

    @Override
    double calcularArea() {
        // área del círculo: π * r²
        return Math.PI * this.radio * this.radio;
    }
}

// ===== SUBCLASE DE FIGURA ABSTRACTA: RECTANGULO =====

class Rectangulo extends Figura {
    private double base;
    private double altura;

    public Rectangulo(double base, double altura) {
        super("Rectángulo");
        this.base = base;
        this.altura = altura;
    }

    @Override
    double calcularArea() {
        // área del rectángulo: base * altura
        return this.base * this.altura;
    }
}

// ===== SUBCLASE DE FIGURA ABSTRACTA: TRIANGULO =====

class Triangulo extends Figura {
    private double base;
    private double altura;

    public Triangulo(double base, double altura) {
        super("Triángulo");
        this.base = base;
        this.altura = altura;
    }

    @Override
    double calcularArea() {
        // área del triángulo: (base * altura) / 2
        return (this.base * this.altura) / 2;
    }
}
