#include <iostream>
#include <limits>

using namespace std;

int main() {

    // ===== TIPOS PRIMITIVOS ENTEROS =====

    cout << "\n===== TIPOS PRIMITIVOS ENTEROS =====\n";

    // byte no existe en C++ como en Java, pero char puede usarse (1 byte)
    char unByte = 65; // ASCII 65 = 'A'
    cout << "char (1 byte): " << unByte << " (valor: " << (int)unByte << ")\n";

    // short: 2 bytes
    short temperaturaMinima = -5;
    cout << "short (2 bytes): " << temperaturaMinima << "\n";

    // int: 4 bytes (típicamente)
    int poblacionCiudad = 5000000;
    cout << "int (4 bytes): " << poblacionCiudad << "\n";

    // long: generalmente 8 bytes
    long distanciaAlSol = 149600000L;
    cout << "long (8 bytes): " << distanciaAlSol << "\n";

    // ===== TIPOS PRIMITIVOS DECIMALES =====

    cout << "\n===== TIPOS PRIMITIVOS DECIMALES =====\n";

    // float: 4 bytes, precisión simple
    float precioProducto = 19.99f;
    cout << "float (4 bytes): " << precioProducto << "\n";

    // double: 8 bytes, precisión doble (predeterminado para literales decimales)
    double piValue = 3.14159265359;
    cout << "double (8 bytes): " << piValue << "\n";

    // ===== TIPO PRIMITIVO CARÁCTER =====

    cout << "\n===== TIPO PRIMITIVO CARÁCTER =====\n";

    // char: 1 byte, almacena un carácter (o su código ASCII)
    char primerLetra = 'A';
    cout << "char (letra): " << primerLetra << "\n";

    // ===== TIPO PRIMITIVO BOOLEANO =====

    cout << "\n===== TIPO PRIMITIVO BOOLEANO =====\n";

    // bool: almacena true o false
    bool esActivo = true;
    cout << "bool (true/false): " << (esActivo ? "true" : "false") << "\n";

    // ===== AUTO: DEDUCCIÓN DE TIPOS (C++11) =====

    cout << "\n===== AUTO: DEDUCCIÓN DE TIPOS (C++11) =====\n";

    auto numeroAuto = 42; // se deduce como int
    auto decimalAuto = 3.14; // se deduce como double
    auto textoAuto = "Hola"; // se deduce como const char*

    cout << "auto numero: " << numeroAuto << "\n";
    cout << "auto decimal: " << decimalAuto << "\n";
    cout << "auto texto: " << textoAuto << "\n";

    // ===== CONST Y CONSTEXPR =====

    cout << "\n===== CONST Y CONSTEXPR =====\n";

    // const: la variable no puede cambiar después de inicializarse
    const int VELOCIDAD_LUZ = 299792458; // m/s
    const double CONSTANTE_GRAVITATORIA = 6.67430e-11;

    cout << "const VELOCIDAD_LUZ: " << VELOCIDAD_LUZ << " m/s\n";
    cout << "const CONSTANTE_GRAVITATORIA: " << CONSTANTE_GRAVITATORIA << "\n";

    // constexpr: constante evaluada en tiempo de compilación (C++11)
    constexpr int NUMERO_DIAS_POR_SEMANA = 7;
    cout << "constexpr NUMERO_DIAS_POR_SEMANA: " << NUMERO_DIAS_POR_SEMANA << "\n";

    // ===== INICIALIZACIÓN UNIFORME (C++11) =====

    cout << "\n===== INICIALIZACIÓN UNIFORME CON {} (C++11) =====\n";

    int numeroUniforme{100}; // inicialización uniforme
    double decimalUniforme{3.14};
    bool flagUniforme{false};

    cout << "int uniforme: " << numeroUniforme << "\n";
    cout << "double uniforme: " << decimalUniforme << "\n";
    cout << "bool uniforme: " << (flagUniforme ? "true" : "false") << "\n";

    // ===== SIZEOF: TAMAÑO EN BYTES =====

    cout << "\n===== SIZEOF: TAMAÑO EN BYTES =====\n";

    cout << "sizeof(char): " << sizeof(char) << " bytes\n";
    cout << "sizeof(short): " << sizeof(short) << " bytes\n";
    cout << "sizeof(int): " << sizeof(int) << " bytes\n";
    cout << "sizeof(long): " << sizeof(long) << " bytes\n";
    cout << "sizeof(float): " << sizeof(float) << " bytes\n";
    cout << "sizeof(double): " << sizeof(double) << " bytes\n";
    cout << "sizeof(bool): " << sizeof(bool) << " bytes\n";

    // ===== RANGOS DE VALORES =====

    cout << "\n===== RANGOS DE VALORES (numeric_limits) =====\n";

    cout << "short: " << numeric_limits<short>::min() << " a " << numeric_limits<short>::max() << "\n";
    cout << "int: " << numeric_limits<int>::min() << " a " << numeric_limits<int>::max() << "\n";
    cout << "long: " << numeric_limits<long>::min() << " a " << numeric_limits<long>::max() << "\n";
    cout << "float: " << numeric_limits<float>::min() << " a " << numeric_limits<float>::max() << "\n";
    cout << "double: " << numeric_limits<double>::min() << " a " << numeric_limits<double>::max() << "\n";

    // ===== OVERFLOW Y UNDERFLOW =====

    cout << "\n===== OVERFLOW Y UNDERFLOW =====\n";

    short numeroCorto = 32767; // máximo para short
    cout << "short máximo: " << numeroCorto << "\n";
    numeroCorto++; // overflow: se vuelve negativo
    cout << "después de overflow: " << numeroCorto << "\n";

    return 0;
}
