#include <stdio.h>

int main() {

    printf("\n===== IF / ELSE IF / ELSE =====\n");

    int calificacion = 85;
    printf("Calificación: %d\n", calificacion);

    if (calificacion >= 90) {
        printf("Resultado: A (Excelente)\n");
    } else if (calificacion >= 80) {
        printf("Resultado: B (Muy Bien)\n");
    } else if (calificacion >= 70) {
        printf("Resultado: C (Bien)\n");
    } else {
        printf("Resultado: F (Reprobado)\n");
    }

    printf("\n===== SWITCH =====\n");

    int diaSemana = 3;
    printf("Día número: %d\n", diaSemana);

    switch (diaSemana) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Día inválido\n");
    }

    printf("\n===== CONDICIONES ANIDADAS =====\n");

    int edad = 25;
    int tieneLicencia = 1; // verdadero

    if (edad >= 18) {
        printf("Es mayor de edad\n");
        if (tieneLicencia) {
            printf("Y tiene licencia para conducir\n");
        } else {
            printf("Pero no tiene licencia\n");
        }
    } else {
        printf("Es menor de edad\n");
    }

    printf("\n===== OPERADOR TERNARIO =====\n");

    int numero = 15;
    printf("%d es %s\n", numero,
           numero % 2 == 0 ? "par" : "impar");

    int minimo = 10;
    int maximo = 5;
    if (minimo > maximo) {
        int temp = minimo;
        minimo = maximo;
        maximo = temp;
    }
    printf("Ordenado: %d, %d\n", minimo, maximo);

    printf("\n===== EXPRESIONES COMPLEJAS =====\n");

    int x = 20;
    int y = 10;
    int z = 15;

    if (x > y && y < z) {
        printf("Condición AND verdadera: x > y AND y < z\n");
    }

    if (x < y || y < z) {
        printf("Condición OR verdadera: x < y OR y < z\n");
    }

    if (!(x == y)) {
        printf("Condición NOT verdadera: x NO es igual a y\n");
    }

    printf("\n===== MANEJO DE ERRORES =====\n");

    int divisor = 0;
    printf("Intentando dividir 10 entre %d\n", divisor);

    if (divisor == 0) {
        printf("Error: No se puede dividir entre cero\n");
    } else {
        printf("Resultado: %d\n", 10 / divisor);
    }

    printf("\n===== RANGO DE VALORES =====\n");

    int valor = 50;
    if (valor >= 0 && valor <= 100) {
        printf("%d está en el rango [0, 100]\n", valor);
    } else {
        printf("%d está fuera del rango [0, 100]\n", valor);
    }

    return 0;
}
