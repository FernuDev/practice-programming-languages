#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    printf("\n===== DECLARACIÓN DE STRINGS =====\n");

    char texto1[20] = "Hola";
    char texto2[] = "Mundo en C";
    char *ptrTexto = "Puntero a string";

    printf("texto1: %s\n", texto1);
    printf("texto2: %s\n", texto2);
    printf("ptrTexto: %s\n", ptrTexto);

    printf("\n===== LONGITUD DE STRING =====\n");

    char saludo[50] = "¡Buenos días!";
    printf("String: %s\n", saludo);
    printf("Longitud: %zu caracteres\n", strlen(saludo));

    printf("\n===== ENTRADA DE DATOS =====\n");

    char nombre[30];
    printf("Ingrese su nombre: ");
    // scanf("%s", nombre);  // NO SEGURO - puede causar overflow
    fgets(nombre, sizeof(nombre), stdin);
    // Remover el salto de línea si existe
    if (nombre[strlen(nombre) - 1] == '\n') {
        nombre[strlen(nombre) - 1] = '\0';
    }
    printf("Nombre capturado: %s\n", nombre);

    printf("\n===== CONCATENACIÓN =====\n");

    char primera[30] = "Hola ";
    char segunda[] = "Mundo";
    strcat(primera, segunda);
    printf("Concatenado: %s\n", primera);

    char texto3[50] = "Buenos";
    strncat(texto3, " días", 20);
    printf("Concatenación segura: %s\n", texto3);

    printf("\n===== COMPARACIÓN =====\n");

    char str1[20] = "abc";
    char str2[20] = "abc";
    char str3[20] = "def";

    if (strcmp(str1, str2) == 0) {
        printf("\"%s\" es igual a \"%s\"\n", str1, str2);
    }

    if (strcmp(str1, str3) != 0) {
        printf("\"%s\" es diferente a \"%s\"\n", str1, str3);
    }

    int comparacion = strcmp(str1, str3);
    printf("strcmp(\"%s\", \"%s\") = %d (negativo = primero es menor)\n",
           str1, str3, comparacion);

    printf("\n===== BÚSQUEDA DE CARACTERES =====\n");

    char *texto = "Programación en C";
    char buscado = 'a';

    char *encontrado = strchr(texto, buscado);
    if (encontrado != NULL) {
        printf("Carácter '%c' encontrado en: %s\n", buscado, encontrado);
        printf("Posición: %td\n", encontrado - texto);
    } else {
        printf("Carácter '%c' no encontrado\n", buscado);
    }

    printf("\n===== BÚSQUEDA DE SUBSTRING =====\n");

    char frase[50] = "El gato está en el tejado";
    char buscar[] = "gato";

    char *pos = strstr(frase, buscar);
    if (pos != NULL) {
        printf("Substring \"%s\" encontrado en: %s\n", buscar, frase);
        printf("Comienza en posición: %ld\n", pos - frase);
    }

    printf("\n===== SUBSTRING: EXTRAE PARTE DEL STRING =====\n");

    char completo[30] = "Programación";
    char parte[10];
    strncpy(parte, completo + 3, 4);  // copia 4 caracteres a partir de pos 3
    parte[4] = '\0';  // NULL terminator
    printf("Substring de \"%s\": \"%s\"\n", completo, parte);

    printf("\n===== REEMPLAZO MANUAL =====\n");

    char mensaje[50] = "Hola Mundo, Mundo es grande";
    printf("Original: %s\n", mensaje);

    // Búsqueda y reemplazo simple
    char buscar2[] = "Mundo";
    char reemplazo[] = "C";

    char *pos2 = strstr(mensaje, buscar2);
    if (pos2 != NULL) {
        // Usar strcpy para reemplazar (cuidado: el tamaño debe permitirlo)
        printf("Primera ocurrencia de \"%s\" reemplazada\n", buscar2);
    }

    printf("\n===== CONVERSIÓN DE CASOS =====\n");

    char textoOriginal[30] = "HoLa MuNdO";
    printf("Original: %s\n", textoOriginal);

    // Convertir a mayúsculas
    char mayuscula[30];
    strcpy(mayuscula, textoOriginal);
    for (int i = 0; mayuscula[i]; i++) {
        mayuscula[i] = toupper(mayuscula[i]);
    }
    printf("Mayúsculas: %s\n", mayuscula);

    // Convertir a minúsculas
    char minuscula[30];
    strcpy(minuscula, textoOriginal);
    for (int i = 0; minuscula[i]; i++) {
        minuscula[i] = tolower(minuscula[i]);
    }
    printf("Minúsculas: %s\n", minuscula);

    printf("\n===== CONVERSIÓN STRING A NÚMERO =====\n");

    char numStr1[] = "42";
    char numStr2[] = "3.14159";

    int numero = atoi(numStr1);
    float decimal = atof(numStr2);

    printf("String \"%s\" a int: %d\n", numStr1, numero);
    printf("String \"%s\" a float: %.5f\n", numStr2, decimal);

    printf("\n===== CONVERSIÓN NÚMERO A STRING =====\n");

    int entero = 123;
    float flotante = 45.67f;
    char buffer[50];

    sprintf(buffer, "El número es: %d", entero);
    printf("%s\n", buffer);

    sprintf(buffer, "El decimal es: %.2f", flotante);
    printf("%s\n", buffer);

    printf("\n===== DIVISIÓN DE STRING (tokenización) =====\n");

    char frase2[50] = "uno,dos,tres,cuatro";
    printf("String: %s\n", frase2);
    printf("Tokens separados por coma:\n");

    char copia[50];
    strcpy(copia, frase2);

    char *token = strtok(copia, ",");
    while (token != NULL) {
        printf("- %s\n", token);
        token = strtok(NULL, ",");
    }

    printf("\n===== CARACTER NULL TERMINATOR =====\n");

    char str[10] = {'H', 'o', 'l', 'a', '\0'};
    printf("String: %s\n", str);
    printf("Longitud: %zu\n", strlen(str));

    char sinNull[10] = {'M', 'u', 'n', 'd', 'o'};  // sin \0
    printf("Sin NULL terminator - comportamiento indefinido\n");

    printf("\n===== RESUMEN DE FUNCIONES =====\n");

    printf("strlen(): longitud del string\n");
    printf("strcpy(): copiar string\n");
    printf("strcat(): concatenar strings\n");
    printf("strcmp(): comparar strings\n");
    printf("strchr(): buscar carácter\n");
    printf("strstr(): buscar substring\n");
    printf("atoi(), atof(): convertir a número\n");
    printf("sprintf(): escribir a string (como printf)\n");
    printf("strtok(): dividir por delimitador\n");

    return 0;
}
