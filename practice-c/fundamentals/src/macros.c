#include <stdio.h>

// ===== MACROS SIMPLES =====

#define PI 3.14159
#define TAMANIO_MAX 100
#define VELOCIDAD_LUZ 299792458

// ===== MACROS CON PARÁMETROS =====

#define CUADRADO(x) ((x) * (x))
#define CUBO(x) ((x) * (x) * (x))
#define MINIMO(a, b) ((a) < (b) ? (a) : (b))
#define MAXIMO(a, b) ((a) > (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

// ===== MACROS PARA CONVERSIÓN =====

#define GRADOS_A_RADIANES(g) ((g) * PI / 180.0)
#define FAHRENHEIT_A_CELSIUS(f) (((f) - 32) * 5 / 9)
#define KILOMETERS_A_MILLAS(km) ((km) * 0.621371)

// ===== MACROS ÚTILES =====

#define IMPRIMIR(x) printf("Valor: %d\n", x)
#define IMPRIMIR_FLOAT(x) printf("Valor: %.2f\n", x)

// ===== MACROS CON MÚLTIPLES PARÁMETROS =====

#define ES_PAR(n) ((n) % 2 == 0)
#define ES_POSITIVO(n) ((n) > 0)
#define ESTA_EN_RANGO(x, min, max) ((x) >= (min) && (x) <= (max))

// ===== MACROS CONDICIONALES =====

#define MODO_DEBUG 1

#if MODO_DEBUG
    #define DEBUG_PRINT(msg) printf("[DEBUG] %s\n", msg)
#else
    #define DEBUG_PRINT(msg)  // vacío si DEBUG está desactivado
#endif

// ===== MACROS CON CONCATENACIÓN =====

#define CONCATENAR(a, b) a ## b

// ===== MACROS VARIADIC (múltiples argumentos) =====

#define MENSAJE(...) printf(__VA_ARGS__)

int main() {

    printf("\n===== CONSTANTES CON MACROS =====\n");

    printf("PI = %.5f\n", PI);
    printf("TAMANIO_MAX = %d\n", TAMANIO_MAX);
    printf("VELOCIDAD_LUZ = %d m/s\n", VELOCIDAD_LUZ);

    printf("\n===== MACROS COMO FUNCIONES =====\n");

    int numero1 = 5;
    int numero2 = 3;

    printf("CUADRADO(5) = %d\n", CUADRADO(numero1));
    printf("CUBO(3) = %d\n", CUBO(numero2));
    printf("MINIMO(5, 3) = %d\n", MINIMO(numero1, numero2));
    printf("MAXIMO(5, 3) = %d\n", MAXIMO(numero1, numero2));

    printf("\n===== MACRO ABS =====\n");

    int negativo = -42;
    printf("ABS(-42) = %d\n", ABS(negativo));
    printf("ABS(42) = %d\n", ABS(42));

    printf("\n===== CONVERSIONES =====\n");

    float grados = 45;
    float radianes = GRADOS_A_RADIANES(grados);
    printf("%f grados = %f radianes\n", grados, radianes);

    float fahrenheit = 98.6f;
    float celsius = FAHRENHEIT_A_CELSIUS(fahrenheit);
    printf("%.1f°F = %.1f°C\n", fahrenheit, celsius);

    float km = 100;
    float millas = KILOMETERS_A_MILLAS(km);
    printf("%.1f km = %.2f millas\n", km, millas);

    printf("\n===== MACROS DE IMPRESIÓN =====\n");

    IMPRIMIR(42);
    IMPRIMIR_FLOAT(3.14159);

    printf("\n===== MACROS CONDICIONALES =====\n");

    int numero = 10;
    if (ES_PAR(numero)) {
        printf("%d es par\n", numero);
    }

    if (ES_POSITIVO(numero)) {
        printf("%d es positivo\n", numero);
    }

    if (ESTA_EN_RANGO(numero, 0, 100)) {
        printf("%d está en rango [0, 100]\n", numero);
    }

    printf("\n===== DEBUG MACRO =====\n");

    DEBUG_PRINT("Este es un mensaje de debug");

    printf("\n===== COMPILACIÓN CONDICIONAL =====\n");

#if MODO_DEBUG
    printf("Modo DEBUG está activado\n");
#else
    printf("Modo DEBUG está desactivado\n");
#endif

    printf("\n===== IFDEF Y IFNDEF =====\n");

#define FEATURE_ACTIVA 1

#ifdef FEATURE_ACTIVA
    printf("Feature está disponible\n");
#endif

#ifndef FEATURE_DESACTIVADA
    printf("Feature desactivada no está definida\n");
#endif

    printf("\n===== PELIGROS DE MACROS =====\n");

    printf("Cuidado con las macros sin paréntesis:\n");
    printf("SIN macro: 2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("CON CUADRADO: CUADRADO(2 + 3) = %d (correcto)\n", CUADRADO(2 + 3));

    printf("\nProblem: macro sin paréntesis\n");
    #define MALO(x) x * x  // INCORRECTO
    printf("MALO(2 + 3) = %d (INCORRECTO: 2 + 3 * 2 + 3)\n", MALO(2 + 3));

    printf("\n===== MACROS VS FUNCIONES INLINE =====\n");

    printf("Ventajas de macros:\n");
    printf("- Más rápido (se expande en tiempo de compilación)\n");
    printf("- Sin overhead de llamada de función\n");
    printf("- Puede trabajar con tipos diferentes\n");

    printf("\nDesventajas de macros:\n");
    printf("- No hay verificación de tipos\n");
    printf("- Más grande el código compilado (code bloat)\n");
    printf("- Difícil de debuggear\n");
    printf("- Pueden causar conflictos de nombres\n");

    printf("\n===== RESUMEN DE MACROS =====\n");

    printf("#define NOMBRE valor       - Macro constante\n");
    printf("#define MACRO(x) (x)*2     - Macro como función\n");
    printf("#if, #ifdef, #ifndef      - Compilación condicional\n");
    printf("#else, #endif             - Condicionales\n");
    printf("##                         - Concatenación de tokens\n");
    printf("__VA_ARGS__                - Argumentos variables\n");
    printf("\\                          - Continuación de línea\n");

    return 0;
}
