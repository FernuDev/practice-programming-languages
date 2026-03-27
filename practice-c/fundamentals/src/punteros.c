#include <stdio.h>
#include <stdlib.h>

// ===== OPERADOR & (DIRECCIÓN) Y * (DEREFERENCIA) =====

void modificarPorReferencia(int *ptr) {
    *ptr = 100; // modifica el valor en la dirección
}

void imprimirPuntero(int *ptr) {
    printf("Valor apuntado: %d\n", *ptr);
    printf("Dirección: %p\n", (void*)ptr);
}

// ===== PUNTERO A PUNTERO =====

void cambiarPuntero(int **ptrPtr) {
    int valor = 999;
    *ptrPtr = &valor; // esto es peligroso si se sale del scope
}

int main() {

    printf("\n===== CONCEPTOS BÁSICOS DE PUNTEROS =====\n");

    int numero = 42;
    printf("Variable 'numero' = %d\n", numero);
    printf("Dirección de 'numero' = %p\n", (void*)&numero);
    printf("Tamaño de 'numero' = %zu bytes\n", sizeof(numero));

    printf("\n===== DECLARACIÓN DE PUNTEROS =====\n");

    int *ptr = &numero; // ptr apunta a numero
    printf("Puntero 'ptr' contiene: %p\n", (void*)ptr);
    printf("Valor apuntado (*ptr): %d\n", *ptr);

    printf("\n===== MODIFICAR A TRAVÉS DE PUNTERO =====\n");

    *ptr = 50;
    printf("Después de *ptr = 50:\n");
    printf("numero = %d\n", numero);
    printf("*ptr = %d\n", *ptr);

    printf("\n===== PUNTEROS A DIFERENTES TIPOS =====\n");

    float decimal = 3.14f;
    char caracter = 'A';

    float *ptrFloat = &decimal;
    char *ptrChar = &caracter;

    printf("float *ptrFloat: apunta a %f\n", *ptrFloat);
    printf("char *ptrChar: apunta a %c\n", *ptrChar);

    printf("\n===== ARITMÉTICA DE PUNTEROS =====\n");

    int array[] = {10, 20, 30, 40, 50};
    int *ptrArray = array; // puntero al primer elemento

    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Acceso mediante puntero:\n");
    printf("*ptrArray (elemento 0): %d\n", *ptrArray);
    printf("*(ptrArray + 1) (elemento 1): %d\n", *(ptrArray + 1));
    printf("*(ptrArray + 4) (elemento 4): %d\n", *(ptrArray + 4));
    printf("ptrArray[2] (elemento 2): %d\n", ptrArray[2]);

    printf("\nDesplazamiento de puntero:\n");
    int *ptr2 = ptrArray;
    printf("ptr2 antes: %p\n", (void*)ptr2);
    ptr2++; // avanza a la siguiente dirección
    printf("ptr2 después de ++: %p\n", (void*)ptr2);
    printf("Valor apuntado: %d\n", *ptr2);

    printf("\n===== NULL Y PUNTEROS VÁLIDOS =====\n");

    int *ptrNulo = NULL; // puntero nulo
    printf("ptrNulo: %p\n", (void*)ptrNulo);

    if (ptrNulo == NULL) {
        printf("El puntero es NULL, no es seguro desreferenciar\n");
    }

    printf("\n===== PARÁMETROS POR REFERENCIA =====\n");

    int valor = 10;
    printf("Antes de modificarPorReferencia: %d\n", valor);
    modificarPorReferencia(&valor);
    printf("Después de modificarPorReferencia: %d\n", valor);

    printf("\n===== PUNTEROS Y ARRAYS =====\n");

    int numeros[] = {5, 10, 15, 20, 25};
    int *ptrNum = numeros;

    printf("Acceso a array mediante puntero:\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d (también *(%p) = %d)\n",
               i, numeros[i], (void*)(ptrNum + i), *(ptrNum + i));
    }

    printf("\n===== PUNTEROS A PUNTERO =====\n");

    int x = 25;
    int *ptrX = &x;
    int **ptrPtrX = &ptrX; // puntero a puntero

    printf("x = %d\n", x);
    printf("*ptrX = %d\n", *ptrX);
    printf("**ptrPtrX = %d\n", **ptrPtrX);

    printf("Direcciones:\n");
    printf("&x = %p\n", (void*)&x);
    printf("ptrX = %p\n", (void*)ptrX);
    printf("&ptrX = %p\n", (void*)&ptrX);
    printf("ptrPtrX = %p\n", (void*)ptrPtrX);

    printf("\n===== MEMORIA DINÁMICA =====\n");

    int *ptrDinamico = (int*)malloc(sizeof(int));
    if (ptrDinamico != NULL) {
        *ptrDinamico = 777;
        printf("Valor en memoria dinámica: %d\n", *ptrDinamico);
        free(ptrDinamico);
        ptrDinamico = NULL;
        printf("Memoria liberada\n");
    }

    printf("\n===== ARRAY DINÁMICO =====\n");

    int tamanio = 5;
    int *arrayDinamico = (int*)malloc(tamanio * sizeof(int));

    if (arrayDinamico != NULL) {
        for (int i = 0; i < tamanio; i++) {
            arrayDinamico[i] = (i + 1) * 10;
        }

        printf("Array dinámico: ");
        for (int i = 0; i < tamanio; i++) {
            printf("%d ", arrayDinamico[i]);
        }
        printf("\n");

        free(arrayDinamico);
        arrayDinamico = NULL;
    }

    printf("\n===== RESUMEN DE PUNTEROS =====\n");

    printf("& (dirección de): obtiene la dirección de una variable\n");
    printf("* (desreferencia): accede al valor en esa dirección\n");
    printf("malloc: asigna memoria dinámica\n");
    printf("free: libera memoria dinámica\n");
    printf("NULL: puntero nulo, no apunta a nada\n");
    printf("Aritmética de punteros: ptr+1 apunta al siguiente elemento\n");

    return 0;
}
