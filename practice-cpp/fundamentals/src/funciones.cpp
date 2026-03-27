#include <iostream>
#include <string>

using namespace std;

// Declaración forward
int calcularFactorial(int n);
bool verificarSiEsPrimo(int numero);

int main() {

    // ===== FUNCIONES SIN RETORNO (VOID) =====

    cout << "\n===== FUNCIONES SIN RETORNO (VOID) =====\n";

    auto saludar = []() {
        cout << "Hola a todos\n";
    };
    saludar();

    auto saludarPersona = [](string persona) {
        cout << "Hola " << persona << "\n";
    };
    saludarPersona("Carlos");

    // ===== FUNCIONES CON RETORNO =====

    cout << "\n===== FUNCIONES CON RETORNO =====\n";

    auto sumarDosNumeros = [](int a, int b) -> int {
        return a + b;
    };
    int resultadoSuma = sumarDosNumeros(10, 20);
    cout << "10 + 20 = " << resultadoSuma << "\n";

    auto dividirDosNumeros = [](double a, double b) -> double {
        if (b == 0) {
            cout << "Error: no se puede dividir entre 0\n";
            return 0;
        }
        return a / b;
    };
    double resultadoDivision = dividirDosNumeros(100, 4);
    cout << "100 / 4 = " << resultadoDivision << "\n";

    // ===== PARÁMETROS Y ARGUMENTOS =====

    cout << "\n===== PARÁMETROS Y ARGUMENTOS =====\n";

    auto crearMensaje = [](string nombre, int edad) -> string {
        return "Hola, me llamo " + nombre + " y tengo " + to_string(edad) + " años";
    };
    string mensaje = crearMensaje("Juan", 25);
    cout << mensaje << "\n";

    // ===== SOBRECARGA DE FUNCIONES (OVERLOADING) =====

    cout << "\n===== SOBRECARGA DE FUNCIONES =====\n";

    auto sumar = [](int a, int b) -> int {
        return a + b;
    };

    auto sumarTres = [](int a, int b, int c) -> int {
        return a + b + c;
    };

    auto sumarDecimales = [](double a, double b) -> double {
        return a + b;
    };

    cout << "Suma de 2 números: " << sumar(5, 10) << "\n";
    cout << "Suma de 3 números: " << sumarTres(5, 10, 15) << "\n";
    cout << "Suma de números decimales: " << sumarDecimales(5.5, 10.5) << "\n";

    // ===== FUNCIONES QUE RETORNAN BOOLEAN =====

    cout << "\n===== FUNCIONES QUE RETORNAN BOOLEAN =====\n";

    auto esMayorDeEdad = [](int edad) -> bool {
        return edad >= 18;
    };

    int edadUsuario = 20;
    if (esMayorDeEdad(edadUsuario)) {
        cout << edadUsuario << " años: es mayor de edad\n";
    } else {
        cout << edadUsuario << " años: es menor de edad\n";
    }

    // ===== PARÁMETROS POR REFERENCIA =====

    cout << "\n===== PARÁMETROS POR REFERENCIA =====\n";

    auto incrementarValor = [](int& valor) {
        valor += 10;
    };

    int x = 5;
    cout << "Valor original: " << x << "\n";
    incrementarValor(x);
    cout << "Después de incrementar: " << x << "\n";

    // ===== VALORES POR DEFECTO =====

    cout << "\n===== VALORES POR DEFECTO =====\n";

    auto saludarConTitulo = [](string nombre, string titulo = "Señor") -> string {
        return "Buen día, " + titulo + " " + nombre;
    };

    cout << saludarConTitulo("García") << "\n";
    cout << saludarConTitulo("López", "Doctor") << "\n";

    // ===== RECURSIVIDAD =====

    cout << "\n===== RECURSIVIDAD =====\n";

    // recursividad: un función que se llama a sí misma
    cout << "Factorial de 5: " << calcularFactorial(5) << "\n";
    cout << "Factorial de 6: " << calcularFactorial(6) << "\n";

    // ===== FUNCIÓN PRIVADA (VERIFICAR PRIMO) =====

    cout << "\n===== FUNCIONES AUXILIARES =====\n";

    cout << "¿3 es primo? " << (verificarSiEsPrimo(3) ? "Sí" : "No") << "\n";
    cout << "¿10 es primo? " << (verificarSiEsPrimo(10) ? "Sí" : "No") << "\n";

    return 0;
}

// ===== DEFINICIÓN DE FUNCIÓN RECURSIVA =====

// factorial: 5! = 5 * 4 * 3 * 2 * 1 = 120
int calcularFactorial(int n) {
    // caso base: condición de parada para evitar recursión infinita
    if (n <= 1) {
        return 1;
    }
    // caso recursivo: la función se llama a sí misma con un parámetro más pequeño
    return n * calcularFactorial(n - 1);
}

// ===== FUNCIÓN AUXILIAR: VERIFICAR SI ES PRIMO =====

bool verificarSiEsPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return false; // encontró divisor, no es primo
        }
    }
    return true; // no encontró divisores, es primo
}
