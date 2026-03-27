# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.27)

# Nombre del proyecto
project(calculadora_app VERSION 1.0.0)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Crear ejecutable con múltiples archivos fuente
add_executable(calculadora_app
    src/main.cpp
    src/calculadora.cpp
)

# Indicar dónde están los archivos header
target_include_directories(calculadora_app PRIVATE include/)
