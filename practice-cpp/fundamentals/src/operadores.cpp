#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // ===== OPERADORES ARITMÉTICOS =====

    cout << "\n===== OPERADORES ARITMÉTICOS =====\n";

    int numero1 = 20;
    int numero2 = 5;

    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int multiplicacion = numero1 * numero2;
    int division = numero1 / numero2;
    int modulo = numero1 % numero2; // residuo de la división

    cout << numero1 << " + " << numero2 << " = " << suma << "\n";
    cout << numero1 << " - " << numero2 << " = " << resta << "\n";
    cout << numero1 << " * " << numero2 << " = " << multiplicacion << "\n";
    cout << numero1 << " / " << numero2 << " = " << division << "\n";
    cout << numero1 << " % " << numero2 << " = " << modulo << "\n";

    // ===== OPERADORES RELACIONALES =====

    cout << "\n===== OPERADORES RELACIONALES =====\n";

    cout << numero1 << " == " << numero2 << " : " << (numero1 == numero2 ? "true" : "false") << "\n";
    cout << numero1 << " != " << numero2 << " : " << (numero1 != numero2 ? "true" : "false") << "\n";
    cout << numero1 << " > " << numero2 << " : " << (numero1 > numero2 ? "true" : "false") << "\n";
    cout << numero1 << " < " << numero2 << " : " << (numero1 < numero2 ? "true" : "false") << "\n";
    cout << numero1 << " >= " << numero2 << " : " << (numero1 >= numero2 ? "true" : "false") << "\n";
    cout << numero1 << " <= " << numero2 << " : " << (numero1 <= numero2 ? "true" : "false") << "\n";

    // ===== OPERADORES LÓGICOS =====

    cout << "\n===== OPERADORES LÓGICOS =====\n";

    bool condicion1 = true;
    bool condicion2 = false;

    cout << "true && false (AND): " << (condicion1 && condicion2 ? "true" : "false") << "\n";
    cout << "true || false (OR): " << (condicion1 || condicion2 ? "true" : "false") << "\n";
    cout << "!true (NOT): " << (!condicion1 ? "true" : "false") << "\n";

    // AND: ambas condiciones deben ser verdaderas
    bool loginExitoso = (numero1 > numero2) && (numero2 > 0);
    cout << "¿Login exitoso? " << (loginExitoso ? "true" : "false") << "\n";

    // OR: al menos una condición debe ser verdadera
    bool esFeriadoOFindeSemana = false || true;
    cout << "¿Es feriado o fin de semana? " << (esFeriadoOFindeSemana ? "true" : "false") << "\n";

    // ===== OPERADORES DE ASIGNACIÓN =====

    cout << "\n===== OPERADORES DE ASIGNACIÓN =====\n";

    int valor = 10;
    cout << "valor inicial: " << valor << "\n";

    valor += 5; // equivalente a: valor = valor + 5
    cout << "después de += 5: " << valor << "\n";

    valor -= 3; // equivalente a: valor = valor - 3
    cout << "después de -= 3: " << valor << "\n";

    valor *= 2; // equivalente a: valor = valor * 2
    cout << "después de *= 2: " << valor << "\n";

    valor /= 4; // equivalente a: valor = valor / 4
    cout << "después de /= 4: " << valor << "\n";

    // ===== OPERADORES DE INCREMENTO Y DECREMENTO =====

    cout << "\n===== OPERADORES DE INCREMENTO Y DECREMENTO =====\n";

    int contador = 5;
    cout << "contador inicial: " << contador << "\n";

    contador++; // incremento post-fijo
    cout << "después de contador++: " << contador << "\n";

    contador--; // decremento post-fijo
    cout << "después de contador--: " << contador << "\n";

    ++contador; // incremento pre-fijo
    cout << "después de ++contador: " << contador << "\n";

    --contador; // decremento pre-fijo
    cout << "después de --contador: " << contador << "\n";

    // Diferencia pre-fijo vs post-fijo
    int x = 5;
    int y = ++x; // incrementa x primero, luego asigna (x es 6, y es 6)
    cout << "++x: x = " << x << ", y = " << y << "\n";

    int a = 5;
    int b = a++; // asigna a primero, luego incrementa (a es 6, b es 5)
    cout << "a++: a = " << a << ", b = " << b << "\n";

    // ===== OPERADOR TERNARIO =====

    cout << "\n===== OPERADOR TERNARIO =====\n";

    int edad = 18;
    string puedeVotar = (edad >= 18) ? "Sí, puede votar" : "No, aún es menor de edad";
    cout << "¿" << edad << " años puede votar? " << puedeVotar << "\n";

    int calificacion = 75;
    string resultado = (calificacion >= 60) ? "Aprobado" : "Reprobado";
    cout << "Calificación de " << calificacion << ": " << resultado << "\n";

    // ===== OPERADORES BITWISE =====

    cout << "\n===== OPERADORES BITWISE =====\n";

    int bitA = 5; // binario: 0101
    int bitB = 3; // binario: 0011

    int bitAnd = bitA & bitB; // AND bit a bit
    int bitOr = bitA | bitB; // OR bit a bit
    int bitXor = bitA ^ bitB; // XOR bit a bit
    int bitNot = ~bitA; // NOT bit a bit
    int leftShift = bitA << 1; // desplazamiento a la izquierda
    int rightShift = bitA >> 1; // desplazamiento a la derecha

    cout << bitA << " & " << bitB << " = " << bitAnd << "\n";
    cout << bitA << " | " << bitB << " = " << bitOr << "\n";
    cout << bitA << " ^ " << bitB << " = " << bitXor << "\n";
    cout << "~" << bitA << " = " << bitNot << "\n";
    cout << bitA << " << 1 = " << leftShift << "\n";
    cout << bitA << " >> 1 = " << rightShift << "\n";

    // ===== OPERADOR SIZEOF =====

    cout << "\n===== OPERADOR SIZEOF =====\n";

    int miEntero = 42;
    cout << "sizeof(miEntero): " << sizeof(miEntero) << " bytes\n";
    cout << "sizeof(int): " << sizeof(int) << " bytes\n";
    cout << "sizeof(double): " << sizeof(double) << " bytes\n";

    return 0;
}
