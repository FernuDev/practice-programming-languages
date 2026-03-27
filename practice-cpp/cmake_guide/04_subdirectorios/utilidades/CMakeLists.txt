# CMakeLists.txt para el módulo de utilidades

# Crear la librería de utilidades
add_library(utilidades_lib STATIC
    utilidades.cpp
)

# Exponer los headers públicamente
target_include_directories(utilidades_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
