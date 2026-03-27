#include <iostream>
#include <string>

using namespace std;

int main() {

    // ===== ESTRUCTURA IF / ELSE IF / ELSE =====

    cout << "\n===== IF / ELSE IF / ELSE =====\n";

    int calificacion = 85;
    cout << "Calificación: " << calificacion << "\n";

    if (calificacion >= 90) {
        cout << "Grado: A (Excelente)\n";
    } else if (calificacion >= 80) {
        cout << "Grado: B (Bueno)\n";
    } else if (calificacion >= 70) {
        cout << "Grado: C (Satisfactorio)\n";
    } else if (calificacion >= 60) {
        cout << "Grado: D (Suficiente)\n";
    } else {
        cout << "Grado: F (Reprobado)\n";
    }

    // ===== SWITCH STATEMENT =====

    cout << "\n===== SWITCH STATEMENT =====\n";

    int diaSemana = 3;
    string nombreDia;

    switch (diaSemana) {
        case 1:
            nombreDia = "Lunes";
            break;
        case 2:
            nombreDia = "Martes";
            break;
        case 3:
            nombreDia = "Miércoles";
            break;
        case 4:
            nombreDia = "Jueves";
            break;
        case 5:
            nombreDia = "Viernes";
            break;
        case 6:
            nombreDia = "Sábado";
            break;
        case 7:
            nombreDia = "Domingo";
            break;
        default:
            nombreDia = "Día inválido";
    }

    cout << "Día " << diaSemana << ": " << nombreDia << "\n";

    // ===== SWITCH CON STRINGS (C++17 requiere auxiliares) =====

    cout << "\n===== SWITCH CON STRINGS (usando if/else) =====\n";

    string estacion = "verano";
    string temperatura;

    if (estacion == "primavera") {
        temperatura = "Templado (15-20°C)";
    } else if (estacion == "verano") {
        temperatura = "Cálido (25-35°C)";
    } else if (estacion == "otoño") {
        temperatura = "Fresco (10-15°C)";
    } else if (estacion == "invierno") {
        temperatura = "Frío (0-10°C)";
    } else {
        temperatura = "Estación desconocida";
    }

    cout << "En " << estacion << ": " << temperatura << "\n";

    // ===== COMPARACIÓN: IF vs SWITCH =====

    cout << "\n===== COMPARACIÓN: IF vs SWITCH =====\n";

    int horaDelDia = 14;

    // Opción 1: if/else
    string periodoIfElse;
    if (horaDelDia >= 6 && horaDelDia < 12) {
        periodoIfElse = "Mañana";
    } else if (horaDelDia >= 12 && horaDelDia < 18) {
        periodoIfElse = "Tarde";
    } else if (horaDelDia >= 18 && horaDelDia < 24) {
        periodoIfElse = "Noche";
    } else {
        periodoIfElse = "Madrugada";
    }
    cout << "Hora " << horaDelDia << " (if/else): " << periodoIfElse << "\n";

    // Opción 2: switch (divide la hora entre 6)
    string periodoSwitch;
    switch (horaDelDia / 6) {
        case 0:
            periodoSwitch = "Madrugada";
            break;
        case 1:
            periodoSwitch = "Mañana";
            break;
        case 2:
            periodoSwitch = "Tarde";
            break;
        case 3:
            periodoSwitch = "Noche";
            break;
        default:
            periodoSwitch = "Hora inválida";
    }
    cout << "Hora " << horaDelDia << " (switch): " << periodoSwitch << "\n";

    // ===== ANIDAMIENTO DE ESTRUCTURAS =====

    cout << "\n===== ANIDAMIENTO DE ESTRUCTURAS =====\n";

    int edadUsuario = 25;
    bool tieneLicencia = true;

    if (edadUsuario >= 18) {
        cout << "Es mayor de edad\n";

        if (tieneLicencia) {
            cout << "Puede conducir\n";
        } else {
            cout << "Necesita obtener licencia para conducir\n";
        }
    } else {
        cout << "Es menor de edad, no puede conducir\n";
    }

    // ===== OPERADOR TERNARIO COMO ALTERNATIVA A IF =====

    cout << "\n===== OPERADOR TERNARIO COMO ALTERNATIVA =====\n";

    int numeroTernario = 10;
    string esPositivo = (numeroTernario > 0) ? "Es positivo" : (numeroTernario < 0) ? "Es negativo" : "Es cero";
    cout << numeroTernario << ": " << esPositivo << "\n";

    return 0;
}
