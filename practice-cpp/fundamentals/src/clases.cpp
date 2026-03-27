#include <iostream>

using namespace std;

// ===== DEFINICIÓN DE CLASE PERSONA =====

class Persona {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    // Getter: obtener nombre
    string obtenerNombre() {
        return this->nombre;
    }

    // Getter: obtener edad
    int obtenerEdad() {
        return this->edad;
    }

    // Setter: establecer edad con validación
    void establecerEdad(int nuevaEdad) {
        if (nuevaEdad > 0) {
            this->edad = nuevaEdad;
        } else {
            cout << "Error: la edad no puede ser negativa\n";
        }
    }

    // Método que imprime información
    void presentarse() {
        cout << "Hola, me llamo " << nombre << " y tengo " << edad << " años\n";
    }

    // Método que compara dos personas
    bool sonIguales(Persona* otra) {
        return this->nombre == otra->nombre && this->edad == otra->edad;
    }
};

// ===== DEFINICIÓN DE CLASE CUENTA BANCARIA =====

class CuentaBancaria {
private:
    string titular;
    double saldo;

public:
    // Constructor
    CuentaBancaria(string titular, double saldoInicial) {
        this->titular = titular;
        this->saldo = saldoInicial;
        cout << "Cuenta creada para: " << titular << "\n";
    }

    // Getter: obtener titular
    string obtenerTitular() {
        return this->titular;
    }

    // Getter: obtener saldo
    double obtenerSaldo() {
        return this->saldo;
    }

    // Método: depositar dinero
    void depositar(double cantidad) {
        if (cantidad > 0) {
            this->saldo += cantidad;
            cout << "Se depositó $" << cantidad << "\n";
        } else {
            cout << "Error: la cantidad debe ser positiva\n";
        }
    }

    // Método: retirar dinero
    void retirar(double cantidad) {
        if (cantidad > 0 && cantidad <= this->saldo) {
            this->saldo -= cantidad;
            cout << "Se retiró $" << cantidad << "\n";
        } else if (cantidad > this->saldo) {
            cout << "Error: saldo insuficiente. Saldo actual: $" << this->saldo << "\n";
        } else {
            cout << "Error: la cantidad debe ser positiva\n";
        }
    }

    // Método: mostrar estado de cuenta
    void mostrarEstado() {
        cout << "Titular: " << titular << "\n";
        cout << "Saldo: $" << saldo << "\n";
    }
};

// ===== MAIN =====

int main() {

    // ===== CREAR INSTANCIAS DE CLASES =====

    cout << "\n===== CREAR INSTANCIAS DE CLASES =====\n";

    Persona persona1("Juan", 28);
    Persona persona2("María", 25);

    cout << "Persona 1: " << persona1.obtenerNombre() << ", " << persona1.obtenerEdad() << " años\n";
    cout << "Persona 2: " << persona2.obtenerNombre() << ", " << persona2.obtenerEdad() << " años\n";

    // ===== MODIFICAR ATRIBUTOS CON SETTERS =====

    cout << "\n===== MODIFICAR ATRIBUTOS CON SETTERS =====\n";

    persona1.establecerEdad(29);
    cout << "Edad actualizada de " << persona1.obtenerNombre() << ": " << persona1.obtenerEdad() << "\n";

    // ===== MÉTODOS DE LA CLASE =====

    cout << "\n===== MÉTODOS DE LA CLASE =====\n";

    persona1.presentarse();
    persona2.presentarse();

    // ===== COMPARAR OBJETOS =====

    cout << "\n===== COMPARAR OBJETOS =====\n";

    Persona persona3("Juan", 29);
    cout << "¿persona1 y persona3 son iguales? " << (persona1.sonIguales(&persona3) ? "Sí" : "No") << "\n";

    // ===== CLASE CUENTA BANCARIA =====

    cout << "\n===== CLASE CUENTA BANCARIA =====\n";

    CuentaBancaria cuenta1("Juan Pérez", 1000.0);
    CuentaBancaria cuenta2("María García", 500.0);

    cout << "Titular: " << cuenta1.obtenerTitular() << ", Saldo: $" << cuenta1.obtenerSaldo() << "\n";
    cout << "Titular: " << cuenta2.obtenerTitular() << ", Saldo: $" << cuenta2.obtenerSaldo() << "\n";

    // ===== REALIZAR OPERACIONES BANCARIAS =====

    cout << "\n===== OPERACIONES BANCARIAS =====\n";

    cuenta1.depositar(200);
    cout << "Después de depositar $200: $" << cuenta1.obtenerSaldo() << "\n";

    cuenta1.retirar(150);
    cout << "Después de retirar $150: $" << cuenta1.obtenerSaldo() << "\n";

    // Intentar retirar más de lo disponible
    cout << "\nIntentando retirar $1000 de cuenta2 (saldo: $" << cuenta2.obtenerSaldo() << "):\n";
    cuenta2.retirar(1000);

    // ===== PUNTEROS A OBJETOS =====

    cout << "\n===== PUNTEROS A OBJETOS =====\n";

    Persona* ptrPersona = &persona1;
    cout << "Acceso a través de puntero: " << ptrPersona->obtenerNombre() << "\n";

    // Operador -> se usa en lugar de . cuando se usa puntero
    ptrPersona->presentarse();

    // ===== OBJETOS EN MEMORIA DINÁMICA =====

    cout << "\n===== OBJETOS EN MEMORIA DINÁMICA (NEW) =====\n";

    Persona* personaDinamica = new Persona("Carlos", 30);
    cout << "Persona creada en heap: " << personaDinamica->obtenerNombre() << "\n";
    personaDinamica->presentarse();

    // Liberar memoria (en aplicaciones reales, usar smart pointers es preferible)
    delete personaDinamica;
    personaDinamica = nullptr;
    cout << "Memoria liberada\n";

    return 0;
}
