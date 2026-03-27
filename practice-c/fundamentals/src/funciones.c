#include <stdio.h>

// ===== FUNCIONES SIMPLES =====

void saludar() {
    printf("¡Hola! Esta es una función sin parámetros\n");
}

int sumar(int a, int b) {
    return a + b;
}

void imprimirResultado(int resultado) {
    printf("El resultado es: %d\n", resultado);
}

// ===== FUNCIONES CON MÚLTIPLES PARÁMETROS =====

int obtenerMayor(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

void mostrarPersona(char nombre[], int edad, float altura) {
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f m\n", altura);
}

// ===== PARÁMETROS POR REFERENCIA =====

void incrementar(int *valor) {
    (*valor)++; // desreferencia y incrementa
}

void intercambiar(int *a, int *b) {
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

// ===== VALORES POR DEFECTO (simulado con sobrecarga) =====

int calcularArea(int lado) {
    return lado * lado; // cuadrado
}

int calcularAreaRectangulo(int ancho, int alto) {
    return ancho * alto;
}

// ===== RECURSIÓN =====

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// ===== MAIN =====

int main() {

    printf("\n===== FUNCIONES SIMPLES =====\n");

    saludar();

    int suma = sumar(10, 20);
    imprimirResultado(suma);

    printf("\n===== FUNCIONES CON MÚLTIPLES PARÁMETROS =====\n");

    int max = obtenerMayor(15, 25);
    printf("El mayor entre 15 y 25 es: %d\n", max);

    printf("\nDatos de la persona:\n");
    mostrarPersona("Juan Pérez", 30, 1.75);

    printf("\n===== PARÁMETROS POR REFERENCIA =====\n");

    int numero = 5;
    printf("Número antes: %d\n", numero);
    incrementar(&numero);
    printf("Número después de incrementar: %d\n", numero);

    int a = 10;
    int b = 20;
    printf("\nAntes del intercambio: a=%d, b=%d\n", a, b);
    intercambiar(&a, &b);
    printf("Después del intercambio: a=%d, b=%d\n", a, b);

    printf("\n===== FUNCIONES CON LÓGICA =====\n");

    printf("Área de cuadrado con lado 5: %d\n", calcularArea(5));
    printf("Área de rectángulo 5x3: %d\n", calcularAreaRectangulo(5, 3));

    printf("\n===== RECURSIÓN: FACTORIAL =====\n");

    for (int i = 1; i <= 6; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }

    printf("\n===== RECURSIÓN: FIBONACCI =====\n");

    printf("Serie de Fibonacci (primeros 10 términos):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    printf("\n===== SCOPE DE VARIABLES =====\n");

    int variableGlobal = 100; // en main, pero local al main

    {
        int variableLocal = 50;
        printf("Dentro del bloque: variableLocal = %d\n", variableLocal);
        printf("Dentro del bloque: variableGlobal = %d\n", variableGlobal);
    }

    printf("Fuera del bloque: variableGlobal = %d\n", variableGlobal);
    // printf("Fuera del bloque: variableLocal = %d\n", variableLocal); // ERROR

    printf("\n===== FUNCIÓN QUE RETORNA MÚLTIPLES VALORES (simulado) =====\n");

    // En C, una función solo puede retornar un valor
    // Para retornar múltiples valores, usamos punteros
    int resultado = 0;
    int residuo = 0;

    int dividendo = 17;
    int divisor = 5;

    resultado = dividendo / divisor;
    residuo = dividendo % divisor;

    printf("División: %d / %d = %d con residuo %d\n",
           dividendo, divisor, resultado, residuo);

    printf("\n===== PROTOTIPOS DE FUNCIÓN =====\n");

    printf("Nota: Los prototipos se declaran al inicio del archivo\n");
    printf("Esto permite usar funciones antes de definirlas\n");

    return 0;
}
