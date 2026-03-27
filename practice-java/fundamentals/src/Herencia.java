public class Herencia {
    public static void main(String[] args) {

        // ===== CREAR INSTANCIAS DE CLASES CON HERENCIA =====

        System.out.println("===== HERENCIA Y POLIMORFISMO =====");

        Animal animal = new Animal("Genérico");
        animal.hacerSonido();
        animal.descripcion();

        System.out.println();

        // crear instancia de Perro (hereda de Animal)
        Perro perro = new Perro("Rocky", "Labrador");
        perro.hacerSonido();
        perro.descripcion();
        perro.traerObjeto();

        System.out.println();

        // crear instancia de Gato (hereda de Animal)
        Gato gato = new Gato("Miau", "Persa");
        gato.hacerSonido();
        gato.descripcion();
        gato.rasgunar();

        System.out.println();

        // crear instancia de Pajaro (hereda de Animal)
        Pajaro pajaro = new Pajaro("Tweety", "Canario");
        pajaro.hacerSonido();
        pajaro.descripcion();
        pajaro.volar();

        // ===== POLIMORFISMO: TRATAR OBJETOS COMO SU CLASE PADRE =====

        System.out.println("\n===== POLIMORFISMO =====");

        Animal[] animales = {
            new Perro("Bobby", "Pastor Alemán"),
            new Gato("Whiskers", "Siamés"),
            new Pajaro("Lolo", "Loro"),
            new Animal("Animal genérico")
        };

        System.out.println("Polimorfismo: llamar hacerSonido() en cada animal:");
        for (Animal a : animales) {
            a.hacerSonido();
        }

    }
}

// ===== CLASE PADRE (SUPERCLASE) =====

class Animal {
    // atributos
    protected String nombre; // protected permite acceso en subclases

    // constructor
    public Animal(String nombre) {
        this.nombre = nombre;
    }

    // método que puede ser sobrescrito (@Override)
    public void hacerSonido() {
        System.out.println(this.nombre + " hace un sonido genérico");
    }

    // método que muestra información
    public void descripcion() {
        System.out.println("Soy un animal llamado " + this.nombre);
    }
}

// ===== CLASE HIJA: PERRO =====

class Perro extends Animal {
    private String raza;

    // constructor del Perro
    public Perro(String nombre, String raza) {
        super(nombre); // llamar al constructor de la clase padre
        this.raza = raza;
    }

    // @Override: indica que este método reemplaza el método de la clase padre
    @Override
    public void hacerSonido() {
        System.out.println(this.nombre + " ladra: ¡Guau guau!");
    }

    // método específico de Perro
    public void traerObjeto() {
        System.out.println(this.nombre + " va a traer el objeto");
    }

    // sobrescribir el método descripcion
    @Override
    public void descripcion() {
        System.out.println("Soy un perro de raza " + this.raza + " llamado " + this.nombre);
    }
}

// ===== CLASE HIJA: GATO =====

class Gato extends Animal {
    private String raza;

    // constructor del Gato
    public Gato(String nombre, String raza) {
        super(nombre);
        this.raza = raza;
    }

    // @Override: sobrescribir el método hacerSonido
    @Override
    public void hacerSonido() {
        System.out.println(this.nombre + " maúlla: ¡Miau miau!");
    }

    // método específico de Gato
    public void rasgunar() {
        System.out.println(this.nombre + " está raspando con sus garras");
    }

    // sobrescribir el método descripcion
    @Override
    public void descripcion() {
        System.out.println("Soy un gato de raza " + this.raza + " llamado " + this.nombre);
    }
}

// ===== CLASE HIJA: PAJARO =====

class Pajaro extends Animal {
    private String especie;

    // constructor del Pajaro
    public Pajaro(String nombre, String especie) {
        super(nombre);
        this.especie = especie;
    }

    // @Override: sobrescribir el método hacerSonido
    @Override
    public void hacerSonido() {
        System.out.println(this.nombre + " canta: ¡Pío pío!");
    }

    // método específico de Pajaro
    public void volar() {
        System.out.println(this.nombre + " está volando por el cielo");
    }

    // sobrescribir el método descripcion
    @Override
    public void descripcion() {
        System.out.println("Soy un " + this.especie + " llamado " + this.nombre);
    }
}
