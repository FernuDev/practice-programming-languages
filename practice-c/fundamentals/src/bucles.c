#include <stdio.h>

int main() {

    printf("\n===== BUCLE FOR =====\n");

    printf("Números del 1 al 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\nNúmeros del 10 al 1 (descendente):\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n===== TABLA DE MULTIPLICAR =====\n");

    int numero = 5;
    printf("Tabla del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    printf("\n===== BUCLE WHILE =====\n");

    int contador = 1;
    printf("Números impares del 1 al 10:\n");
    while (contador <= 10) {
        if (contador % 2 != 0) {
            printf("%d ", contador);
        }
        contador++;
    }
    printf("\n");

    printf("\n===== BUCLE DO-WHILE =====\n");

    int intento = 0;
    printf("Contador que se ejecuta al menos una vez:\n");
    do {
        printf("Intento %d\n", intento + 1);
        intento++;
    } while (intento < 3);

    printf("\n===== BREAK Y CONTINUE =====\n");

    printf("Números del 1 al 10 (saltando pares):\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // salta a la siguiente iteración
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("\nNúmeros hasta encontrar 5:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
        if (i == 5) {
            break; // sale del bucle
        }
    }
    printf("\n");

    printf("\n===== BUCLES ANIDADOS =====\n");

    printf("Matriz 3x3:\n");
    for (int fila = 1; fila <= 3; fila++) {
        for (int columna = 1; columna <= 3; columna++) {
            printf("(%d,%d) ", fila, columna);
        }
        printf("\n");
    }

    printf("\n===== SUMA ACUMULATIVA =====\n");

    int suma = 0;
    for (int i = 1; i <= 5; i++) {
        suma += i;
        printf("Suma hasta %d: %d\n", i, suma);
    }

    printf("\n===== BÚSQUEDA CON BREAK =====\n");

    int arreglo[] = {10, 20, 30, 40, 50};
    int buscado = 30;
    int encontrado = 0;

    for (int i = 0; i < 5; i++) {
        if (arreglo[i] == buscado) {
            printf("Número %d encontrado en posición %d\n", buscado, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Número %d no encontrado\n", buscado);
    }

    printf("\n===== CONTADOR Y ACUMULADOR =====\n");

    int valores[] = {5, 10, 15, 20, 25};
    int cantidad = 5;
    int total = 0;
    int promedio = 0;

    for (int i = 0; i < cantidad; i++) {
        total += valores[i];
    }
    promedio = total / cantidad;

    printf("Valores: ");
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    printf("Total: %d\n", total);
    printf("Promedio: %d\n", promedio);

    printf("\n===== PATRÓN: NÚMEROS PRIMOS =====\n");

    printf("Números primos del 1 al 20:\n");
    for (int num = 2; num <= 20; num++) {
        int esPrimo = 1;
        for (int divisor = 2; divisor * divisor <= num; divisor++) {
            if (num % divisor == 0) {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
