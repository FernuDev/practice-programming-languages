#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "\n===== PROGRAMA CON CONFIGURACIÓN =====\n";

    // Información de la aplicación (definida en CMakeLists.txt)
    cout << "\nInformación de la aplicación:\n";
    cout << "Nombre: " << APP_NAME << "\n";
    cout << "Versión: " << APP_VERSION << "\n";
    cout << "Autor: " << APP_AUTHOR << "\n";

    // Verificar configuraciones compiladas
    cout << "\nConfiguraciones habilitadas:\n";

#ifdef DEBUG_MODE
    cout << "✓ Modo DEBUG activado\n";
    cout << "  (Ejecute: cmake -B build -DENABLE_DEBUG=ON)\n";
#else
    cout << "✗ Modo DEBUG desactivado\n";
    cout << "  (Ejecute: cmake -B build -DENABLE_DEBUG=ON)\n";
#endif

#ifdef FEATURES_ENABLED
    cout << "✓ Características avanzadas habilitadas\n";
    cout << "  (Ejecute: cmake -B build -DENABLE_FEATURES=ON)\n";
#else
    cout << "✗ Características avanzadas deshabilitadas\n";
    cout << "  (Ejecute: cmake -B build -DENABLE_FEATURES=ON)\n";
#endif

#ifdef TESTS_ENABLED
    cout << "✓ Pruebas habilitadas\n";
    cout << "  (Ejecute: cmake -B build -DENABLE_TESTS=ON)\n";
#else
    cout << "✗ Pruebas deshabilitadas\n";
    cout << "  (Ejecute: cmake -B build -DENABLE_TESTS=ON)\n";
#endif

    // Ejemplo: mostrar diferentes comportamientos según configuración
    cout << "\nEjemplo de comportamiento condicional:\n";

    int numero = 42;

#ifdef DEBUG_MODE
    cout << "DEBUG: variable numero = " << numero << "\n";
#endif

#ifdef FEATURES_ENABLED
    cout << "FEATURE: Ejecutando análisis avanzado...\n";
    for (int i = 0; i < numero; i += 10) {
        cout << "  -> " << i << "\n";
    }
#else
    cout << "BÁSICO: Análisis estándar completado\n";
#endif

    cout << "\n===== CÓMO USAR =====\n";
    cout << "Comando para habilitar opciones:\n";
    cout << "  cmake -B build -DENABLE_DEBUG=ON -DENABLE_FEATURES=ON\n\n";
    cout << "Compilar:\n";
    cout << "  cmake --build build\n\n";
    cout << "Ejecutar:\n";
    cout << "  ./build/programa_config\n";

    return 0;
}
