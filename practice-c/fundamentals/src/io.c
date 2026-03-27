#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    printf("\n===== ENTRADA CON SCANF =====\n");

    int numero;
    float decimal;
    char caracter;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    printf("Ingrese un número decimal: ");
    scanf("%f", &decimal);

    printf("Ingrese un carácter: ");
    scanf(" %c", &caracter);  // espacio antes de %c para saltar espacios

    printf("\nValores capturados:\n");
    printf("Entero: %d\n", numero);
    printf("Decimal: %.2f\n", decimal);
    printf("Carácter: %c\n", caracter);

    printf("\n===== ENTRADA CON FGETS =====\n");

    char texto[100];
    printf("Ingrese una línea de texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Remover el salto de línea si existe
    if (texto[strlen(texto) - 1] == '\n') {
        texto[strlen(texto) - 1] = '\0';
    }

    printf("Texto capturado: %s\n", texto);
    printf("Longitud: %zu caracteres\n", strlen(texto));

    printf("\n===== ESCRITURA A ARCHIVO =====\n");

    FILE *archivo = fopen("/tmp/datos.txt", "w");

    if (archivo == NULL) {
        printf("Error: no se pudo crear el archivo\n");
        return 1;
    }

    fprintf(archivo, "Datos de ejemplo\n");
    fprintf(archivo, "Línea 1: %d\n", 100);
    fprintf(archivo, "Línea 2: %.2f\n", 3.14159f);
    fprintf(archivo, "Línea 3: %s\n", "Texto");

    fclose(archivo);
    printf("Archivo '/tmp/datos.txt' creado\n");

    printf("\n===== LECTURA DE ARCHIVO =====\n");

    archivo = fopen("/tmp/datos.txt", "r");

    if (archivo == NULL) {
        printf("Error: no se pudo abrir el archivo\n");
        return 1;
    }

    char linea[100];
    printf("Contenido del archivo:\n");
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);  // fgets incluye el \n
    }

    fclose(archivo);

    printf("\n===== LECTURA CON FSCANF =====\n");

    // Crear archivo con números
    archivo = fopen("/tmp/numeros.txt", "w");
    if (archivo != NULL) {
        fprintf(archivo, "10 20 30\n");
        fprintf(archivo, "40 50 60\n");
        fclose(archivo);
    }

    // Leer con fscanf
    archivo = fopen("/tmp/numeros.txt", "r");
    if (archivo != NULL) {
        printf("Números leídos:\n");
        int a, b, c;
        while (fscanf(archivo, "%d %d %d", &a, &b, &c) == 3) {
            printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
        }
        fclose(archivo);
    }

    printf("\n===== MODOS DE APERTURA =====\n");

    printf("\"r\"   - Lectura (el archivo debe existir)\n");
    printf("\"w\"   - Escritura (crea o sobrescribe el archivo)\n");
    printf("\"a\"   - Agregar (escribe al final del archivo)\n");
    printf("\"r+\"  - Lectura/Escritura\n");
    printf("\"w+\"  - Lectura/Escritura (crea o sobrescribe)\n");
    printf("\"a+\"  - Lectura/Escritura (agrega al final)\n");

    printf("\n===== VERIFICAR FIN DE ARCHIVO =====\n");

    archivo = fopen("/tmp/datos.txt", "r");
    if (archivo != NULL) {
        printf("Lectura línea por línea:\n");
        int contador = 0;
        while (!feof(archivo)) {
            char buffer[100];
            if (fgets(buffer, sizeof(buffer), archivo) != NULL) {
                contador++;
                printf("Línea %d: %s", contador, buffer);
            }
        }
        fclose(archivo);
    }

    printf("\n===== ESCRIBIR ESTRUCTURAS =====\n");

    struct Producto {
        int id;
        char nombre[50];
        float precio;
        int cantidad;
    };

    struct Producto producto = {1, "Laptop", 999.99f, 5};

    archivo = fopen("/tmp/producto.txt", "w");
    if (archivo != NULL) {
        fprintf(archivo, "%d,%s,%.2f,%d\n",
                producto.id,
                producto.nombre,
                producto.precio,
                producto.cantidad);
        fclose(archivo);
        printf("Producto escrito a archivo\n");
    }

    printf("\n===== LEER ESTRUCTURAS =====\n");

    struct Producto prod_leido;
    archivo = fopen("/tmp/producto.txt", "r");
    if (archivo != NULL) {
        fscanf(archivo, "%d,%49[^,],%f,%d",
               &prod_leido.id,
               prod_leido.nombre,
               &prod_leido.precio,
               &prod_leido.cantidad);

        printf("Producto leído:\n");
        printf("ID: %d\n", prod_leido.id);
        printf("Nombre: %s\n", prod_leido.nombre);
        printf("Precio: %.2f\n", prod_leido.precio);
        printf("Cantidad: %d\n", prod_leido.cantidad);

        fclose(archivo);
    }

    printf("\n===== LECTURA BINARIA =====\n");

    // Escribir en binario
    archivo = fopen("/tmp/datos.bin", "wb");
    if (archivo != NULL) {
        int datos[] = {100, 200, 300};
        fwrite(datos, sizeof(int), 3, archivo);
        fclose(archivo);
        printf("Datos binarios escritos\n");
    }

    // Leer en binario
    archivo = fopen("/tmp/datos.bin", "rb");
    if (archivo != NULL) {
        int datos_leidos[3];
        size_t elementos_leidos = fread(datos_leidos, sizeof(int), 3, archivo);
        printf("Datos binarios leídos: ");
        for (size_t i = 0; i < elementos_leidos; i++) {
            printf("%d ", datos_leidos[i]);
        }
        printf("\n");
        fclose(archivo);
    }

    printf("\n===== GETCHAR Y PUTCHAR =====\n");

    printf("Ingrese un carácter: ");
    int car = getchar();
    printf("Carácter capturado: ");
    putchar(car);
    printf("\n");

    printf("\n===== POSICIONAMIENTO EN ARCHIVO =====\n");

    archivo = fopen("/tmp/datos.txt", "r");
    if (archivo != NULL) {
        fseek(archivo, 0, SEEK_SET);    // inicio
        fseek(archivo, 10, SEEK_SET);   // 10 bytes desde inicio
        fseek(archivo, 0, SEEK_END);    // final
        long posicion = ftell(archivo);
        printf("Tamaño del archivo: %ld bytes\n", posicion);

        fclose(archivo);
    }

    printf("\n===== RESUMEN DE FUNCIONES I/O =====\n");

    printf("printf():   imprime a pantalla\n");
    printf("scanf():    lee desde teclado\n");
    printf("fopen():    abre un archivo\n");
    printf("fclose():   cierra un archivo\n");
    printf("fprintf():  escribe en archivo\n");
    printf("fscanf():   lee de archivo formateado\n");
    printf("fgets():    lee línea de archivo\n");
    printf("fwrite():   escribe datos binarios\n");
    printf("fread():    lee datos binarios\n");
    printf("fseek():    posiciona en archivo\n");
    printf("ftell():    obtiene posición actual\n");

    return 0;
}
