# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.27)

# Nombre del proyecto y versión
project(hola_mundo VERSION 1.0.0)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Crear ejecutable a partir del archivo fuente
add_executable(hello_mundo main.cpp)
