#include "utilidades.h"
#include <iostream>
#include <algorithm>

using namespace std;

void imprimirSeparador() {
    cout << "===================================\n";
}

double obtenerCuadrado(double numero) {
    return numero * numero;
}

string invertirCadena(const string& cadena) {
    string invertida = cadena;
    reverse(invertida.begin(), invertida.end());
    return invertida;
}
