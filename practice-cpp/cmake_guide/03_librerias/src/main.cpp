#include <iostream>
#include "matematicas.h"

using namespace std;

int main() {
    cout << "\n===== USANDO LIBRERÍA ESTÁTICA =====\n";

    cout << "\nCuadrados:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << "² = " << cuadrado(i) << "\n";
    }

    cout << "\nCubos:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << "³ = " << cubo(i) << "\n";
    }

    cout << "\nNúmeros primos del 1 al 20:\n";
    for (int i = 1; i <= 20; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << "\n";

    cout << "\nSerie de Fibonacci (primeros 10 términos):\n";
    for (int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << "\n";

    return 0;
}
