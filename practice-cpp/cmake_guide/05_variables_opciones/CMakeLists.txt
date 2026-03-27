# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.27)

# Nombre del proyecto
project(programa_config VERSION 1.0.0)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Definir variables CMake
set(APP_NAME "Aplicación con Configuración")
set(APP_VERSION "1.0.0")
set(APP_AUTHOR "CMake Tutorial")

# Imprimir información durante la configuración
message(STATUS "Configurando ${APP_NAME} v${APP_VERSION}")

# Crear opciones booleanas que el usuario puede activar/desactivar
option(ENABLE_DEBUG "Habilitar modo debug" ON)
option(ENABLE_FEATURES "Habilitar características avanzadas" OFF)
option(ENABLE_TESTS "Habilitar pruebas" OFF)

# Mostrar opciones seleccionadas
message(STATUS "Debug: ${ENABLE_DEBUG}")
message(STATUS "Características avanzadas: ${ENABLE_FEATURES}")
message(STATUS "Pruebas: ${ENABLE_TESTS}")

# Crear el ejecutable
add_executable(programa_config main.cpp)

# Pasar variables a través de defines del compilador
target_compile_definitions(programa_config PRIVATE
    APP_NAME="${APP_NAME}"
    APP_VERSION="${APP_VERSION}"
    APP_AUTHOR="${APP_AUTHOR}"
)

# Compilar con diferentes opciones según la configuración
if(ENABLE_DEBUG)
    target_compile_definitions(programa_config PRIVATE DEBUG_MODE=1)
    message(STATUS "Modo DEBUG activado")
endif()

if(ENABLE_FEATURES)
    target_compile_definitions(programa_config PRIVATE FEATURES_ENABLED=1)
    message(STATUS "Características avanzadas activadas")
endif()

if(ENABLE_TESTS)
    target_compile_definitions(programa_config PRIVATE TESTS_ENABLED=1)
    message(STATUS "Pruebas activadas")
endif()
