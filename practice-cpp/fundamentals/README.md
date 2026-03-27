# C++ Fundamentals

[![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://en.cppreference.com/)
[![CMake](https://img.shields.io/badge/CMake-3.27-064F8C?style=for-the-badge&logo=cmake&logoColor=white)](https://cmake.org/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-success?style=for-the-badge)]()

A comprehensive guide to learning C++ fundamentals through practical, well-commented examples. Each topic is a standalone executable program.

---

## Table of Contents

- [Overview](#overview)
- [Modules](#modules)
- [Getting Started](#getting-started)
- [File Descriptions](#file-descriptions)
- [How to Run](#how-to-run)

---

## Overview

This module covers the essential concepts of C++ from basic syntax through advanced features like object-oriented programming, memory management, and the Standard Template Library (STL).

**Key Features:**
- 12 standalone C++ programs, each covering one topic
- Full Spanish comments explaining each concept
- Practical, real-world examples
- C++17 features and modern best practices
- Compiles with CMake for cross-platform support
- Each program can be run independently

---

## Modules

All files located in `src/`:

### 1. **variables.cpp**
Core data types and variables:
- Primitive types: `char`, `short`, `int`, `long`, `float`, `double`, `bool`
- `auto` type deduction (C++11)
- `const` and `constexpr`
- Uniform initialization with `{}`
- `sizeof()` operator and ranges

### 2. **operadores.cpp**
All C++ operators:
- Arithmetic: `+`, `-`, `*`, `/`, `%`
- Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical: `&&`, `||`, `!`
- Assignment: `+=`, `-=`, `*=`, `/=`
- Increment/Decrement: `++`, `--`
- Ternary: `condition ? a : b`
- Bitwise: `&`, `|`, `^`, `~`, `<<`, `>>`

### 3. **control_flujo.cpp**
Control flow structures:
- `if`/`else if`/`else`
- `switch` statement with `break`
- String comparisons with if/else
- Ternary operator as alternative
- Nested conditions

### 4. **bucles.cpp**
Loop structures:
- `for` loop (classic and variations)
- `while` and `do-while`
- Range-based `for` (C++11)
- `break` and `continue`
- Nested loops
- Accumulative operations

### 5. **funciones.cpp**
Function definition and usage:
- Functions with and without return values
- Parameters by value and by reference
- Default parameter values
- Function overloading
- Recursion (factorial example)
- Lambda functions

### 6. **arreglos.cpp**
Array and vector operations:
- C-style arrays
- `std::array<T, N>` (C++11)
- `std::vector<T>` and operations
- Multi-dimensional arrays
- Sorting and searching
- Range-based for loops

### 7. **punteros.cpp**
Memory addressing and pointers:
- Address operator `&`
- Pointer declaration and dereferencing `*`
- `nullptr` (C++11)
- Pointer vs reference differences
- Pointer-to-pointer
- Pointer arithmetic
- Dynamic allocation with `new`

### 8. **strings.cpp**
String manipulation:
- `std::string` creation and operations
- Methods: `length()`, `find()`, `substr()`, `replace()`
- Case conversion with `transform()`
- String comparison
- Concatenation with `append()` and `+`
- Conversion to/from numbers: `stoi()`, `stod()`, `to_string()`

### 9. **clases.cpp**
Object-oriented programming basics:
- Class definition with `public`/`private`
- Constructor and initialization
- Getters and setters
- `this` pointer
- Methods and member functions
- Objects in stack vs heap (with `new`/`delete`)

### 10. **herencia.cpp**
Inheritance and polymorphism:
- Base class with `virtual` functions
- Derived classes with `:public`
- Constructor chaining with member initializer list
- Method override with `override` (C++11)
- Polymorphism: calling virtual functions through base pointers
- Virtual destructor (good practice)

### 11. **memoria.cpp**
Memory management and smart pointers:
- `new` and `delete` (stack vs heap)
- `new[]` and `delete[]` for arrays
- Memory leaks: what to avoid
- `unique_ptr<T>`: exclusive ownership
- `shared_ptr<T>`: shared ownership
- `make_unique()` and `make_shared()` (C++14)
- RAII principle (Resource Acquisition Is Initialization)

### 12. **stl.cpp**
Standard Template Library containers and algorithms:
- `std::vector<T>`: operations and methods
- `std::map<K,V>`: key-value pairs
- `std::set<T>`: unique elements
- `std::unordered_map<K,V>`: O(1) access
- `std::stack<T>` (LIFO)
- `std::queue<T>` (FIFO)
- Algorithms: `sort()`, `find()`, `count()`, `transform()`
- Lambda functions with STL (C++11)

---

## Getting Started

### Prerequisites

- C++17 compatible compiler (GCC 7+, Clang 5+, MSVC 2017+)
- CMake 3.27+
- Standard library headers

### Build

```bash
cd fundamentals

# Create build directory and compile
./build.sh
# OR manually:
# mkdir build && cd build && cmake .. && make
```

### Run Individual Programs

```bash
cd build

# Run any program
./variables
./operadores
./control_flujo
./bucles
./funciones
./arreglos
./punteros
./strings
./clases
./herencia
./memoria
./stl
```

---

## File Descriptions

| File | Topic | Key Concepts |
|------|-------|---|
| `variables.cpp` | Data types and variables | primitives, auto, const, sizeof |
| `operadores.cpp` | All operators | arithmetic, logical, bitwise |
| `control_flujo.cpp` | Conditionals | if/else, switch, ternary |
| `bucles.cpp` | Loops | for, while, do-while, range-based |
| `funciones.cpp` | Functions | parameters, return, overloading, recursion |
| `arreglos.cpp` | Arrays and vectors | arrays, vector, multi-dimensional, sort |
| `punteros.cpp` | Pointers and memory | &, *, nullptr, new, delete |
| `strings.cpp` | String operations | length, find, substr, replace, convert |
| `clases.cpp` | Classes and objects | constructor, getters/setters, this |
| `herencia.cpp` | Inheritance | virtual, override, polymorphism |
| `memoria.cpp` | Memory management | new/delete, smart pointers, RAII |
| `stl.cpp` | STL containers | vector, map, set, stack, queue, algorithms |

---

## How to Run

### Compile and Run

```bash
# Compile all programs
cd fundamentals
./build.sh

# Run a specific program (from build directory)
cd build
./variables
```

### View Output

All programs print comprehensive output demonstrating each concept. Each section is clearly labeled with separators like:
```
===== NOMBRE DE LA SECCIÓN =====
```

### Examples of Output

Running `./variables` shows:
- All primitive types with their sizes
- Type deduction with `auto`
- Constants with `const` and `constexpr`
- Uniform initialization
- Ranges using `numeric_limits`

Running `./clases` shows:
- Object creation and method calls
- Getters and setters
- Object comparison
- Bank account example with validation
- Pointer to objects
- Dynamic object allocation

---

## Code Style

All files follow the established C++ practice style:

- **Comments:** Single-line `//` in Spanish, explaining "why" not just "what"
- **Separators:** `// ===== SECTION TITLE =====` with matching output
- **Variables:** camelCase Spanish names (`edadUsuario`, `velocidadMaxima`)
- **Constants:** SCREAMING_SNAKE_CASE Spanish (`VELOCIDAD_LUZ`)
- **Classes:** PascalCase (`Persona`, `CuentaBancaria`)
- **Indentation:** 4 spaces
- **Namespace:** `using namespace std;` for educational simplicity

---

## Recommended Order

1. **variables.cpp** - Start with data types
2. **operadores.cpp** - Learn all operators
3. **control_flujo.cpp** - Control flow
4. **bucles.cpp** - Loops
5. **funciones.cpp** - Functions
6. **arreglos.cpp** - Arrays and vectors
7. **strings.cpp** - String handling
8. **punteros.cpp** - Pointers (important!)
9. **clases.cpp** - Object-oriented programming
10. **herencia.cpp** - Advanced OOP
11. **memoria.cpp** - Memory management (critical for C++)
12. **stl.cpp** - Standard library

---

## Resources

### Official Documentation
- [C++ Reference (en.cppreference.com)](https://en.cppreference.com/)
- [cplusplus.com](https://www.cplusplus.com/)
- [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines)

### Books
- The C++ Programming Language by Bjarne Stroustrup
- Effective C++ by Scott Meyers
- C++ Primer by Lippman, Lajoie & Moo

### Learning
- [Learn C++ (learncpp.com)](https://www.learncpp.com/)
- [C++ Tutor (visualize code execution)](https://pythontutor.com/cpp.html)

---

## License

This project is licensed under the MIT License. See the main repository for details.

---

<div align="center">

### Part of practice-programming-languages

**Last Updated:** March 2026

Found this helpful? Give the repository a star!

</div>
