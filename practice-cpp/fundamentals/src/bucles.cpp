#include <iostream>
#include <vector>

using namespace std;

int main() {

    // ===== FOR CLÁSICO =====

    cout << "\n===== FOR CLÁSICO =====\n";

    // estructura: for (inicialización; condición; incremento)
    for (int i = 1; i <= 5; i++) {
        cout << "Iteración " << i << "\n";
    }

    cout << "\nTabla de multiplicar del 3:\n";
    for (int i = 1; i <= 10; i++) {
        cout << "3 * " << i << " = " << (3 * i) << "\n";
    }

    // ===== FOR CON DECREMENTO =====

    cout << "\n===== FOR CON DECREMENTO =====\n";

    for (int i = 5; i >= 1; i--) {
        cout << "Cuenta atrás: " << i << "\n";
    }

    // ===== WHILE =====

    cout << "\n===== WHILE =====\n";

    // estructura: while (condición) { ... }
    // se evalúa la condición primero, luego ejecuta el cuerpo
    int contador = 1;
    cout << "Números del 1 al 5 con while:\n";
    while (contador <= 5) {
        cout << contador << "\n";
        contador++;
    }

    // ===== DO-WHILE =====

    cout << "\n===== DO-WHILE =====\n";

    // estructura: do { ... } while (condición)
    // ejecuta el cuerpo primero, luego evalúa la condición
    // garantiza al menos una ejecución
    int contadorDo = 1;
    cout << "Números del 1 al 5 con do-while:\n";
    do {
        cout << contadorDo << "\n";
        contadorDo++;
    } while (contadorDo <= 5);

    // ===== RANGE-BASED FOR (C++11) =====

    cout << "\n===== RANGE-BASED FOR (C++11) =====\n";

    // estructura: for (tipo variable : colección) { ... }
    // útil para recorrer vectores y arrays sin índice
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "Recorrido de vector con range-based for:\n";
    for (int numero : numeros) {
        cout << "Elemento: " << numero << "\n";
    }

    // ===== BREAK: SALIR DEL BUCLE =====

    cout << "\n===== BREAK: SALIR DEL BUCLE =====\n";

    cout << "Conteo hasta encontrar 5:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\n";
        if (i == 5) {
            cout << "¡Encontrado el 5! Saliendo del bucle.\n";
            break; // sale del bucle inmediatamente
        }
    }

    // ===== CONTINUE: SALTAR A LA SIGUIENTE ITERACIÓN =====

    cout << "\n===== CONTINUE: SALTAR ITERACIÓN =====\n";

    cout << "Números impares del 1 al 10:\n";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // salta el resto del código en esta iteración
        }
        cout << i << "\n";
    }

    // ===== BUCLES ANIDADOS =====

    cout << "\n===== BUCLES ANIDADOS =====\n";

    cout << "Tabla de multiplicar (2x2 a 5x5):\n";
    for (int i = 2; i <= 5; i++) {
        cout << "\nTabla del " << i << ":\n";
        for (int j = 1; j <= 5; j++) {
            cout << "  " << i << " * " << j << " = " << (i * j) << "\n";
        }
    }

    // ===== SUMA ACUMULATIVA CON BUCLE =====

    cout << "\n===== SUMA ACUMULATIVA CON BUCLE =====\n";

    int suma = 0;
    int n = 5;
    for (int i = 1; i <= n; i++) {
        suma += i; // suma acumulativa: suma = suma + i
        cout << "Iteración " << i << ", suma acumulada: " << suma << "\n";
    }
    cout << "Suma total de 1 a " << n << ": " << suma << "\n";

    // ===== BÚSQUEDA EN VECTOR CON BREAK =====

    cout << "\n===== BÚSQUEDA EN VECTOR =====\n";

    vector<int> valores = {100, 200, 300, 400, 500};
    int buscar = 300;
    bool encontrado = false;

    for (int valor : valores) {
        if (valor == buscar) {
            cout << "¡Encontrado " << buscar << " en el vector!\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "El valor " << buscar << " no está en el vector\n";
    }

    // ===== PRODUCTO ACUMULATIVO CON BUCLE =====

    cout << "\n===== PRODUCTO ACUMULATIVO (FACTORIAL) =====\n";

    int producto = 1;
    for (int i = 1; i <= 4; i++) {
        producto *= i; // factorial: 1 * 2 * 3 * 4
    }
    cout << "Factorial de 4: " << producto << "\n";

    return 0;
}
