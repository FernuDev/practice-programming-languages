#include <stdio.h>
#include <string.h>

int main() {

    printf("\n===== ARRAYS UNIDIMENSIONALES =====\n");

    int numeros[5] = {10, 20, 30, 40, 50};
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Primer elemento: %d\n", numeros[0]);
    printf("Último elemento: %d\n", numeros[4]);
    printf("Tamaño del array: %zu bytes\n", sizeof(numeros));
    printf("Número de elementos: %zu\n", sizeof(numeros) / sizeof(numeros[0]));

    printf("\n===== INICIALIZACIÓN DE ARRAYS =====\n");

    // Inicialización parcial (resto son 0)
    int valores[5] = {1, 2, 3};
    printf("Array con inicialización parcial: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Array vacío inicializado
    int vacio[3] = {0};
    printf("Array inicializado a cero: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", vacio[i]);
    }
    printf("\n");

    printf("\n===== MODIFICAR ELEMENTOS =====\n");

    int edades[4] = {20, 25, 30, 35};
    printf("Edades originales: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", edades[i]);
    }
    printf("\n");

    edades[1] = 26;
    edades[3] = 36;
    printf("Edades modificadas: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", edades[i]);
    }
    printf("\n");

    printf("\n===== OPERACIONES CON ARRAYS =====\n");

    int datos[] = {5, 2, 8, 1, 9, 3};
    int cantidad = 6;
    int suma = 0;
    int mayor = datos[0];
    int menor = datos[0];

    for (int i = 0; i < cantidad; i++) {
        suma += datos[i];
        if (datos[i] > mayor) mayor = datos[i];
        if (datos[i] < menor) menor = datos[i];
    }

    printf("Datos: ");
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n");
    printf("Suma: %d\n", suma);
    printf("Promedio: %d\n", suma / cantidad);
    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);

    printf("\n===== ARRAYS BIDIMENSIONALES =====\n");

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz 3x3:\n");
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            printf("%d ", matriz[fila][columna]);
        }
        printf("\n");
    }

    printf("\nAcceso a elemento [1][2]: %d\n", matriz[1][2]);

    printf("\n===== BÚSQUEDA EN ARRAY =====\n");

    int numeros2[] = {10, 20, 30, 40, 50};
    int buscado = 30;
    int indice = -1;

    for (int i = 0; i < 5; i++) {
        if (numeros2[i] == buscado) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        printf("Número %d encontrado en índice %d\n", buscado, indice);
    } else {
        printf("Número %d no encontrado\n", buscado);
    }

    printf("\n===== ARRAYS DE CARACTERES (STRINGS) =====\n");

    char nombre[20] = "Juan";
    printf("Nombre: %s\n", nombre);
    printf("Largo: %zu caracteres\n", strlen(nombre));

    char saludo[50] = "Hola";
    strcat(saludo, " ");
    strcat(saludo, nombre);
    printf("Saludo: %s\n", saludo);

    printf("\n===== COPIA DE ARRAYS =====\n");

    int original[] = {1, 2, 3, 4, 5};
    int copia[5];

    // Copiar elemento por elemento
    for (int i = 0; i < 5; i++) {
        copia[i] = original[i];
    }

    printf("Original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", original[i]);
    }
    printf("\n");

    printf("Copia: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", copia[i]);
    }
    printf("\n");

    printf("\n===== ARRAYS COMO PARÁMETROS =====\n");

    printf("Nota: En C, arrays se pasan como punteros\n");
    printf("Cualquier modificación afecta el array original\n");

    return 0;
}
