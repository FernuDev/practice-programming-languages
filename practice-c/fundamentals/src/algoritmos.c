#include <stdio.h>
#include <string.h>

// ===== FUNCIONES DE BÚSQUEDA =====

int busquedaLineal(int arr[], int n, int objetivo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == objetivo) {
            return i;
        }
    }
    return -1;
}

int busquedaBinaria(int arr[], int n, int objetivo) {
    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arr[medio] == objetivo) {
            return medio;
        } else if (arr[medio] < objetivo) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1;
}

// ===== FUNCIONES DE ORDENAMIENTO =====

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenamientoBurbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                intercambiar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void ordenamientoSeleccion(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minimo = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minimo]) {
                minimo = j;
            }
        }
        intercambiar(&arr[i], &arr[minimo]);
    }
}

void ordenamientoInsercion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int clave = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = clave;
    }
}

void fusionar(int arr[], int izq, int medio, int der) {
    int n1 = medio - izq + 1;
    int n2 = der - medio;

    int izqArr[n1];
    int derArr[n2];

    for (int i = 0; i < n1; i++) {
        izqArr[i] = arr[izq + i];
    }
    for (int i = 0; i < n2; i++) {
        derArr[i] = arr[medio + 1 + i];
    }

    int i = 0, j = 0, k = izq;

    while (i < n1 && j < n2) {
        if (izqArr[i] <= derArr[j]) {
            arr[k++] = izqArr[i++];
        } else {
            arr[k++] = derArr[j++];
        }
    }

    while (i < n1) {
        arr[k++] = izqArr[i++];
    }
    while (j < n2) {
        arr[k++] = derArr[j++];
    }
}

void ordenamientoFusion(int arr[], int izq, int der) {
    if (izq < der) {
        int medio = izq + (der - izq) / 2;
        ordenamientoFusion(arr, izq, medio);
        ordenamientoFusion(arr, medio + 1, der);
        fusionar(arr, izq, medio, der);
    }
}

// ===== UTILIDADES =====

void imprimirArray(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {

    printf("\n===== BÚSQUEDA LINEAL =====\n");

    int datos1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n1 = sizeof(datos1) / sizeof(datos1[0]);

    printf("Array: ");
    imprimirArray(datos1, n1);

    int resultado = busquedaLineal(datos1, n1, 40);
    if (resultado != -1) {
        printf("Elemento 40 encontrado en índice: %d\n", resultado);
    } else {
        printf("Elemento 40 no encontrado\n");
    }

    resultado = busquedaLineal(datos1, n1, 100);
    if (resultado != -1) {
        printf("Elemento 100 encontrado en índice: %d\n", resultado);
    } else {
        printf("Elemento 100 no encontrado\n");
    }

    printf("\nComplejidad: O(n)\n");

    printf("\n===== BÚSQUEDA BINARIA =====\n");

    int datos2[] = {10, 15, 20, 25, 30, 35, 40, 45, 50};
    int n2 = sizeof(datos2) / sizeof(datos2[0]);

    printf("Array ordenado: ");
    imprimirArray(datos2, n2);

    resultado = busquedaBinaria(datos2, n2, 35);
    if (resultado != -1) {
        printf("Elemento 35 encontrado en índice: %d\n", resultado);
    } else {
        printf("Elemento 35 no encontrado\n");
    }

    printf("\nComplejidad: O(log n)\n");

    printf("\n===== ORDENAMIENTO BURBUJA =====\n");

    int datos3[] = {64, 34, 25, 12, 22, 11, 90};
    int n3 = sizeof(datos3) / sizeof(datos3[0]);

    printf("Array sin ordenar: ");
    imprimirArray(datos3, n3);

    ordenamientoBurbuja(datos3, n3);

    printf("Array ordenado: ");
    imprimirArray(datos3, n3);

    printf("Complejidad: O(n²)\n");

    printf("\n===== ORDENAMIENTO SELECCIÓN =====\n");

    int datos4[] = {64, 34, 25, 12, 22, 11, 90};
    int n4 = sizeof(datos4) / sizeof(datos4[0]);

    printf("Array sin ordenar: ");
    imprimirArray(datos4, n4);

    ordenamientoSeleccion(datos4, n4);

    printf("Array ordenado: ");
    imprimirArray(datos4, n4);

    printf("Complejidad: O(n²)\n");

    printf("\n===== ORDENAMIENTO INSERCIÓN =====\n");

    int datos5[] = {64, 34, 25, 12, 22, 11, 90};
    int n5 = sizeof(datos5) / sizeof(datos5[0]);

    printf("Array sin ordenar: ");
    imprimirArray(datos5, n5);

    ordenamientoInsercion(datos5, n5);

    printf("Array ordenado: ");
    imprimirArray(datos5, n5);

    printf("Complejidad: O(n²), pero eficiente para datos casi ordenados\n");

    printf("\n===== ORDENAMIENTO FUSIÓN =====\n");

    int datos6[] = {64, 34, 25, 12, 22, 11, 90};
    int n6 = sizeof(datos6) / sizeof(datos6[0]);

    printf("Array sin ordenar: ");
    imprimirArray(datos6, n6);

    ordenamientoFusion(datos6, 0, n6 - 1);

    printf("Array ordenado: ");
    imprimirArray(datos6, n6);

    printf("Complejidad: O(n log n), estable\n");

    printf("\n===== COMPARACIÓN DE COMPLEJIDADES =====\n");

    printf("Búsqueda lineal:     O(n)\n");
    printf("Búsqueda binaria:    O(log n) - requiere array ordenado\n");
    printf("Burbuja:             O(n²)\n");
    printf("Selección:           O(n²)\n");
    printf("Inserción:           O(n²)\n");
    printf("Fusión:              O(n log n)\n");
    printf("Quick sort:          O(n log n) promedio, O(n²) peor caso\n");

    printf("\n===== CASOS DE USO =====\n");

    printf("Búsqueda lineal:     arrays pequeños, desordenados\n");
    printf("Búsqueda binaria:    arrays grandes, ordenados\n");
    printf("Burbuja:             educativo, no en producción\n");
    printf("Selección:           educativo, O(n) swaps\n");
    printf("Inserción:           datos casi ordenados\n");
    printf("Fusión:              datos grandes, requiere O(n) memoria\n");
    printf("Quick sort:          mejor opción en general\n");
    printf("Heap sort:           garantiza O(n log n), menos memoria\n");

    return 0;
}
