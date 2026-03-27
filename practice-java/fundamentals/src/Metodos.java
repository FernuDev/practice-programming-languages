public class Metodos {
    public static void main(String[] args) {

        // ===== MÉTODOS SIN RETORNO (VOID) =====

        System.out.println("===== MÉTODOS SIN RETORNO (VOID) =====");

        saludar(); // llamada al método sin parámetros

        String nombre = "Carlos";
        saludarPersona(nombre); // llamada al método con parámetro

        // ===== MÉTODOS CON RETORNO =====

        System.out.println("\n===== MÉTODOS CON RETORNO =====");

        int resultadoSuma = sumarDosNumeros(10, 20);
        System.out.println("10 + 20 = " + resultadoSuma);

        double resultadoDivision = dividirDosNumeros(100, 4);
        System.out.println("100 / 4 = " + resultadoDivision);

        // ===== PARÁMETROS Y ARGUMENTOS =====

        System.out.println("\n===== PARÁMETROS Y ARGUMENTOS =====");

        // parámetros: variables declaradas en la definición del método
        // argumentos: valores pasados al llamar el método

        String mensaje = crearMensaje("Juan", 25);
        System.out.println(mensaje);

        // ===== SOBRECARGA DE MÉTODOS (OVERLOADING) =====

        System.out.println("\n===== SOBRECARGA DE MÉTODOS (OVERLOADING) =====");

        // múltiples métodos con el mismo nombre pero diferente cantidad/tipo de parámetros

        System.out.println("Suma de 2 números: " + sumar(5, 10));
        System.out.println("Suma de 3 números: " + sumar(5, 10, 15));
        System.out.println("Suma de números decimales: " + sumar(5.5, 10.5));

        // ===== MÉTODOS QUE RETORNAN BOOLEAN =====

        System.out.println("\n===== MÉTODOS QUE RETORNAN BOOLEAN =====");

        int edad = 20;
        if (esMayorDeEdad(edad)) {
            System.out.println(edad + " años: es mayor de edad");
        } else {
            System.out.println(edad + " años: es menor de edad");
        }

        // ===== RECURSIVIDAD =====

        System.out.println("\n===== RECURSIVIDAD =====");

        // recursividad: un método que se llama a sí mismo
        // necesita un caso base (condición de parada) y un caso recursivo

        System.out.println("Factorial de 5: " + calcularFactorial(5));
        System.out.println("Factorial de 6: " + calcularFactorial(6));

        // ===== MÉTODO PRIVADO =====

        System.out.println("\n===== MÉTODO PRIVADO =====");

        // Los métodos privados no pueden ser llamados desde fuera de la clase
        // El método dePrimo está oculto y es solo para uso interno
        System.out.println("¿3 es primo? " + verificarSiEsPrimo(3));
        System.out.println("¿10 es primo? " + verificarSiEsPrimo(10));

    }

    // ===== DEFINICIÓN DE MÉTODOS =====

    // método sin parámetros ni retorno
    public static void saludar() {
        System.out.println("Hola a todos");
    }

    // método con parámetro y sin retorno
    public static void saludarPersona(String persona) {
        System.out.println("Hola " + persona);
    }

    // método con parámetros y retorno de int
    public static int sumarDosNumeros(int a, int b) {
        return a + b;
    }

    // método con parámetros y retorno de double
    public static double dividirDosNumeros(double a, double b) {
        if (b == 0) {
            System.out.println("Error: no se puede dividir entre 0");
            return 0;
        }
        return a / b;
    }

    // método que retorna String
    public static String crearMensaje(String nombre, int edad) {
        return "Hola, me llamo " + nombre + " y tengo " + edad + " años";
    }

    // ===== SOBRECARGA DE MÉTODOS: MISMO NOMBRE, DIFERENTES PARÁMETROS =====

    // versión 1: suma de 2 números
    public static int sumar(int a, int b) {
        return a + b;
    }

    // versión 2: suma de 3 números
    public static int sumar(int a, int b, int c) {
        return a + b + c;
    }

    // versión 3: suma de decimales
    public static double sumar(double a, double b) {
        return a + b;
    }

    // ===== MÉTODO QUE RETORNA BOOLEAN =====

    public static boolean esMayorDeEdad(int edad) {
        return edad >= 18;
    }

    // ===== RECURSIVIDAD: MÉTODO QUE SE LLAMA A SÍ MISMO =====

    // factorial: 5! = 5 * 4 * 3 * 2 * 1 = 120
    public static int calcularFactorial(int n) {
        // caso base: condición de parada para evitar recursión infinita
        if (n <= 1) {
            return 1;
        }
        // caso recursivo: el método se llama a sí mismo con un parámetro más pequeño
        return n * calcularFactorial(n - 1);
    }

    // ===== MÉTODO PRIVADO =====

    // método público que usa un método privado internamente
    public static boolean verificarSiEsPrimo(int numero) {
        if (numero < 2) {
            return false;
        }
        return dePrimo(numero);
    }

    // método privado: solo accesible desde dentro de esta clase
    private static boolean dePrimo(int numero) {
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                return false; // encontró divisor, no es primo
            }
        }
        return true; // no encontró divisores, es primo
    }

}
