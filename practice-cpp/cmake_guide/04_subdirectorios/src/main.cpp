#include <iostream>
#include "utilidades.h"

using namespace std;

int main() {
    cout << "\n===== PROYECTO CON SUBDIRECTORIOS =====\n";

    imprimirSeparador();
    cout << "Este proyecto está organizado en módulos\n";
    imprimirSeparador();

    cout << "\nCalculando cuadrados:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << "² = " << obtenerCuadrado(i) << "\n";
    }

    cout << "\nInvirtiendo cadenas:\n";
    string palabra1 = "Hola";
    cout << "Original: " << palabra1 << "\n";
    cout << "Invertida: " << invertirCadena(palabra1) << "\n";

    string palabra2 = "CMake";
    cout << "Original: " << palabra2 << "\n";
    cout << "Invertida: " << invertirCadena(palabra2) << "\n";

    imprimirSeparador();

    return 0;
}
