#include "matematicas.h"

// Calcula el cuadrado de un número
int cuadrado(int numero) {
    return numero * numero;
}

// Calcula el cubo de un número
int cubo(int numero) {
    return numero * numero * numero;
}

// Verifica si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}

// Calcula el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
