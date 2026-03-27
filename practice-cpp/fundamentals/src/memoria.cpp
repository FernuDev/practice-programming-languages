#include <iostream>
#include <memory>

using namespace std;

// ===== CLASE SIMPLE PARA DEMOSTRACIÓN =====

class Persona {
private:
    string nombre;

public:
    Persona(string nombre) {
        this->nombre = nombre;
        cout << "Constructor: Persona " << nombre << " creada\n";
    }

    ~Persona() {
        cout << "Destructor: Persona " << nombre << " eliminada\n";
    }

    void presentarse() {
        cout << "Hola, soy " << nombre << "\n";
    }

    string obtenerNombre() {
        return nombre;
    }
};

int main() {

    // ===== NEW Y DELETE: ASIGNACIÓN DINÁMICA =====

    cout << "\n===== NEW Y DELETE: ASIGNACIÓN DINÁMICA =====\n";

    cout << "Creando objeto en stack:\n";
    Persona personaStack("Juan");
    personaStack.presentarse();

    cout << "\nCreando objeto en heap con new:\n";
    Persona* personaHeap = new Persona("María");
    personaHeap->presentarse();

    cout << "\nLiberando objeto del heap con delete:\n";
    delete personaHeap;
    personaHeap = nullptr; // buena práctica

    // ===== NEW[] Y DELETE[] PARA ARRAYS =====

    cout << "\n===== NEW[] Y DELETE[] PARA ARRAYS =====\n";

    int tamanio = 5;
    int* arrayDinamico = new int[tamanio];

    cout << "Inicializando array dinámico:\n";
    for (int i = 0; i < tamanio; i++) {
        arrayDinamico[i] = (i + 1) * 10;
    }

    cout << "Array: ";
    for (int i = 0; i < tamanio; i++) {
        cout << arrayDinamico[i] << " ";
    }
    cout << "\n";

    cout << "Liberando array con delete[]:\n";
    delete[] arrayDinamico; // nota: delete[], no delete
    arrayDinamico = nullptr;

    // ===== MEMORY LEAK: QUÉ ES =====

    cout << "\n===== MEMORY LEAK: QUÉ EVITAR =====\n";

    cout << "Ejemplo de memory leak (comentado para evitar pérdida de memoria):\n";
    cout << "// Persona* personaLeak = new Persona(\"Pedro\");\n";
    cout << "// delete personaLeak;  // ¡Se olvidó de esto!\n";
    cout << "// personaLeak = nullptr;\n";

    // ===== UNIQUE_PTR: PROPIEDAD EXCLUSIVA =====

    cout << "\n===== UNIQUE_PTR: PROPIEDAD EXCLUSIVA (C++11) =====\n";

    cout << "Creando unique_ptr:\n";
    unique_ptr<Persona> ptrUnico(new Persona("Carlos"));
    ptrUnico->presentarse();

    cout << "unique_ptr se destruye automáticamente al salir del scope\n";
    ptrUnico.reset(); // manualmente liberar si es necesario

    // ===== MAKE_UNIQUE: FORMA SEGURA (C++14) =====

    cout << "\n===== MAKE_UNIQUE: FORMA SEGURA (C++14) =====\n";

    cout << "Creando unique_ptr con make_unique:\n";
    auto ptrUnico2 = make_unique<Persona>("Diana");
    ptrUnico2->presentarse();
    cout << "Se destruye automáticamente\n";

    // ===== SHARED_PTR: PROPIEDAD COMPARTIDA =====

    cout << "\n===== SHARED_PTR: PROPIEDAD COMPARTIDA (C++11) =====\n";

    cout << "Creando shared_ptr:\n";
    shared_ptr<Persona> ptrCompartido1(new Persona("Elena"));
    ptrCompartido1->presentarse();

    cout << "Compartiendo propiedad:\n";
    shared_ptr<Persona> ptrCompartido2 = ptrCompartido1;

    cout << "Conteo de referencias: " << ptrCompartido1.use_count() << "\n";
    cout << "Las referencias se decrementan cuando salen del scope\n";

    // ===== MAKE_SHARED: FORMA SEGURA (C++11) =====

    cout << "\n===== MAKE_SHARED: FORMA SEGURA (C++11) =====\n";

    auto ptrCompartido3 = make_shared<Persona>("Francisco");
    ptrCompartido3->presentarse();

    auto ptrCompartido4 = ptrCompartido3;
    cout << "Conteo de referencias: " << ptrCompartido3.use_count() << "\n";

    // ===== RAII: RESOURCE ACQUISITION IS INITIALIZATION =====

    cout << "\n===== RAII: ADQUISICIÓN DE RECURSO EN CONSTRUCTOR =====\n";

    cout << "Los smart pointers implementan RAII:\n";
    cout << "- Constructor: adquiere recurso (con new)\n";
    cout << "- Destructor: libera recurso (con delete) automáticamente\n";
    cout << "- No necesitas recordar hacer delete\n";

    // ===== NULL POINTER =====

    cout << "\n===== VERIFICAR PUNTEROS NULOS =====\n";

    unique_ptr<Persona> ptrNulo = nullptr;

    if (ptrNulo) {
        cout << "El puntero no es nulo\n";
    } else {
        cout << "El puntero es nulo, no puedo desreferenciar\n";
    }

    // ===== COMPARACIÓN: RAW VS SMART POINTERS =====

    cout << "\n===== COMPARACIÓN: RAW POINTERS VS SMART POINTERS =====\n";

    cout << "Raw pointer (manual management):\n";
    cout << "  int* ptr = new int(42);\n";
    cout << "  // ... usar ptr ...\n";
    cout << "  delete ptr;\n";
    cout << "  ptr = nullptr;\n";

    cout << "\nSmart pointer (automático):\n";
    cout << "  auto ptr = make_unique<int>(42);\n";
    cout << "  // ... usar ptr ...\n";
    cout << "  // se destruye automáticamente\n";

    // ===== RECOMENDACIÓN =====

    cout << "\n===== RECOMENDACIÓN =====\n";
    cout << "Prefiere smart pointers (unique_ptr, shared_ptr) sobre raw pointers\n";
    cout << "Son más seguros y previenen memory leaks\n";

    return 0;
}
