#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    printf("\n===== MEMORIA STACK VS HEAP =====\n");

    printf("Stack (automático, rápido, limitado):\n");
    int stackVar = 42;
    printf("Variable local: %d en %p\n", stackVar, (void*)&stackVar);

    printf("\nHeap (manual, lento, grande):\n");
    int *heapVar = (int*)malloc(sizeof(int));
    if (heapVar != NULL) {
        *heapVar = 100;
        printf("Memoria asignada: %d en %p\n", *heapVar, (void*)heapVar);
    }

    printf("\n===== MALLOC: ASIGNACIÓN DE MEMORIA =====\n");

    int *numero = (int*)malloc(sizeof(int));
    if (numero == NULL) {
        printf("Error: no se pudo asignar memoria\n");
        return 1;
    }

    *numero = 777;
    printf("Valor asignado: %d\n", *numero);
    printf("Dirección: %p\n", (void*)numero);
    printf("Tamaño solicitado: %zu bytes\n", sizeof(int));

    printf("\n===== FREE: LIBERAR MEMORIA =====\n");

    printf("Liberando memoria...\n");
    free(numero);
    numero = NULL;  // buena práctica
    printf("Memoria liberada. Puntero ahora es NULL\n");

    printf("\n===== ARRAY DINÁMICO =====\n");

    int tamanio = 5;
    int *array = (int*)malloc(tamanio * sizeof(int));

    if (array != NULL) {
        printf("Array dinámico de %d elementos creado\n", tamanio);

        // Inicializar
        for (int i = 0; i < tamanio; i++) {
            array[i] = (i + 1) * 10;
        }

        // Usar
        printf("Array: ");
        for (int i = 0; i < tamanio; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        // Liberar
        free(array);
        array = NULL;
        printf("Array dinámico liberado\n");
    }

    printf("\n===== REALLOC: CAMBIAR TAMAÑO DE MEMORIA =====\n");

    int *datos = (int*)malloc(3 * sizeof(int));
    if (datos != NULL) {
        datos[0] = 10;
        datos[1] = 20;
        datos[2] = 30;

        printf("Array original (3 elementos): ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", datos[i]);
        }
        printf("\n");

        // Aumentar a 5 elementos
        datos = (int*)realloc(datos, 5 * sizeof(int));
        if (datos != NULL) {
            datos[3] = 40;
            datos[4] = 50;

            printf("Array después de realloc (5 elementos): ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", datos[i]);
            }
            printf("\n");

            free(datos);
            datos = NULL;
        }
    }

    printf("\n===== CALLOC: ASIGNAR E INICIALIZAR EN CERO =====\n");

    int *vector = (int*)calloc(4, sizeof(int));  // asigna e inicializa a 0
    if (vector != NULL) {
        printf("Vector asignado con calloc (inicializado a cero):\n");
        for (int i = 0; i < 4; i++) {
            printf("vector[%d] = %d\n", i, vector[i]);
        }

        vector[0] = 100;
        printf("Después de vector[0] = 100:\n");
        for (int i = 0; i < 4; i++) {
            printf("vector[%d] = %d\n", i, vector[i]);
        }

        free(vector);
        vector = NULL;
    }

    printf("\n===== MEMORY LEAK (PÉRDIDA DE MEMORIA) =====\n");

    printf("Ejemplo de memory leak (NO HACER ESTO):\n");
    printf("// int *ptr = (int*)malloc(sizeof(int));\n");
    printf("// ptr = NULL;  // ¡Se pierde la dirección, no se puede liberar!\n");
    printf("// Resultado: memoria asignada pero no accesible\n");

    printf("\nMejor práctica:\n");
    int *seguro = (int*)malloc(sizeof(int));
    if (seguro != NULL) {
        *seguro = 999;
        printf("Usando memoria: %d\n", *seguro);
        free(seguro);
        seguro = NULL;
    }

    printf("\n===== STRINGS DINÁMICOS =====\n");

    int longitud = 20;
    char *texto = (char*)malloc(longitud * sizeof(char));

    if (texto != NULL) {
        strcpy(texto, "Hola Mundo");
        printf("String dinámico: %s\n", texto);
        printf("Longitud real: %zu\n", strlen(texto));
        printf("Espacio asignado: %d bytes\n", longitud);

        free(texto);
        texto = NULL;
    }

    printf("\n===== ESTRUCTURA DINÁMICA =====\n");

    struct Persona {
        char nombre[50];
        int edad;
    };

    struct Persona *persona = (struct Persona*)malloc(sizeof(struct Persona));

    if (persona != NULL) {
        strcpy(persona->nombre, "Juan");
        persona->edad = 30;

        printf("Persona: %s, %d años\n", persona->nombre, persona->edad);

        free(persona);
        persona = NULL;
    }

    printf("\n===== ARRAY DE ESTRUCTURAS DINÁMICAS =====\n");

    int cantidad = 3;
    struct Persona *personas = (struct Persona*)malloc(cantidad * sizeof(struct Persona));

    if (personas != NULL) {
        strcpy(personas[0].nombre, "Ana");
        personas[0].edad = 25;

        strcpy(personas[1].nombre, "Bob");
        personas[1].edad = 30;

        strcpy(personas[2].nombre, "Carlos");
        personas[2].edad = 35;

        printf("Personas:\n");
        for (int i = 0; i < cantidad; i++) {
            printf("%s: %d años\n", personas[i].nombre, personas[i].edad);
        }

        free(personas);
        personas = NULL;
    }

    printf("\n===== VERIFICACIÓN ANTES DE USAR =====\n");

    int *riesgoso = (int*)malloc(sizeof(int));

    // Siempre verificar si malloc tuvo éxito
    if (riesgoso != NULL) {
        *riesgoso = 555;
        printf("Valor: %d\n", *riesgoso);
        free(riesgoso);
        riesgoso = NULL;
    } else {
        printf("Error: malloc falló, memoria insuficiente\n");
    }

    printf("\n===== RESUMEN DE GESTIÓN DE MEMORIA =====\n");

    printf("malloc(size): asigna 'size' bytes\n");
    printf("free(ptr): libera memoria apuntada por ptr\n");
    printf("calloc(n, size): asigna n*size bytes inicializados a 0\n");
    printf("realloc(ptr, size): cambia el tamaño de memoria\n");
    printf("NULL: siempre verificar si malloc/calloc/realloc tuvo éxito\n");
    printf("Memory leak: olvidar hacer free causa pérdida de memoria\n");
    printf("Double free: liberar dos veces causa error\n");

    return 0;
}
