#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

    // ===== VECTOR =====

    cout << "\n===== VECTOR =====\n";

    vector<int> numeros;
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    cout << "Vector: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << "\n";

    cout << "Tamaño: " << numeros.size() << "\n";
    cout << "Primero: " << numeros.front() << "\n";
    cout << "Último: " << numeros.back() << "\n";

    // Eliminar
    numeros.pop_back();
    cout << "Después de pop_back(): " << numeros.size() << "\n";

    // ===== MAP: DICCIONARIO CLAVE-VALOR =====

    cout << "\n===== MAP: DICCIONARIO CLAVE-VALOR =====\n";

    map<string, int> edades;
    edades["Juan"] = 28;
    edades["María"] = 25;
    edades["Carlos"] = 35;

    cout << "Mapa de edades:\n";
    for (const auto& par : edades) {
        cout << "  " << par.first << ": " << par.second << " años\n";
    }

    cout << "Edad de María: " << edades["María"] << "\n";

    // Buscar
    if (edades.find("Diana") != edades.end()) {
        cout << "Diana está en el mapa\n";
    } else {
        cout << "Diana no está en el mapa\n";
    }

    // ===== SET: CONJUNTO SIN DUPLICADOS =====

    cout << "\n===== SET: CONJUNTO SIN DUPLICADOS =====\n";

    set<string> colores;
    colores.insert("Rojo");
    colores.insert("Azul");
    colores.insert("Verde");
    colores.insert("Azul"); // intenta agregar duplicado

    cout << "Colores (sin duplicados): ";
    for (const string& color : colores) {
        cout << color << " ";
    }
    cout << "\n";
    cout << "Cantidad: " << colores.size() << "\n";

    // Buscar
    if (colores.count("Rojo") > 0) {
        cout << "Rojo está en el conjunto\n";
    }

    // ===== UNORDERED_MAP: ACCESO O(1) =====

    cout << "\n===== UNORDERED_MAP: ACCESO O(1) =====\n";

    unordered_map<string, int> calificaciones;
    calificaciones["Ana"] = 95;
    calificaciones["Bruno"] = 87;
    calificaciones["Carlos"] = 92;

    cout << "Calificaciones:\n";
    for (const auto& par : calificaciones) {
        cout << "  " << par.first << ": " << par.second << "\n";
    }

    // ===== STACK: LIFO (LAST IN FIRST OUT) =====

    cout << "\n===== STACK: LIFO (LAST IN FIRST OUT) =====\n";

    stack<int> pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);

    cout << "Stack (orden de salida): ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << "\n";

    // ===== QUEUE: FIFO (FIRST IN FIRST OUT) =====

    cout << "\n===== QUEUE: FIFO (FIRST IN FIRST OUT) =====\n";

    queue<int> cola;
    cola.push(10);
    cola.push(20);
    cola.push(30);

    cout << "Queue (orden de salida): ";
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << "\n";

    // ===== ALGORITMOS: SORT =====

    cout << "\n===== ALGORITMOS: SORT =====\n";

    vector<int> numerosSinOrden = {45, 12, 78, 23, 56, 89, 34};
    cout << "Antes: ";
    for (int n : numerosSinOrden) cout << n << " ";
    cout << "\n";

    sort(numerosSinOrden.begin(), numerosSinOrden.end());
    cout << "Después: ";
    for (int n : numerosSinOrden) cout << n << " ";
    cout << "\n";

    // Ordenar al revés
    sort(numerosSinOrden.rbegin(), numerosSinOrden.rend());
    cout << "Orden inverso: ";
    for (int n : numerosSinOrden) cout << n << " ";
    cout << "\n";

    // ===== ALGORITMOS: FIND =====

    cout << "\n===== ALGORITMOS: FIND =====\n";

    vector<int> valores = {10, 20, 30, 40, 50};
    int buscar = 30;

    auto it = find(valores.begin(), valores.end(), buscar);
    if (it != valores.end()) {
        cout << "Encontrado " << buscar << " en posición " << (it - valores.begin()) << "\n";
    } else {
        cout << buscar << " no encontrado\n";
    }

    // ===== ALGORITMOS: COUNT =====

    cout << "\n===== ALGORITMOS: COUNT =====\n";

    vector<int> numComunes = {1, 2, 2, 3, 2, 4, 2, 5};
    int contar = 2;
    int cantidad = count(numComunes.begin(), numComunes.end(), contar);
    cout << "El número " << contar << " aparece " << cantidad << " veces\n";

    // ===== ALGORITMOS: TRANSFORM =====

    cout << "\n===== ALGORITMOS: TRANSFORM (CON LAMBDA) =====\n";

    vector<int> numOriginal = {1, 2, 3, 4, 5};
    vector<int> numDuplicado(numOriginal.size());

    transform(numOriginal.begin(), numOriginal.end(),
              numDuplicado.begin(),
              [](int x) { return x * 2; }); // lambda que duplica

    cout << "Original: ";
    for (int n : numOriginal) cout << n << " ";
    cout << "\n";

    cout << "Duplicado: ";
    for (int n : numDuplicado) cout << n << " ";
    cout << "\n";

    // ===== ITERADORES =====

    cout << "\n===== ITERADORES =====\n";

    vector<string> palabras = {"hola", "mundo", "c++"};
    cout << "Recorrido con iterador:\n";
    for (auto it = palabras.begin(); it != palabras.end(); ++it) {
        cout << "  " << *it << "\n";
    }

    // ===== LAMBDAS CON STL =====

    cout << "\n===== LAMBDAS CON STL (C++11) =====\n";

    vector<int> numeros2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Contar pares usando lambda
    int pares = count_if(numeros2.begin(), numeros2.end(),
                         [](int x) { return x % 2 == 0; });
    cout << "Cantidad de números pares: " << pares << "\n";

    // Filtrar números mayores a 5
    vector<int> mayoresA5;
    copy_if(numeros2.begin(), numeros2.end(), back_inserter(mayoresA5),
            [](int x) { return x > 5; });

    cout << "Números mayores a 5: ";
    for (int n : mayoresA5) cout << n << " ";
    cout << "\n";

    // ===== RESUMEN DE COMPLEJIDADES =====

    cout << "\n===== RESUMEN DE COMPLEJIDADES =====\n";
    cout << "Vector:       O(1) acceso, O(n) búsqueda\n";
    cout << "Map:          O(log n) inserción y búsqueda\n";
    cout << "Set:          O(log n) inserción y búsqueda\n";
    cout << "Unordered Map: O(1) inserción y búsqueda (promedio)\n";
    cout << "Stack:        O(1) push y pop\n";
    cout << "Queue:        O(1) push y pop\n";

    return 0;
}
