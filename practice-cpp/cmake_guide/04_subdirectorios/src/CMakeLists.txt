# CMakeLists.txt para el programa principal

# Crear el ejecutable
add_executable(programa_principal main.cpp)

# Enlazar con la librería de utilidades
target_link_libraries(programa_principal PRIVATE utilidades_lib)
