#include <iostream>

using namespace std;

int main() {

    // ===== DIRECCIÓN DE MEMORIA CON & =====

    cout << "\n===== DIRECCIÓN DE MEMORIA CON & =====\n";

    int numeroVariable = 42;
    cout << "Variable: numeroVariable = " << numeroVariable << "\n";
    cout << "Dirección de memoria: &numeroVariable = " << &numeroVariable << "\n";
    cout << "Tamaño en bytes: sizeof(numeroVariable) = " << sizeof(numeroVariable) << "\n";

    // ===== PUNTEROS: DECLARACIÓN Y ASIGNACIÓN =====

    cout << "\n===== PUNTEROS: DECLARACIÓN Y ASIGNACIÓN =====\n";

    int* punteroAEntero; // declara un puntero a int
    punteroAEntero = &numeroVariable; // asigna la dirección de numeroVariable

    cout << "Puntero punteroAEntero = " << punteroAEntero << "\n";
    cout << "Direcciones iguales: &numeroVariable == punteroAEntero? "
         << (&numeroVariable == punteroAEntero ? "Sí" : "No") << "\n";

    // ===== DEREFERENCIA: * (acceder al valor) =====

    cout << "\n===== DEREFERENCIA: * (ACCEDER AL VALOR) =====\n";

    cout << "Valor de la variable: numeroVariable = " << numeroVariable << "\n";
    cout << "Valor a través del puntero: *punteroAEntero = " << *punteroAEntero << "\n";

    // Modificar la variable a través del puntero
    *punteroAEntero = 100;
    cout << "Después de *punteroAEntero = 100:\n";
    cout << "numeroVariable = " << numeroVariable << "\n";
    cout << "*punteroAEntero = " << *punteroAEntero << "\n";

    // ===== PUNTERO NULO: NULLPTR (C++11) =====

    cout << "\n===== PUNTERO NULO: NULLPTR (C++11) =====\n";

    int* punteroVacio = nullptr; // puntero que no apunta a nada
    cout << "Puntero nulo: punteroVacio = " << punteroVacio << "\n";
    cout << "¿Es nulo? " << (punteroVacio == nullptr ? "Sí" : "No") << "\n";

    // Antes de usar un puntero, siempre verificar que no sea nullptr
    if (punteroVacio != nullptr) {
        cout << "Valor: " << *punteroVacio << "\n"; // PELIGRO: no se ejecuta
    } else {
        cout << "No puedo desreferenciar un puntero nulo\n";
    }

    // ===== DIFERENCIA: PUNTERO VS REFERENCIA =====

    cout << "\n===== DIFERENCIA: PUNTERO VS REFERENCIA =====\n";

    int valor = 50;

    int* puntero = &valor; // puntero (puede cambiar, puede ser nulo)
    int& referencia = valor; // referencia (no puede cambiar, no puede ser nula)

    cout << "Variable: valor = " << valor << "\n";
    cout << "A través de puntero: *puntero = " << *puntero << "\n";
    cout << "A través de referencia: referencia = " << referencia << "\n";

    // Modificar a través de referencia
    referencia = 75;
    cout << "Después de referencia = 75: valor = " << valor << "\n";

    // ===== PUNTERO A PUNTERO =====

    cout << "\n===== PUNTERO A PUNTERO =====\n";

    int numeroOriginal = 123;
    int* puntero1 = &numeroOriginal; // puntero a int
    int** puntero2 = &puntero1; // puntero a puntero

    cout << "numeroOriginal = " << numeroOriginal << "\n";
    cout << "*puntero1 = " << *puntero1 << "\n";
    cout << "**puntero2 = " << **puntero2 << "\n";

    // ===== ARITMÉTICA DE PUNTEROS =====

    cout << "\n===== ARITMÉTICA DE PUNTEROS =====\n";

    int arrayNumeros[] = {10, 20, 30, 40, 50};
    int* ptrArray = arrayNumeros; // puntero al primer elemento

    cout << "Array: 10 20 30 40 50\n";
    cout << "*ptrArray (elemento [0]): " << *ptrArray << "\n";
    cout << "*(ptrArray + 1) (elemento [1]): " << *(ptrArray + 1) << "\n";
    cout << "*(ptrArray + 2) (elemento [2]): " << *(ptrArray + 2) << "\n";

    // Incrementar el puntero
    cout << "\nIncremento de puntero:\n";
    ptrArray++; // mueve el puntero al siguiente elemento
    cout << "*ptrArray (ahora apunta a [1]): " << *ptrArray << "\n";
    ptrArray += 2; // mueve el puntero 2 posiciones adelante
    cout << "*ptrArray (ahora apunta a [3]): " << *ptrArray << "\n";

    // ===== ASIGNACIÓN DINÁMICA: NEW =====

    cout << "\n===== ASIGNACIÓN DINÁMICA: NEW =====\n";

    int* punteroHeap = new int; // asigna memoria en el heap
    *punteroHeap = 999; // asigna valor

    cout << "Valor en heap: *punteroHeap = " << *punteroHeap << "\n";
    cout << "Dirección en heap: punteroHeap = " << punteroHeap << "\n";

    // IMPORTANTE: liberar la memoria cuando ya no se usa
    delete punteroHeap; // libera la memoria
    punteroHeap = nullptr; // buena práctica: establecer a nullptr

    cout << "Después de delete y nullptr: punteroHeap = " << punteroHeap << "\n";

    // ===== PUNTERO A FUNCIÓN =====

    cout << "\n===== PUNTERO A FUNCIÓN =====\n";

    // Función simple
    auto sumarDos = [](int a, int b) -> int { return a + b; };

    // En C puro sería más complejo, pero con lambdas es más simple
    cout << "Resultado de función: " << sumarDos(5, 3) << "\n";

    // ===== ARRAYS DINÁMICOS =====

    cout << "\n===== ARRAYS DINÁMICOS CON NEW[] =====\n";

    int tamanio = 5;
    int* arrayDinamico = new int[tamanio]; // asigna array en heap

    // Inicializar
    for (int i = 0; i < tamanio; i++) {
        arrayDinamico[i] = (i + 1) * 10;
    }

    cout << "Array dinámico: ";
    for (int i = 0; i < tamanio; i++) {
        cout << arrayDinamico[i] << " ";
    }
    cout << "\n";

    delete[] arrayDinamico; // libera el array dinámico (nota: delete[], no delete)
    arrayDinamico = nullptr;

    return 0;
}
