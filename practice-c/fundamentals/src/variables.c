#include <stdio.h>
#include <limits.h>
#include <float.h>

// ===== TIPOS DE DATOS EN C =====

int main() {

    printf("\n===== TIPOS PRIMITIVOS =====\n");

    // char: un byte, almacena caracteres o números pequeños
    char caracter = 'A';
    printf("char '%c': tamaño = %zu bytes, rango = [%d, %d]\n",
           caracter, sizeof(char), CHAR_MIN, CHAR_MAX);

    // short: entero corto
    short numeroCorto = 32000;
    printf("short %d: tamaño = %zu bytes, rango = [%d, %d]\n",
           numeroCorto, sizeof(short), SHRT_MIN, SHRT_MAX);

    // int: entero estándar
    int numero = 42;
    printf("int %d: tamaño = %zu bytes, rango = [%d, %d]\n",
           numero, sizeof(int), INT_MIN, INT_MAX);

    // long: entero largo
    long numeroLargo = 1000000L;
    printf("long %ld: tamaño = %zu bytes, rango = [%ld, %ld]\n",
           numeroLargo, sizeof(long), LONG_MIN, LONG_MAX);

    // float: punto flotante simple precisión
    float decimal = 3.14f;
    printf("float %.2f: tamaño = %zu bytes, precisión = 6-7 dígitos\n",
           decimal, sizeof(float));

    // double: punto flotante doble precisión
    double numeroGrande = 2.71828;
    printf("double %.5f: tamaño = %zu bytes, precisión = 15-17 dígitos\n",
           numeroGrande, sizeof(double));

    // ===== VARIABLES Y DECLARACIÓN =====

    printf("\n===== DECLARACIÓN DE VARIABLES =====\n");

    int edad = 25;
    float altura = 1.75f;
    char inicial = 'J';

    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial: %c\n", inicial);

    // ===== CONST: CONSTANTES =====

    printf("\n===== CONSTANTES =====\n");

    const int VELOCIDAD_LUZ = 299792458; // constante en tiempo de compilación
    const float PI = 3.14159f;

    printf("Velocidad de la luz: %d m/s\n", VELOCIDAD_LUZ);
    printf("Pi: %.5f\n", PI);

    // ===== CONVERSIÓN DE TIPOS =====

    printf("\n===== CONVERSIÓN DE TIPOS =====\n");

    int entero = 10;
    float decimal2 = (float)entero / 3; // casting explícito
    printf("10 / 3 (como float): %.2f\n", decimal2);

    int resultado = (int)3.9; // pérdida de precisión
    printf("(int)3.9 = %d (se pierde la parte decimal)\n", resultado);

    // ===== DIRECCIONES DE MEMORIA =====

    printf("\n===== DIRECCIONES DE MEMORIA =====\n");

    int variable = 100;
    printf("Variable 'variable' = %d\n", variable);
    printf("Dirección en memoria: %p\n", (void*)&variable);
    printf("Tamaño en memoria: %zu bytes\n", sizeof(variable));

    // ===== MODIFICADORES =====

    printf("\n===== MODIFICADORES UNSIGNED =====\n");

    unsigned int numeroPositivo = 4294967295U; // solo positivos
    printf("unsigned int máximo: %u\n", numeroPositivo);

    unsigned char byte = 255;
    printf("unsigned char máximo: %u\n", byte);

    // ===== RESUMEN =====

    printf("\n===== RESUMEN DE TIPOS =====\n");
    printf("char:        1 byte  (-128 a 127 o 0-255)\n");
    printf("short:       2 bytes (-32768 a 32767)\n");
    printf("int:         4 bytes (-2.1B a 2.1B)\n");
    printf("long:        8 bytes en 64-bit\n");
    printf("float:       4 bytes (±1.2e-38 a ±3.4e+38)\n");
    printf("double:      8 bytes (±2.2e-308 a ±1.8e+308)\n");

    return 0;
}
