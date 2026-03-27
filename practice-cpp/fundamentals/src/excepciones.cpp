#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// ===== EXCEPCIÓN PERSONALIZADA =====

class CuentaInsuficienteException : public exception {
private:
    string mensaje;

public:
    CuentaInsuficienteException(double saldo, double monto) {
        mensaje = "Saldo insuficiente. Saldo: " + to_string(saldo) +
                  ", Intenta retirar: " + to_string(monto);
    }

    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

// ===== CLASE CON EXCEPCIONES =====

class CuentaBancaria {
private:
    string titular;
    double saldo;

public:
    CuentaBancaria(string nombre, double saldoInicial) : titular(nombre), saldo(saldoInicial) {}

    void depositar(double monto) {
        if (monto <= 0) {
            throw invalid_argument("El monto debe ser positivo");
        }
        saldo += monto;
        cout << "Depósito de " << monto << " realizado. Nuevo saldo: " << saldo << "\n";
    }

    void retirar(double monto) {
        if (monto <= 0) {
            throw invalid_argument("El monto debe ser positivo");
        }
        if (monto > saldo) {
            throw CuentaInsuficienteException(saldo, monto);
        }
        saldo -= monto;
        cout << "Retiro de " << monto << " realizado. Nuevo saldo: " << saldo << "\n";
    }

    double obtenerSaldo() const {
        return saldo;
    }

    string obtenerTitular() const {
        return titular;
    }
};

int main() {

    // ===== TRY/CATCH BÁSICO =====

    cout << "\n===== TRY/CATCH BÁSICO =====\n";

    try {
        int numero = 10;
        int divisor = 0;

        if (divisor == 0) {
            throw runtime_error("No se puede dividir entre cero");
        }

        cout << "Resultado: " << numero / divisor << "\n";
    }
    catch (const runtime_error& e) {
        cout << "Error capturado: " << e.what() << "\n";
    }

    // ===== EXCEPCIONES ESTÁNDAR =====

    cout << "\n===== EXCEPCIONES ESTÁNDAR =====\n";

    // invalid_argument
    try {
        cout << "Intentando crear un vector con tamaño negativo...\n";
        if (-5 < 0) {
            throw invalid_argument("El tamaño no puede ser negativo");
        }
    }
    catch (const invalid_argument& e) {
        cout << "Capturado: " << e.what() << "\n";
    }

    // out_of_range
    try {
        vector<int> numeros = {1, 2, 3, 4, 5};
        cout << "Intentando acceder a índice fuera de rango...\n";
        int valor = numeros.at(10); // at() lanza out_of_range
    }
    catch (const out_of_range& e) {
        cout << "Capturado: " << e.what() << "\n";
    }

    // ===== MÚLTIPLES CATCH =====

    cout << "\n===== MÚLTIPLES CATCH =====\n";

    try {
        cout << "Ingrese un tipo de excepción (1=invalid, 2=range, 3=logic): ";
        int tipo = 2;

        if (tipo == 1) {
            throw invalid_argument("Argumento inválido");
        } else if (tipo == 2) {
            throw out_of_range("Índice fuera de rango");
        } else if (tipo == 3) {
            throw logic_error("Error lógico");
        }
    }
    catch (const invalid_argument& e) {
        cout << "Error de argumento: " << e.what() << "\n";
    }
    catch (const out_of_range& e) {
        cout << "Error de rango: " << e.what() << "\n";
    }
    catch (const logic_error& e) {
        cout << "Error lógico: " << e.what() << "\n";
    }
    catch (const exception& e) {
        cout << "Excepción genérica: " << e.what() << "\n";
    }

    // ===== EXCEPCIONES PERSONALIZADAS =====

    cout << "\n===== EXCEPCIONES PERSONALIZADAS =====\n";

    CuentaBancaria cuenta("Juan Pérez", 1000.0);
    cout << "Cuenta creada para " << cuenta.obtenerTitular() << "\n";
    cout << "Saldo inicial: $" << cuenta.obtenerSaldo() << "\n\n";

    try {
        cout << "Intentando depositar -500...\n";
        cuenta.depositar(-500);
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << "\n\n";
    }

    try {
        cout << "Depositando 500...\n";
        cuenta.depositar(500);
        cout << "\n";
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << "\n\n";
    }

    try {
        cout << "Intentando retirar $2000 (saldo es $" << cuenta.obtenerSaldo() << ")...\n";
        cuenta.retirar(2000);
    }
    catch (const CuentaInsuficienteException& e) {
        cout << "Error personalizado: " << e.what() << "\n\n";
    }

    try {
        cout << "Retirando $800...\n";
        cuenta.retirar(800);
        cout << "\n";
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << "\n\n";
    }

    // ===== THROW Y RE-LANZAR =====

    cout << "\n===== THROW Y RE-LANZAR EXCEPCIONES =====\n";

    try {
        try {
            cout << "Lanzando excepción en bloque interno...\n";
            throw runtime_error("Error en función");
        }
        catch (const exception& e) {
            cout << "Capturado en nivel 1: " << e.what() << "\n";
            cout << "Re-lanzando...\n";
            throw; // re-lanza la misma excepción
        }
    }
    catch (const exception& e) {
        cout << "Capturado en nivel 2: " << e.what() << "\n";
    }

    // ===== NOEXCEPT =====

    cout << "\n===== FUNCIÓN NOEXCEPT =====\n";

    auto funcionSegura = [](int x) noexcept -> int {
        return x * 2; // No puede lanzar excepciones
    };

    cout << "Función noexcept: 5 * 2 = " << funcionSegura(5) << "\n";
    cout << "Especificador noexcept garantiza que no hay excepciones\n";

    // ===== FINALLY CON DESTRUTORES =====

    cout << "\n===== RAII: LIMPIEZA AUTOMÁTICA CON DESTRUCTORES =====\n";

    class Archivo {
    private:
        string nombre;

    public:
        Archivo(string n) : nombre(n) {
            cout << "Abriendo archivo: " << nombre << "\n";
        }

        ~Archivo() {
            cout << "Cerrando archivo: " << nombre << " (destructor llamado)\n";
        }
    };

    try {
        Archivo archivo("datos.txt");
        cout << "Trabajando con el archivo...\n";
        throw runtime_error("Algo salió mal");
    }
    catch (const exception& e) {
        cout << "Error capturado: " << e.what() << "\n";
        cout << "El destructor del archivo ya fue llamado automáticamente\n";
    }

    // ===== RESUMEN =====

    cout << "\n===== RESUMEN DE EXCEPCIONES =====\n";
    cout << "throw: lanza una excepción\n";
    cout << "try/catch: captura y maneja excepciones\n";
    cout << "exception: clase base para todas las excepciones\n";
    cout << "invalid_argument: argumento inválido\n";
    cout << "out_of_range: índice fuera de rango\n";
    cout << "runtime_error: error en tiempo de ejecución\n";
    cout << "logic_error: error lógico\n";
    cout << "noexcept: especifica que una función no lanza excepciones\n";
    cout << "RAII: destructores se llaman automáticamente para limpiar recursos\n";

    return 0;
}
