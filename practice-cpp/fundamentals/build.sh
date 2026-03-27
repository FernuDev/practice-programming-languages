#!/bin/bash

# Script para compilar los fundamentals de C++
# Navega al directorio build y ejecuta cmake + make

echo "Compilando Fundamentals de C++"
mkdir -p build
cd build
cmake ..
make
clear
echo "Compilación exitosa. Los ejecutables están en ./build/"
echo ""
echo "Para ejecutar un programa:"
echo "  ./variables"
echo "  ./operadores"
echo "  ./control_flujo"
echo "  ./bucles"
echo "  ./funciones"
echo "  ./arreglos"
echo "  ./punteros"
echo "  ./strings"
echo "  ./clases"
echo "  ./herencia"
echo "  ./memoria"
echo "  ./stl"
