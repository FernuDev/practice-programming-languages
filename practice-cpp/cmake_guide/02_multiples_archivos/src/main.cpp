#include <iostream>
#include "calculadora.h"

using namespace std;

int main() {
    Calculadora calc;

    cout << "\n===== DEMOSTRACIÓN DE CALCULADORA =====\n";
    cout << "5 + 3 = " << calc.sumar(5, 3) << "\n";
    cout << "5 - 3 = " << calc.restar(5, 3) << "\n";
    cout << "5 * 3 = " << calc.multiplicar(5, 3) << "\n";
    cout << "5 / 3 = " << calc.dividir(5, 3) << "\n";

    return 0;
}
