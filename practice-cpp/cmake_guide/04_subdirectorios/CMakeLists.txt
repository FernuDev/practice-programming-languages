# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.27)

# Nombre del proyecto raíz
project(programa_modular VERSION 1.0.0)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Incluir el subdirectorio de utilidades
add_subdirectory(utilidades)

# Incluir el subdirectorio con el programa principal
add_subdirectory(src)
