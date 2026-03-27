public class Bucles {
    public static void main(String[] args) {

        // ===== FOR CLÁSICO =====

        System.out.println("===== FOR CLÁSICO =====");

        // estructura: for (inicialización; condición; incremento)
        for (int i = 1; i <= 5; i++) {
            System.out.println("Iteración " + i);
        }

        System.out.println("\nTabla de multiplicar del 3:");
        for (int i = 1; i <= 10; i++) {
            System.out.println("3 * " + i + " = " + (3 * i));
        }

        // ===== FOR CON DECREMENTO =====

        System.out.println("\n===== FOR CON DECREMENTO =====");

        for (int i = 5; i >= 1; i--) {
            System.out.println("Cuenta atrás: " + i);
        }

        // ===== WHILE =====

        System.out.println("\n===== WHILE =====");

        // estructura: while (condición) { ... }
        // se evalúa la condición primero, luego ejecuta el cuerpo
        int contador = 1;
        System.out.println("Números del 1 al 5 con while:");
        while (contador <= 5) {
            System.out.println(contador);
            contador++;
        }

        // ===== DO-WHILE =====

        System.out.println("\n===== DO-WHILE =====");

        // estructura: do { ... } while (condición)
        // ejecuta el cuerpo primero, luego evalúa la condición
        // garantiza al menos una ejecución
        int contadorDo = 1;
        System.out.println("Números del 1 al 5 con do-while:");
        do {
            System.out.println(contadorDo);
            contadorDo++;
        } while (contadorDo <= 5);

        // ===== FOR-EACH (ENHANCED FOR) =====

        System.out.println("\n===== FOR-EACH (ENHANCED FOR) =====");

        // estructura: for (tipo variable : colección) { ... }
        // útil para recorrer arrays y colecciones sin índice
        int[] numeros = {10, 20, 30, 40, 50};
        System.out.println("Recorrido de array con for-each:");
        for (int numero : numeros) {
            System.out.println("Elemento: " + numero);
        }

        // ===== BREAK: SALIR DEL BUCLE =====

        System.out.println("\n===== BREAK: SALIR DEL BUCLE =====");

        System.out.println("Conteo hasta encontrar 5:");
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
            if (i == 5) {
                System.out.println("¡Encontrado el 5! Saliendo del bucle.");
                break; // sale del bucle inmediatamente
            }
        }

        // ===== CONTINUE: SALTAR A LA SIGUIENTE ITERACIÓN =====

        System.out.println("\n===== CONTINUE: SALTAR ITERACIÓN =====");

        System.out.println("Números impares del 1 al 10:");
        for (int i = 1; i <= 10; i++) {
            if (i % 2 == 0) {
                continue; // salta el resto del código en esta iteración
            }
            System.out.println(i);
        }

        // ===== BUCLES ANIDADOS =====

        System.out.println("\n===== BUCLES ANIDADOS =====");

        System.out.println("Tabla de multiplicar (2x2 a 5x5):");
        for (int i = 2; i <= 5; i++) {
            System.out.println("\nTabla del " + i + ":");
            for (int j = 1; j <= 5; j++) {
                System.out.println("  " + i + " * " + j + " = " + (i * j));
            }
        }

        // ===== SUMA ACUMULATIVA CON BUCLE =====

        System.out.println("\n===== SUMA ACUMULATIVA CON BUCLE =====");

        int suma = 0;
        int n = 5;
        for (int i = 1; i <= n; i++) {
            suma += i; // suma acumulativa: suma = suma + i
            System.out.println("Iteración " + i + ", suma acumulada: " + suma);
        }
        System.out.println("Suma total de 1 a " + n + ": " + suma);

        // ===== BÚSQUEDA EN ARRAY CON BREAK =====

        System.out.println("\n===== BÚSQUEDA EN ARRAY =====");

        int[] valores = {100, 200, 300, 400, 500};
        int buscar = 300;
        boolean encontrado = false;

        for (int valor : valores) {
            if (valor == buscar) {
                System.out.println("¡Encontrado " + buscar + " en el array!");
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            System.out.println("El valor " + buscar + " no está en el array");
        }

        // ===== PRODUCTO ACUMULATIVO CON BUCLE =====

        System.out.println("\n===== PRODUCTO ACUMULATIVO =====");

        int producto = 1;
        for (int i = 1; i <= 4; i++) {
            producto *= i; // factorial: 1 * 2 * 3 * 4
        }
        System.out.println("Factorial de 4: " + producto);

    }
}
