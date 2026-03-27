# CMake Guide for C++

[![CMake](https://img.shields.io/badge/CMake-3.27-064F8C?style=for-the-badge&logo=cmake&logoColor=white)](https://cmake.org/)
[![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://en.cppreference.com/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)

A progressive guide to learning CMake for C++ development. Each sub-directory is a complete, self-contained project demonstrating a CMake concept.

---

## Table of Contents

- [Overview](#overview)
- [Projects](#projects)
- [How to Use](#how-to-use)
- [Learning Path](#learning-path)
- [Common Commands](#common-commands)

---

## Overview

CMake is a build system generator that simplifies cross-platform C++ development. Instead of writing platform-specific Makefiles, you write a single `CMakeLists.txt` file that CMake uses to generate the appropriate build files for your platform (Makefile on Linux/macOS, Visual Studio projects on Windows, etc.).

**Why CMake?**
- **Cross-platform:** Write once, build anywhere
- **Readable:** Simpler than hand-written Makefiles
- **Scalable:** Handles complex projects with multiple targets and dependencies
- **Standard:** Industry-standard for modern C++ projects

---

## Projects

Each project builds on previous concepts. All projects use **C++17** and **CMake 3.27**.

### 01_proyecto_basico/
**The Simplest Possible Project**

Demonstrates the bare minimum CMake configuration:
- `cmake_minimum_required(VERSION 3.27)`
- `project(name VERSION version)`
- `set(CMAKE_CXX_STANDARD 17)`
- `add_executable(target source.cpp)`

**What you'll learn:**
- How to define a CMake project
- Creating an executable
- Setting the C++ standard

**Run:**
```bash
cd 01_proyecto_basico
cmake -B build && cmake --build build
./build/hello_mundo
```

---

### 02_multiples_archivos/
**Multiple Source Files in One Project**

Demonstrates how to compile multiple `.cpp` files into a single executable:
- Multiple files in `add_executable()`
- Alternative: using `target_sources()`
- Separating into `src/` and `include/` directories
- Using `target_include_directories()`

**Project Structure:**
```
src/
  ├── main.cpp
  ├── calculadora.cpp
include/
  └── calculadora.h
CMakeLists.txt
```

**What you'll learn:**
- Organizing code in directories
- Telling CMake where to find header files
- Linking multiple source files

**Run:**
```bash
cd 02_multiples_archivos
cmake -B build && cmake --build build
./build/calculadora_app
```

---

### 03_librerias/
**Creating and Linking Libraries**

Demonstrates creating reusable libraries and linking them to an executable:
- `add_library(nombre STATIC/SHARED/INTERFACE files)`
- `target_link_libraries(executable library)`
- Difference between `STATIC`, `SHARED`, and `INTERFACE`
- Visibility with `PUBLIC`, `PRIVATE`, `INTERFACE`

**Project Structure:**
```
lib/
  ├── matematicas.cpp
  └── matematicas.h
src/
  └── main.cpp
CMakeLists.txt
```

**What you'll learn:**
- Creating static libraries
- Linking libraries to executables
- Understanding library types
- Target visibility (PUBLIC vs PRIVATE)

**Run:**
```bash
cd 03_librerias
cmake -B build && cmake --build build
./build/aplicacion
```

---

### 04_subdirectorios/
**Organizing Projects with Subdirectories**

Demonstrates how to structure larger projects using `add_subdirectory()`:
- `add_subdirectory(path)`
- Each subdirectory has its own `CMakeLists.txt`
- Linking libraries from subdirectories
- Dependency management between modules

**Project Structure:**
```
src/
  └── CMakeLists.txt (main executable)
utilidades/
  ├── CMakeLists.txt (defines library)
  ├── utilidades.cpp
  └── utilidades.h
CMakeLists.txt (root)
```

**What you'll learn:**
- Modular project organization
- Using `add_subdirectory()` effectively
- Creating hierarchical projects
- Inter-module dependencies

**Run:**
```bash
cd 04_subdirectorios
cmake -B build && cmake --build build
./build/programa_principal
```

---

### 05_variables_opciones/
**CMake Variables and Build Configuration**

Demonstrates controlling the build process with CMake variables and options:
- `set(VAR value)` - define variables
- `${VAR}` - use variables
- `option(NAME "description" ON/OFF)` - create flags
- `if(VARIABLE)` - conditional logic in CMake
- `message(STATUS "...")` - output messages for debugging

**What you'll learn:**
- Defining and using CMake variables
- Creating build-time options
- Conditional compilation
- Debugging CMake scripts

**Run:**
```bash
cd 05_variables_opciones
cmake -B build -DMI_OPCION=ON && cmake --build build
./build/programa_config
```

---

## How to Use

### Quick Start

Each project is completely self-contained and independent:

```bash
# Go to a project directory
cd 01_proyecto_basico

# Create build directory (recommended)
mkdir build
cd build

# Configure the project
cmake ..

# Build the project
cmake --build .

# Run the executable
./hello_mundo  # on Linux/macOS
# or
hello_mundo.exe  # on Windows
```

### Shorter Command

CMake supports building from outside the directory:

```bash
cd 01_proyecto_basico
cmake -B build   # configure in build/
cmake --build build  # build using build/
./build/hello_mundo  # run executable
```

### Clean Build

```bash
# Delete build directory to clean everything
rm -rf build/

# CMake will re-generate from scratch
cmake -B build
cmake --build build
```

---

## Learning Path

Follow these projects in order:

1. **Start with 01_proyecto_basico**
   - Understand the absolute minimum CMake needs
   - Learn the basic syntax

2. **Then 02_multiples_archivos**
   - Real projects have multiple files
   - Learn how to organize code

3. **Then 03_librerias**
   - Libraries are the cornerstone of large projects
   - Understand static vs shared libraries
   - Learn linking and dependencies

4. **Then 04_subdirectorios**
   - Enterprise projects use subdirectories
   - Learn hierarchical organization

5. **Finally 05_variables_opciones**
   - Control build behavior without editing files
   - Enable/disable features at build time

---

## Common CMake Commands

### Configuration Phase

```bash
# Configure in build/ directory
cmake -B build

# Configure with options
cmake -B build -DOPTION_NAME=ON

# Verbose output (see what CMake is doing)
cmake -B build --debug-output
```

### Build Phase

```bash
# Build using CMake
cmake --build build

# Build verbose (see compiler commands)
cmake --build build --verbose

# Build specific target
cmake --build build --target target_name
```

### Utilities

```bash
# List available targets
cmake --build build --target help

# Clean build artifacts
cmake --build build --target clean

# Install (if project defines install rules)
cmake --install build
```

---

## CMakeLists.txt Template

All projects use this basic template:

```cmake
# Minimum required version
cmake_minimum_required(VERSION 3.27)

# Project name and optional version
project(ProjectName VERSION 1.0.0)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable from sources
add_executable(target_name
    src/main.cpp
    src/other.cpp
)

# (Optional) Link libraries
target_link_libraries(target_name PRIVATE library_name)

# (Optional) Include directories
target_include_directories(target_name PRIVATE include/)
```

---

## Understanding Key CMake Concepts

### cmake_minimum_required()

```cmake
cmake_minimum_required(VERSION 3.27)
```

Specifies the minimum CMake version required. This ensures your build files use the correct CMake syntax.

### project()

```cmake
project(MiProyecto VERSION 1.0.0 DESCRIPTION "Mi aplicación")
```

Defines the project name and metadata. CMake uses this to set variables like `PROJECT_NAME`, `PROJECT_VERSION`, etc.

### set(CMAKE_CXX_STANDARD)

```cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
```

Sets the C++ standard. `REQUIRED ON` ensures the compiler supports it.

### add_executable()

```cmake
add_executable(program_name file1.cpp file2.cpp)
```

Creates an executable target from source files.

### add_library()

```cmake
add_library(my_lib STATIC src1.cpp src2.cpp)
# STATIC = .a file (Linux/macOS) or .lib (Windows)
# SHARED = .so/.dylib (Linux/macOS) or .dll (Windows)
```

Creates a library target.

### target_link_libraries()

```cmake
target_link_libraries(program_name PRIVATE my_lib)
# PRIVATE = dependency visible only to program_name
# PUBLIC = dependency visible to program_name and anything that links to program_name
# INTERFACE = dependency visible only to things that link to program_name
```

Links libraries to targets.

### target_include_directories()

```cmake
target_include_directories(program_name PRIVATE include/)
```

Specifies where the compiler should look for header files.

### add_subdirectory()

```cmake
add_subdirectory(utils)  # Looks for utils/CMakeLists.txt
```

Includes another `CMakeLists.txt` file, useful for modular projects.

### option()

```cmake
option(BUILD_SHARED_LIBS "Build as shared library" OFF)
if(BUILD_SHARED_LIBS)
    add_library(my_lib SHARED ...)
else()
    add_library(my_lib STATIC ...)
endif()
```

Creates a boolean configuration option.

---

## Resources

### Official Documentation
- [CMake Official Documentation](https://cmake.org/documentation/)
- [CMake Tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)

### Learning Resources
- [CMake by Example](https://cmake.org/cmake/help/latest/manual/cmake-examples.7.html)
- [An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)
- [CMake Best Practices](https://invent.kde.org/sysadmin/fantastic-cmake)

### Community
- [CMake Discourse](https://discourse.cmake.org/)
- [Stack Overflow #cmake](https://stackoverflow.com/questions/tagged/cmake)

---

## Tips and Best Practices

✓ **Do:**
- Use `cmake -B build` to separate source and build directories
- Use `target_link_libraries()` instead of manual linking
- Specify `PRIVATE`/`PUBLIC` visibility explicitly
- Use `target_include_directories()` instead of `include_directories()`

✗ **Don't:**
- Mix old and new CMake styles
- Use global `include_directories()` or `link_libraries()`
- Put build artifacts in the source directory
- Hardcode absolute paths in CMakeLists.txt

---

## License

These examples are part of the practice-programming-languages repository and are licensed under MIT.

---

<div align="center">

### Part of practice-cpp

**Last Updated:** March 2026

Happy CMaking! 🚀

</div>
