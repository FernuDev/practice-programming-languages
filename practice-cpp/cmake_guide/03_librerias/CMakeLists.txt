# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.27)

# Nombre del proyecto
project(app_con_libreria VERSION 1.0.0)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Crear la librería estática a partir de los archivos en lib/
add_library(matematicas_lib STATIC
    lib/matematicas.cpp
)

# Especificar dónde están los headers de la librería
target_include_directories(matematicas_lib PUBLIC lib/)

# Crear el ejecutable principal
add_executable(aplicacion src/main.cpp)

# Enlazar la librería al ejecutable
target_link_libraries(aplicacion PRIVATE matematicas_lib)
