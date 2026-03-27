#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // ===== ARRAYS C-STYLE =====

    cout << "\n===== ARRAYS C-STYLE =====\n";

    int arraySimple[5] = {10, 20, 30, 40, 50};
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arraySimple[i] << " ";
    }
    cout << "\n";

    // Acceso a elementos
    cout << "Primer elemento: " << arraySimple[0] << "\n";
    cout << "Último elemento: " << arraySimple[4] << "\n";
    cout << "Tamaño: 5\n";

    // Modificar un elemento
    arraySimple[0] = 100;
    cout << "Después de modificar: " << arraySimple[0] << "\n";

    // ===== STD::ARRAY (C++11) =====

    cout << "\n===== STD::ARRAY (C++11) =====\n";

    array<int, 4> arrayEstandar = {15, 25, 35, 45};
    cout << "std::array: ";
    for (int num : arrayEstandar) {
        cout << num << " ";
    }
    cout << "\n";
    cout << "Tamaño con .size(): " << arrayEstandar.size() << "\n";

    // ===== STD::VECTOR =====

    cout << "\n===== STD::VECTOR =====\n";

    vector<int> vector1;
    vector1.push_back(100);
    vector1.push_back(200);
    vector1.push_back(300);
    vector1.push_back(400);

    cout << "Vector: ";
    for (int val : vector1) {
        cout << val << " ";
    }
    cout << "\n";
    cout << "Tamaño: " << vector1.size() << "\n";
    cout << "Primer elemento: " << vector1[0] << "\n";
    cout << "Último elemento: " << vector1.back() << "\n";

    // Agregar más elementos
    vector1.push_back(500);
    cout << "Después de push_back(500): ";
    for (int val : vector1) {
        cout << val << " ";
    }
    cout << "\n";

    // Acceso seguro con .at()
    cout << "Acceso con .at(2): " << vector1.at(2) << "\n";

    // Eliminar último elemento
    vector1.pop_back();
    cout << "Después de pop_back(): tamaño = " << vector1.size() << "\n";

    // ===== RECORRIDO CON FOR CLÁSICO =====

    cout << "\n===== RECORRIDO CON FOR CLÁSICO =====\n";

    int calificaciones[] = {85, 92, 78, 88, 95};
    cout << "Calificaciones:\n";
    for (int i = 0; i < 5; i++) {
        cout << "  Posición " << i << ": " << calificaciones[i] << "\n";
    }

    // ===== RECORRIDO CON RANGE-BASED FOR =====

    cout << "\n===== RECORRIDO CON RANGE-BASED FOR (C++11) =====\n";

    string estudiantes[] = {"Ana", "Bruno", "Carlos", "Diana"};
    cout << "Lista de estudiantes:\n";
    for (const string& estudiante : estudiantes) {
        cout << "  - " << estudiante << "\n";
    }

    // ===== BÚSQUEDA EN VECTOR =====

    cout << "\n===== BÚSQUEDA EN VECTOR =====\n";

    vector<int> numeros2 = {10, 25, 30, 45, 50, 65};
    int buscar = 45;
    bool encontrado = false;

    for (int numero : numeros2) {
        if (numero == buscar) {
            encontrado = true;
            break;
        }
    }

    cout << "¿" << buscar << " está en el vector? " << (encontrado ? "Sí" : "No") << "\n";

    // ===== SORT: ORDENAR VECTOR =====

    cout << "\n===== SORT: ORDENAR VECTOR =====\n";

    vector<int> numerosDesordenados = {45, 12, 78, 23, 56, 89, 34};
    cout << "Antes de ordenar: ";
    for (int n : numerosDesordenados) cout << n << " ";
    cout << "\n";

    sort(numerosDesordenados.begin(), numerosDesordenados.end());
    cout << "Después de ordenar: ";
    for (int n : numerosDesordenados) cout << n << " ";
    cout << "\n";

    // Ordenar strings
    vector<string> frutas = {"Manzana", "Cereza", "Banana", "Durazno"};
    cout << "Frutas desordenadas: ";
    for (const string& f : frutas) cout << f << " ";
    cout << "\n";
    sort(frutas.begin(), frutas.end());
    cout << "Frutas ordenadas: ";
    for (const string& f : frutas) cout << f << " ";
    cout << "\n";

    // ===== SUMA Y PROMEDIO =====

    cout << "\n===== SUMA Y PROMEDIO =====\n";

    vector<int> precios = {100, 250, 150, 300, 200};
    int suma = 0;

    for (int precio : precios) {
        suma += precio;
    }

    double promedio = static_cast<double>(suma) / precios.size();
    cout << "Array de precios: ";
    for (int p : precios) cout << p << " ";
    cout << "\n";
    cout << "Suma total: " << suma << "\n";
    cout << "Promedio: " << promedio << "\n";

    // ===== MÁXIMO Y MÍNIMO =====

    cout << "\n===== MÁXIMO Y MÍNIMO =====\n";

    vector<int> temperaturas = {15, 22, 28, 18, 25, 30, 20};
    int maxima = *max_element(temperaturas.begin(), temperaturas.end());
    int minima = *min_element(temperaturas.begin(), temperaturas.end());

    cout << "Temperaturas: ";
    for (int t : temperaturas) cout << t << " ";
    cout << "\n";
    cout << "Temperatura máxima: " << maxima << "°C\n";
    cout << "Temperatura mínima: " << minima << "°C\n";

    // ===== ARRAYS MULTIDIMENSIONALES (2D - MATRIZ) =====

    cout << "\n===== ARRAYS MULTIDIMENSIONALES (MATRIZ 2D) =====\n";

    // matriz de 3 filas y 3 columnas
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matriz 3x3:\n";
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            cout << matriz[fila][columna] << " ";
        }
        cout << "\n";
    }

    cout << "Elemento en posición [1][2]: " << matriz[1][2] << "\n";

    // ===== VECTOR DE VECTORES (MATRIZ DINÁMICA) =====

    cout << "\n===== VECTOR DE VECTORES (MATRIZ DINÁMICA) =====\n";

    vector<vector<int>> matrizDinamica = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    cout << "Matriz dinámica:\n";
    for (const auto& fila : matrizDinamica) {
        for (int elem : fila) {
            cout << elem << " ";
        }
        cout << "\n";
    }

    return 0;
}
