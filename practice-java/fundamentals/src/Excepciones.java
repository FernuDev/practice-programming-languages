public class Excepciones {
    public static void main(String[] args) {

        // ===== TRY / CATCH / FINALLY =====

        System.out.println("===== TRY / CATCH / FINALLY =====\n");

        // ejemplo 1: división entre cero
        System.out.println("Ejemplo 1: División entre cero");
        try {
            int resultado = dividir(10, 0);
            System.out.println("Resultado: " + resultado);
        } catch (ArithmeticException e) {
            System.out.println("Error capturado: " + e.getMessage());
        } finally {
            System.out.println("Bloque finally: siempre se ejecuta\n");
        }

        // ejemplo 2: acceso a índice inválido
        System.out.println("Ejemplo 2: Acceso a índice inválido");
        try {
            int[] numeros = {10, 20, 30};
            System.out.println("Elemento en índice 5: " + numeros[5]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error capturado: índice fuera de rango");
        } finally {
            System.out.println("Bloque finally: se ejecuta sin importar el error\n");
        }

        // ejemplo 3: conversión de tipos inválida
        System.out.println("Ejemplo 3: Conversión inválida de String a número");
        try {
            String texto = "abc";
            int numero = Integer.parseInt(texto);
            System.out.println("Número: " + numero);
        } catch (NumberFormatException e) {
            System.out.println("Error capturado: no se puede convertir \"abc\" a número");
        } finally {
            System.out.println("Bloque finally\n");
        }

        // ===== MÚLTIPLES CATCH =====

        System.out.println("===== MÚLTIPLES CATCH BLOCKS =====\n");

        try {
            operacionCompleja();
        } catch (ArithmeticException e) {
            System.out.println("Error aritmético: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Error de formato numérico: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Excepción general: " + e.getMessage());
        }

        System.out.println();

        // ===== THROW: LANZAR EXCEPCIONES MANUALMENTE =====

        System.out.println("===== THROW: LANZAR EXCEPCIONES MANUALMENTE =====\n");

        try {
            crearCuenta("Juan", -500); // intenta crear cuenta con saldo negativo
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            crearCuenta("María", 1000); // crea cuenta correctamente
            System.out.println("Cuenta creada exitosamente");
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }

        System.out.println();

        // ===== THROWS: DECLARAR QUE UN MÉTODO LANZA EXCEPCIONES =====

        System.out.println("===== THROWS: DECLARAR EXCEPCIONES =====\n");

        try {
            leerArchivoSimulado("documento.txt");
        } catch (Exception e) {
            System.out.println("Excepción capturada en main: " + e.getMessage());
        }

        System.out.println();

        // ===== EXCEPCIÓN PERSONALIZADA =====

        System.out.println("===== EXCEPCIÓN PERSONALIZADA =====\n");

        try {
            procesarEdad(15);
        } catch (EdadInvalidaException e) {
            System.out.println("Error personalizado: " + e.getMessage());
        }

        try {
            procesarEdad(25);
            System.out.println("La edad es válida");
        } catch (EdadInvalidaException e) {
            System.out.println("Error: " + e.getMessage());
        }

    }

    // método que lanza una excepción aritmética
    public static int dividir(int a, int b) {
        if (b == 0) {
            throw new ArithmeticException("No se puede dividir entre cero");
        }
        return a / b;
    }

    // método que puede lanzar múltiples excepciones
    public static void operacionCompleja() {
        // esta operación intenta dividir entre cero
        int resultado = 10 / 0; // lanza ArithmeticException
    }

    // método que valida y lanza excepción personalizada
    public static void crearCuenta(String titular, double saldoInicial) {
        if (saldoInicial < 0) {
            throw new IllegalArgumentException("El saldo inicial no puede ser negativo");
        }
        System.out.println("Cuenta para " + titular + " creada con saldo $" + saldoInicial);
    }

    // método que declara con throws que puede lanzar excepciones
    public static void leerArchivoSimulado(String nombreArchivo) throws Exception {
        if (!nombreArchivo.endsWith(".txt")) {
            throw new Exception("El archivo debe tener extensión .txt");
        }
        System.out.println("Archivo " + nombreArchivo + " leído correctamente");
    }

    // método que lanza excepción personalizada
    public static void procesarEdad(int edad) throws EdadInvalidaException {
        if (edad < 18) {
            throw new EdadInvalidaException("La edad debe ser mayor a 18 años. Edad ingresada: " + edad);
        }
        System.out.println("Procesando usuario de " + edad + " años");
    }

}

// ===== EXCEPCIÓN PERSONALIZADA =====

// crear una excepción personalizada extendiendo Exception
class EdadInvalidaException extends Exception {
    // constructor con mensaje
    public EdadInvalidaException(String mensaje) {
        super(mensaje);
    }
}
