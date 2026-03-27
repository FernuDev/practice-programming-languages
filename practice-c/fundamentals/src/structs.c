#include <stdio.h>
#include <string.h>

// ===== DEFINICIÓN DE ESTRUCTURAS =====

struct Persona {
    char nombre[50];
    int edad;
    float altura;
    char ciudad[30];
};

struct Producto {
    int id;
    char nombre[100];
    float precio;
    int cantidad;
};

struct Punto {
    int x;
    int y;
};

struct Rectangulo {
    struct Punto esquina1;
    struct Punto esquina2;
};

// ===== FUNCIONES CON ESTRUCTURAS =====

void imprimirPersona(struct Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d años\n", p.edad);
    printf("Altura: %.2f m\n", p.altura);
    printf("Ciudad: %s\n", p.ciudad);
}

void modificarEdad(struct Persona *p, int nuevaEdad) {
    p->edad = nuevaEdad;
}

float calcularPrecioTotal(struct Producto prod) {
    return prod.precio * prod.cantidad;
}

int main() {

    printf("\n===== DECLARACIÓN E INICIALIZACIÓN DE ESTRUCTURAS =====\n");

    struct Persona persona1;
    strcpy(persona1.nombre, "Juan Pérez");
    persona1.edad = 30;
    persona1.altura = 1.75f;
    strcpy(persona1.ciudad, "Madrid");

    printf("Persona 1:\n");
    imprimirPersona(persona1);

    printf("\n===== INICIALIZACIÓN CON VALORES =====\n");

    struct Persona persona2 = {
        .nombre = "María García",
        .edad = 28,
        .altura = 1.65f,
        .ciudad = "Barcelona"
    };

    printf("Persona 2:\n");
    imprimirPersona(persona2);

    printf("\n===== ARRAYS DE ESTRUCTURAS =====\n");

    struct Persona personas[3] = {
        {"Ana López", 25, 1.70f, "Valencia"},
        {"Carlos Rodríguez", 35, 1.80f, "Sevilla"},
        {"Diana Martínez", 29, 1.68f, "Bilbao"}
    };

    printf("Listado de personas:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nPersona %d:\n", i + 1);
        imprimirPersona(personas[i]);
    }

    printf("\n===== PUNTEROS A ESTRUCTURAS =====\n");

    struct Persona *ptrPersona = &persona1;

    printf("Acceso mediante puntero:\n");
    printf("Nombre: %s\n", ptrPersona->nombre);
    printf("Edad: %d\n", ptrPersona->edad);

    printf("\n===== MODIFICAR ESTRUCTURAS =====\n");

    printf("Edad antes: %d\n", persona1.edad);
    modificarEdad(&persona1, 31);
    printf("Edad después: %d\n", persona1.edad);

    printf("\n===== ESTRUCTURAS ANIDADAS =====\n");

    struct Rectangulo rect = {
        .esquina1 = {0, 0},
        .esquina2 = {10, 5}
    };

    printf("Rectángulo:\n");
    printf("Esquina 1: (%d, %d)\n", rect.esquina1.x, rect.esquina1.y);
    printf("Esquina 2: (%d, %d)\n", rect.esquina2.x, rect.esquina2.y);

    int ancho = rect.esquina2.x - rect.esquina1.x;
    int alto = rect.esquina2.y - rect.esquina1.y;
    printf("Área: %d\n", ancho * alto);

    printf("\n===== INVENTO DE PRODUCTO =====\n");

    struct Producto productos[] = {
        {1, "Laptop", 999.99f, 5},
        {2, "Ratón", 25.50f, 20},
        {3, "Teclado", 75.00f, 10},
        {4, "Monitor", 299.99f, 3}
    };

    printf("Inventario de productos:\n");
    printf("ID\tNombre\t\tPrecio\tCant.\tTotal\n");
    printf("----\t-------------\t------\t----\t------\n");

    float totalVentas = 0;
    for (int i = 0; i < 4; i++) {
        float total = calcularPrecioTotal(productos[i]);
        totalVentas += total;
        printf("%d\t%-15s\t%.2f\t%d\t%.2f\n",
               productos[i].id,
               productos[i].nombre,
               productos[i].precio,
               productos[i].cantidad,
               total);
    }
    printf("\nTotal en inventario: %.2f\n", totalVentas);

    printf("\n===== TAMAÑO DE ESTRUCTURAS =====\n");

    printf("sizeof(struct Persona) = %zu bytes\n", sizeof(struct Persona));
    printf("sizeof(struct Producto) = %zu bytes\n", sizeof(struct Producto));
    printf("sizeof(struct Punto) = %zu bytes\n", sizeof(struct Punto));

    printf("\nDesglose de struct Persona:\n");
    printf("- nombre[50]: %zu bytes\n", sizeof(char) * 50);
    printf("- edad: %zu bytes\n", sizeof(int));
    printf("- altura: %zu bytes\n", sizeof(float));
    printf("- ciudad[30]: %zu bytes\n", sizeof(char) * 30);

    printf("\n===== COPIA DE ESTRUCTURAS =====\n");

    struct Persona copia = persona1;
    strcpy(copia.nombre, "Juan Copia");

    printf("Original: %s\n", persona1.nombre);
    printf("Copia: %s\n", copia.nombre);

    printf("\n===== CAMPOS DE BITS (campos especiales) =====\n");

    struct Bandera {
        int activo : 1;      // 1 bit
        int verificado : 1;  // 1 bit
        int reservado : 6;   // 6 bits
    };

    struct Bandera estado;
    estado.activo = 1;
    estado.verificado = 0;

    printf("Bandera activo: %d\n", estado.activo);
    printf("Bandera verificado: %d\n", estado.verificado);
    printf("Tamaño de struct Bandera: %zu bytes\n", sizeof(struct Bandera));

    printf("\n===== RESUMEN DE ESTRUCTURAS =====\n");

    printf("struct: define un tipo compuesto\n");
    printf(".operador: accede a miembros de una estructura\n");
    printf("->operador: accede a miembros a través de puntero\n");
    printf("Copiar estructura: se copian todos los miembros\n");
    printf("Pasar por referencia: se puede usar para evitar copias grandes\n");

    return 0;
}
