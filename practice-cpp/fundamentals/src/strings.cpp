#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    // ===== CREACIÓN DE STRINGS =====

    cout << "\n===== CREACIÓN DE STRINGS =====\n";

    string texto1 = "Hola mundo";
    string texto2("Hola desde constructor");
    string texto3(5, 'A'); // 5 veces el carácter 'A'

    cout << "texto1: " << texto1 << "\n";
    cout << "texto2: " << texto2 << "\n";
    cout << "texto3: " << texto3 << "\n";

    // ===== MÉTODO LENGTH() Y SIZE() =====

    cout << "\n===== MÉTODO LENGTH() Y SIZE() =====\n";

    string palabra = "Java";
    int longitud = palabra.length();
    cout << "String: \"" << palabra << "\"\n";
    cout << "Longitud: " << longitud << "\n";

    string frase = "Aprendiendo C++ es divertido";
    cout << "String: \"" << frase << "\"\n";
    cout << "Longitud: " << frase.length() << "\n";

    // ===== MÉTODO FIND(): BUSCAR SUBSTRING =====

    cout << "\n===== MÉTODO FIND(): BUSCAR SUBSTRING =====\n";

    string oracion = "El gato está en la casa";
    cout << "String: \"" << oracion << "\"\n";

    size_t posicion = oracion.find("gato");
    cout << "Posición de \"gato\": " << posicion << "\n";

    size_t posicionNoEncontrada = oracion.find("perro");
    cout << "Posición de \"perro\" (no existe): " << posicionNoEncontrada << "\n";

    // ===== MÉTODO SUBSTR(): EXTRAER SUBSTRING =====

    cout << "\n===== MÉTODO SUBSTR(): EXTRAER SUBSTRING =====\n";

    string frase2 = "Programación en C++";
    cout << "String original: \"" << frase2 << "\"\n";

    string parte1 = frase2.substr(0, 12); // desde posición 0, 12 caracteres
    cout << "substr(0, 12): \"" << parte1 << "\"\n";

    string parte2 = frase2.substr(17, 3); // desde posición 17, 3 caracteres
    cout << "substr(17, 3): \"" << parte2 << "\"\n";

    // ===== MÉTODO REPLACE(): REEMPLAZAR =====

    cout << "\n===== MÉTODO REPLACE(): REEMPLAZAR =====\n";

    string original = "Hola Mundo";
    cout << "String original: \"" << original << "\"\n";

    original.replace(5, 5, "C++");
    cout << "Después de replace(5, 5, \"C++\"): \"" << original << "\"\n";

    // ===== MÉTODOS TOUPPERCASE() Y TOLOWERCASE() =====

    cout << "\n===== TRANSFORM A MAYÚSCULAS/MINÚSCULAS =====\n";

    string mixto = "PrOgRaMaCióN";
    cout << "String original: \"" << mixto << "\"\n";

    string mayusculas = mixto;
    transform(mayusculas.begin(), mayusculas.end(), mayusculas.begin(), ::toupper);
    cout << "Mayúsculas: \"" << mayusculas << "\"\n";

    string minusculas = mixto;
    transform(minusculas.begin(), minusculas.end(), minusculas.begin(), ::tolower);
    cout << "Minúsculas: \"" << minusculas << "\"\n";

    // ===== MÉTODO COMPARE(): COMPARAR STRINGS =====

    cout << "\n===== MÉTODO COMPARE(): COMPARAR STRINGS =====\n";

    string a = "Apple";
    string b = "Banana";
    string c = "Apple";

    cout << "\"" << a << "\".compare(\"" << b << "\"): " << a.compare(b) << " (negativo si a < b)\n";
    cout << "\"" << b << "\".compare(\"" << a << "\"): " << b.compare(a) << " (positivo si b > a)\n";
    cout << "\"" << a << "\".compare(\"" << c << "\"): " << a.compare(c) << " (cero si son iguales)\n";

    // ===== OPERADOR == PARA COMPARACIÓN =====

    cout << "\n===== OPERADOR == PARA COMPARACIÓN =====\n";

    string password = "Seguro123";
    string passwordIngresado = "Seguro123";
    string passwordIncorrecto = "seguro123";

    cout << "password == passwordIngresado: " << (password == passwordIngresado ? "true" : "false") << "\n";
    cout << "password == passwordIncorrecto: " << (password == passwordIncorrecto ? "true" : "false") << "\n";

    // ===== MÉTODO APPEND(): CONCATENAR =====

    cout << "\n===== MÉTODO APPEND(): CONCATENAR =====\n";

    string frase3 = "Hola";
    cout << "Antes: \"" << frase3 << "\"\n";

    frase3.append(" ");
    frase3.append("Mundo");
    cout << "Después: \"" << frase3 << "\"\n";

    // ===== OPERADOR + PARA CONCATENACIÓN =====

    cout << "\n===== OPERADOR + PARA CONCATENACIÓN =====\n";

    string saludo = "Buenos " + string("días");
    cout << "Concatenado: \"" << saludo << "\"\n";

    // ===== MÉTODO TRIM() (ELIMINAR ESPACIOS AL INICIO Y FINAL) =====

    cout << "\n===== TRIM: ELIMINAR ESPACIOS AL INICIO Y FINAL =====\n";

    string conEspacios = "  Hola Mundo  ";
    cout << "String original: \"" << conEspacios << "\"\n";
    cout << "Longitud: " << conEspacios.length() << "\n";

    // En C++ no hay trim nativo, pero podemos usar substr
    size_t inicio = conEspacios.find_first_not_of(" ");
    size_t fin = conEspacios.find_last_not_of(" ");
    string trimmeado = conEspacios.substr(inicio, fin - inicio + 1);
    cout << "Después de trim: \"" << trimmeado << "\"\n";
    cout << "Longitud: " << trimmeado.length() << "\n";

    // ===== MÉTODO SPLIT() (DIVIDIR STRING) =====

    cout << "\n===== SPLIT: DIVIDIR STRING (SIMULADO) =====\n";

    string csv = "Juan,Carlos,Diana,Bruno";
    cout << "String original: \"" << csv << "\"\n";

    cout << "Dividido por coma:\n";
    stringstream ss(csv);
    string item;
    while (getline(ss, item, ',')) {
        cout << "  - " << item << "\n";
    }

    // ===== CONVERSIÓN A NÚMERO: STOI(), STOD() =====

    cout << "\n===== CONVERSIÓN A NÚMERO =====\n";

    string numeroStr = "42";
    int numeroInt = stoi(numeroStr);
    cout << "String \"" << numeroStr << "\" a int: " << numeroInt << "\n";

    string decimalStr = "3.14159";
    double numeroDouble = stod(decimalStr);
    cout << "String \"" << decimalStr << "\" a double: " << numeroDouble << "\n";

    // ===== CONVERSIÓN A STRING: TO_STRING() =====

    cout << "\n===== CONVERSIÓN A STRING =====\n";

    int numero = 42;
    double decimal = 3.14;
    string stringNumero = to_string(numero);
    string stringDecimal = to_string(decimal);

    cout << "int " << numero << " a string: \"" << stringNumero << "\"\n";
    cout << "double " << decimal << " a string: \"" << stringDecimal << "\"\n";

    // ===== GETLINE(): LEER LÍNEA COMPLETA (COMENTADO PARA DEMO) =====

    cout << "\n===== GETLINE(): LEER LÍNEA COMPLETA =====\n";
    cout << "(Saltado en esta demo para no bloquear la ejecución)\n";
    // cout << "Ingrese una línea: ";
    // string linea;
    // getline(cin, linea);
    // cout << "Usted ingresó: \"" << linea << "\"\n";

    return 0;
}
