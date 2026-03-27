#include <iostream>

using namespace std;

// ===== CLASE BASE: ANIMAL =====

class Animal {
protected:
    string nombre;

public:
    Animal(string nombre) {
        this->nombre = nombre;
    }

    virtual void hacerSonido() {
        cout << nombre << " hace un sonido genérico\n";
    }

    virtual void descripcion() {
        cout << "Soy un animal llamado " << nombre << "\n";
    }

    virtual ~Animal() {
        // Destructor virtual (buena práctica en clases base)
    }
};

// ===== CLASE DERIVADA: PERRO =====

class Perro : public Animal {
private:
    string raza;

public:
    Perro(string nombre, string raza) : Animal(nombre) {
        this->raza = raza;
    }

    void hacerSonido() override {
        cout << nombre << " ladra: ¡Guau guau!\n";
    }

    void traerObjeto() {
        cout << nombre << " va a traer el objeto\n";
    }

    void descripcion() override {
        cout << "Soy un perro de raza " << raza << " llamado " << nombre << "\n";
    }
};

// ===== CLASE DERIVADA: GATO =====

class Gato : public Animal {
private:
    string raza;

public:
    Gato(string nombre, string raza) : Animal(nombre) {
        this->raza = raza;
    }

    void hacerSonido() override {
        cout << nombre << " maúlla: ¡Miau miau!\n";
    }

    void rasgunar() {
        cout << nombre << " está raspando con sus garras\n";
    }

    void descripcion() override {
        cout << "Soy un gato de raza " << raza << " llamado " << nombre << "\n";
    }
};

// ===== CLASE DERIVADA: PAJARO =====

class Pajaro : public Animal {
private:
    string especie;

public:
    Pajaro(string nombre, string especie) : Animal(nombre) {
        this->especie = especie;
    }

    void hacerSonido() override {
        cout << nombre << " canta: ¡Pío pío!\n";
    }

    void volar() {
        cout << nombre << " está volando por el cielo\n";
    }

    void descripcion() override {
        cout << "Soy un " << especie << " llamado " << nombre << "\n";
    }
};

// ===== MAIN =====

int main() {

    // ===== CREAR INSTANCIAS DE CLASES CON HERENCIA =====

    cout << "\n===== HERENCIA Y POLIMORFISMO =====\n";

    Animal animal("Genérico");
    animal.hacerSonido();
    animal.descripcion();

    cout << "\n";

    Perro perro("Rocky", "Labrador");
    perro.hacerSonido();
    perro.descripcion();
    perro.traerObjeto();

    cout << "\n";

    Gato gato("Miau", "Persa");
    gato.hacerSonido();
    gato.descripcion();
    gato.rasgunar();

    cout << "\n";

    Pajaro pajaro("Tweety", "Canario");
    pajaro.hacerSonido();
    pajaro.descripcion();
    pajaro.volar();

    // ===== POLIMORFISMO: TRATAR OBJETOS COMO SU CLASE BASE =====

    cout << "\n===== POLIMORFISMO =====\n";

    // Array de punteros a Animal
    Animal* animales[] = {
        &perro,
        &gato,
        &pajaro,
        &animal
    };

    cout << "Polimorfismo: llamar hacerSonido() en cada animal:\n";
    for (int i = 0; i < 4; i++) {
        animales[i]->hacerSonido();
    }

    cout << "\n";

    cout << "Polimorfismo: llamar descripcion() en cada animal:\n";
    for (int i = 0; i < 4; i++) {
        animales[i]->descripcion();
    }

    // ===== CAST A TIPO DERIVADO (DOWNCAST) =====

    cout << "\n===== DOWNCAST: CONVERTIR PUNTERO BASE A DERIVADA =====\n";

    Animal* ptrAnimal = &perro;

    // Downcast: convertir puntero base a puntero derivado
    // En C++ usaríamos dynamic_cast en entornos reales
    Perro* ptrPerro = static_cast<Perro*>(ptrAnimal);

    cout << "Acceso a método específico de Perro:\n";
    ptrPerro->traerObjeto();

    return 0;
}
