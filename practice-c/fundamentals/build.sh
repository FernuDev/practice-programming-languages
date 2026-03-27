#!/bin/bash

# Script para compilar todos los programas de fundamentals

echo "Compilando fundamentals de C..."
mkdir -p build
cd build
cmake .. && make

if [ $? -eq 0 ]; then
    echo ""
    echo "✓ Compilación exitosa"
    echo ""
    echo "Para ejecutar los programas:"
    echo "  ./variables"
    echo "  ./operadores"
    echo "  ./control_flujo"
    echo "  ./bucles"
    echo "  ./funciones"
    echo "  ./arrays"
    echo "  ./punteros"
    echo "  ./structs"
    echo "  ./strings"
    echo "  ./memoria"
    echo "  ./io"
    echo "  ./macros"
    echo "  ./algoritmos"
else
    echo ""
    echo "✗ Error en la compilación"
    exit 1
fi
