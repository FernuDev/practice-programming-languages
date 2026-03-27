#include <stdio.h>

int main() {

    printf("\n===== OPERADORES ARITMÉTICOS =====\n");

    int a = 15;
    int b = 4;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (división entera)\n", a / b);
    printf("a %% b = %d (residuo)\n", a % b);

    printf("\n===== OPERADORES RELACIONALES =====\n");

    printf("%d == %d: %s\n", a, b, a == b ? "verdadero" : "falso");
    printf("%d != %d: %s\n", a, b, a != b ? "verdadero" : "falso");
    printf("%d > %d: %s\n", a, b, a > b ? "verdadero" : "falso");
    printf("%d < %d: %s\n", a, b, a < b ? "verdadero" : "falso");
    printf("%d >= %d: %s\n", a, b, a >= b ? "verdadero" : "falso");
    printf("%d <= %d: %s\n", a, b, a <= b ? "verdadero" : "falso");

    printf("\n===== OPERADORES LÓGICOS =====\n");

    int x = 1; // verdadero en C
    int y = 0; // falso en C

    printf("x && y (AND lógico): %d\n", x && y);
    printf("x || y (OR lógico): %d\n", x || y);
    printf("!x (NOT lógico): %d\n", !x);
    printf("!y (NOT lógico): %d\n", !y);

    printf("\n===== OPERADORES DE ASIGNACIÓN =====\n");

    int numero = 10;
    printf("numero = %d\n", numero);

    numero += 5; // numero = numero + 5
    printf("numero += 5: %d\n", numero);

    numero -= 3; // numero = numero - 3
    printf("numero -= 3: %d\n", numero);

    numero *= 2; // numero = numero * 2
    printf("numero *= 2: %d\n", numero);

    numero /= 4; // numero = numero / 4
    printf("numero /= 4: %d\n", numero);

    numero %= 5; // numero = numero % 5
    printf("numero %%= 5: %d\n", numero);

    printf("\n===== OPERADORES DE INCREMENTO/DECREMENTO =====\n");

    int contador = 5;
    printf("contador = %d\n", contador);

    printf("++contador (pre-incremento): %d\n", ++contador); // incrementa, luego usa
    printf("contador post++ (post-incremento): %d\n", contador++); // usa, luego incrementa
    printf("contador ahora es: %d\n", contador);

    printf("--contador (pre-decremento): %d\n", --contador);
    printf("contador post-- (post-decremento): %d\n", contador--);
    printf("contador ahora es: %d\n", contador);

    printf("\n===== OPERADOR TERNARIO =====\n");

    int edad = 20;
    printf("¿Es mayor de edad (18+)? %s\n",
           edad >= 18 ? "Sí, es mayor" : "No, es menor");

    int mayor = a > b ? a : b;
    printf("El mayor entre %d y %d es: %d\n", a, b, mayor);

    printf("\n===== OPERADORES BITWISE =====\n");

    int bits1 = 5;   // 0101 en binario
    int bits2 = 3;   // 0011 en binario

    printf("bits1 = %d (0101), bits2 = %d (0011)\n", bits1, bits2);
    printf("%d & %d (AND bitwise) = %d (0001)\n", bits1, bits2, bits1 & bits2);
    printf("%d | %d (OR bitwise) = %d (0111)\n", bits1, bits2, bits1 | bits2);
    printf("%d ^ %d (XOR bitwise) = %d (0110)\n", bits1, bits2, bits1 ^ bits2);
    printf("~%d (NOT bitwise) = %d\n", bits1, ~bits1);
    printf("%d << 1 (desplazamiento izquierda) = %d\n", bits1, bits1 << 1);
    printf("%d >> 1 (desplazamiento derecha) = %d\n", bits1, bits1 >> 1);

    printf("\n===== OPERADOR SIZEOF =====\n");

    printf("sizeof(char) = %zu bytes\n", sizeof(char));
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));
    printf("sizeof(numero) = %zu bytes\n", sizeof(numero));

    printf("\n===== PRECEDENCIA DE OPERADORES =====\n");

    int resultado1 = 2 + 3 * 4;     // 2 + (3 * 4) = 14
    int resultado2 = (2 + 3) * 4;   // (2 + 3) * 4 = 20

    printf("2 + 3 * 4 = %d (multiplicación primero)\n", resultado1);
    printf("(2 + 3) * 4 = %d (paréntesis primero)\n", resultado2);

    return 0;
}
