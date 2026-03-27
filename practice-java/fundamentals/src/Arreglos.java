public class Arreglos {
    public static void main(String[] args) {

        // ===== DECLARACIÓN E INICIALIZACIÓN DE ARRAYS =====

        System.out.println("===== DECLARACIÓN E INICIALIZACIÓN =====");

        // forma 1: declarar con tamaño fijo, elementos iniciados a 0
        int[] numeros = new int[5];
        System.out.println("Array de 5 enteros: " + java.util.Arrays.toString(numeros));

        // forma 2: declarar e inicializar con valores específicos
        String[] colores = {"Rojo", "Verde", "Azul", "Amarillo"};
        System.out.println("Array de colores: " + java.util.Arrays.toString(colores));

        // forma 3: declarar con valores y el compilador deduce el tamaño
        int[] pares = {2, 4, 6, 8, 10};
        System.out.println("Array de pares: " + java.util.Arrays.toString(pares));

        // ===== ACCESO A ELEMENTOS POR ÍNDICE =====

        System.out.println("\n===== ACCESO POR ÍNDICE =====");

        // los índices comienzan en 0
        String[] diasSemana = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};

        System.out.println("Primer día (índice 0): " + diasSemana[0]);
        System.out.println("Tercer día (índice 2): " + diasSemana[2]);
        System.out.println("Último día (índice 6): " + diasSemana[6]);
        System.out.println("Total de días: " + diasSemana.length);

        // modificar un elemento
        diasSemana[0] = "Lunes (modificado)";
        System.out.println("Primer día después de modificar: " + diasSemana[0]);

        // ===== RECORRIDO CON FOR CLÁSICO =====

        System.out.println("\n===== RECORRIDO CON FOR CLÁSICO =====");

        int[] calificaciones = {85, 92, 78, 88, 95};
        System.out.println("Calificaciones:");
        for (int i = 0; i < calificaciones.length; i++) {
            System.out.println("  Posición " + i + ": " + calificaciones[i]);
        }

        // ===== RECORRIDO CON FOR-EACH =====

        System.out.println("\n===== RECORRIDO CON FOR-EACH =====");

        String[] estudiantes = {"Ana", "Bruno", "Carlos", "Diana"};
        System.out.println("Lista de estudiantes:");
        for (String estudiante : estudiantes) {
            System.out.println("  - " + estudiante);
        }

        // ===== BÚSQUEDA EN ARRAY =====

        System.out.println("\n===== BÚSQUEDA EN ARRAY =====");

        int[] numeros2 = {10, 25, 30, 45, 50, 65};
        int buscar = 45;
        boolean encontrado = false;

        for (int numero : numeros2) {
            if (numero == buscar) {
                encontrado = true;
                break;
            }
        }

        System.out.println("¿" + buscar + " está en el array? " + encontrado);

        // ===== ARRAYS.SORT(): ORDENAR ARRAY =====

        System.out.println("\n===== ARRAYS.SORT() - ORDENAR ARRAY =====");

        int[] numerosDesordenados = {45, 12, 78, 23, 56, 89, 34};
        System.out.println("Antes de ordenar: " + java.util.Arrays.toString(numerosDesordenados));

        java.util.Arrays.sort(numerosDesordenados);
        System.out.println("Después de ordenar: " + java.util.Arrays.toString(numerosDesordenados));

        // ordenar strings (orden alfabético)
        String[] frutas = {"Manzana", "Cereza", "Banana", "Durazno"};
        System.out.println("Frutas desordenadas: " + java.util.Arrays.toString(frutas));
        java.util.Arrays.sort(frutas);
        System.out.println("Frutas ordenadas: " + java.util.Arrays.toString(frutas));

        // ===== SUMA Y PROMEDIO DE ELEMENTOS =====

        System.out.println("\n===== SUMA Y PROMEDIO =====");

        int[] precios = {100, 250, 150, 300, 200};
        int suma = 0;

        for (int precio : precios) {
            suma += precio;
        }

        double promedio = (double) suma / precios.length;
        System.out.println("Array de precios: " + java.util.Arrays.toString(precios));
        System.out.println("Suma total: " + suma);
        System.out.println("Promedio: " + promedio);

        // ===== MÁXIMO Y MÍNIMO =====

        System.out.println("\n===== MÁXIMO Y MÍNIMO =====");

        int[] temperaturas = {15, 22, 28, 18, 25, 30, 20};
        int maxima = temperaturas[0];
        int minima = temperaturas[0];

        for (int temp : temperaturas) {
            if (temp > maxima) maxima = temp;
            if (temp < minima) minima = temp;
        }

        System.out.println("Temperaturas: " + java.util.Arrays.toString(temperaturas));
        System.out.println("Temperatura máxima: " + maxima + "°C");
        System.out.println("Temperatura mínima: " + minima + "°C");

        // ===== ARRAYS MULTIDIMENSIONALES (2D - MATRIZ) =====

        System.out.println("\n===== ARRAYS MULTIDIMENSIONALES (MATRIZ 2D) =====");

        // matriz de 3 filas y 3 columnas
        int[][] matriz = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        System.out.println("Matriz 3x3:");
        for (int fila = 0; fila < matriz.length; fila++) {
            for (int columna = 0; columna < matriz[fila].length; columna++) {
                System.out.print(matriz[fila][columna] + " ");
            }
            System.out.println();
        }

        System.out.println("\nElemento en posición [1][2]: " + matriz[1][2]);

        // ===== MATRIZ CON FOR-EACH =====

        System.out.println("\n===== RECORRIDO DE MATRIZ CON FOR-EACH =====");

        int[][] calificacionesAlumnos = {
            {85, 90, 88},
            {92, 87, 95},
            {78, 82, 80}
        };

        System.out.println("Calificaciones por alumno:");
        for (int[] alumno : calificacionesAlumnos) {
            System.out.println("Alumno: " + java.util.Arrays.toString(alumno));
        }

        // ===== COPIAR ARRAYS =====

        System.out.println("\n===== COPIAR ARRAYS =====");

        int[] original = {10, 20, 30, 40};
        int[] copia = java.util.Arrays.copyOf(original, original.length);

        System.out.println("Array original: " + java.util.Arrays.toString(original));
        System.out.println("Array copiado: " + java.util.Arrays.toString(copia));

        // modificar la copia
        copia[0] = 999;
        System.out.println("Después de modificar la copia:");
        System.out.println("Original: " + java.util.Arrays.toString(original));
        System.out.println("Copia: " + java.util.Arrays.toString(copia));

    }
}
