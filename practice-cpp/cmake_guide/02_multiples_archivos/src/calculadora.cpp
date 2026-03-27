#include "calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora() {
    cout << "Calculadora creada\n";
}

double Calculadora::sumar(double a, double b) {
    return a + b;
}

double Calculadora::restar(double a, double b) {
    return a - b;
}

double Calculadora::multiplicar(double a, double b) {
    return a * b;
}

double Calculadora::dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: División por cero\n";
        return 0;
    }
    return a / b;
}
