# C Fundamentals

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://www.cprogramming.com/)
[![CMake](https://img.shields.io/badge/CMake-3.27-064F8C?style=for-the-badge&logo=cmake&logoColor=white)](https://cmake.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-success.svg)]()

A comprehensive guide to learning C fundamentals through practical, well-commented examples. Each topic is a standalone executable program.

---

## Table of Contents

- [Overview](#overview)
- [Modules](#modules)
- [Getting Started](#getting-started)
- [File Descriptions](#file-descriptions)
- [How to Run](#how-to-run)

---

## Overview

This module covers the essential concepts of C from basic syntax through advanced features like dynamic memory management, file I/O, and searching/sorting algorithms.

**Key Features:**
- 13 standalone C programs, each covering one topic
- Full Spanish comments explaining each concept
- Practical, real-world examples
- C99 standard
- Compiles with CMake for cross-platform support
- Each program can be run independently

---

## Modules

All files located in `src/`:

### 1. **variables.c**
Core data types and variables:
- Primitive types: `char`, `short`, `int`, `long`, `float`, `double`
- `const` constants
- Type casting
- Memory addresses and `sizeof()`
- Ranges with `LIMITS.h`

### 2. **operadores.c**
All C operators:
- Arithmetic: `+`, `-`, `*`, `/`, `%`
- Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical: `&&`, `||`, `!`
- Assignment: `+=`, `-=`, `*=`, `/=`
- Increment/Decrement: `++`, `--`
- Ternary: `condition ? a : b`
- Bitwise: `&`, `|`, `^`, `~`, `<<`, `>>`

### 3. **control_flujo.c**
Control flow structures:
- `if`/`else if`/`else`
- `switch` statement with `break`
- Nested conditions
- Ternary operator
- Complex expressions with logical operators

### 4. **bucles.c**
Loop structures:
- `for` loop (classic and variations)
- `while` and `do-while`
- `break` and `continue`
- Nested loops
- Accumulative operations
- Prime number detection

### 5. **funciones.c**
Function definition and usage:
- Functions with and without return values
- Parameters by value and by reference
- Multiple parameters
- Recursion (factorial, Fibonacci)
- Variable scope and lifetime
- Function prototypes

### 6. **arrays.c**
Array operations:
- 1D arrays declaration and initialization
- Array operations (sum, average, min, max)
- 2D arrays (matrices)
- Searching in arrays
- Array copying
- Character arrays (strings)

### 7. **punteros.c**
Pointers and memory:
- Address operator `&` and dereference `*`
- Pointer declaration and initialization
- `NULL` pointer
- Pointer arithmetic
- Pointers to arrays
- Double pointers (pointer to pointer)
- Dynamic allocation with `malloc` and `free`

### 8. **structs.c**
Structure definition and usage:
- `struct` declaration
- Accessing members with `.` and `->`
- Arrays of structures
- Nested structures
- Pointers to structures
- Structure size and memory layout
- Bit fields

### 9. **strings.c**
String manipulation:
- String declaration and initialization
- `strlen()`, `strcpy()`, `strcat()`
- String comparison with `strcmp()`
- Character search with `strchr()`
- Substring search with `strstr()`
- Case conversion
- String to number: `atoi()`, `atof()`
- Number to string: `sprintf()`
- String tokenization with `strtok()`

### 10. **memoria.c**
Memory management and dynamic allocation:
- Stack vs Heap memory
- `malloc()` for dynamic allocation
- `free()` to release memory
- `calloc()` for allocation + initialization
- `realloc()` to resize memory
- Memory leaks and how to avoid them
- Dynamic strings
- Dynamic structures and arrays

### 11. **io.c**
Input/Output and file operations:
- `scanf()` and `printf()`
- `fgets()` for safe input
- File operations: `fopen()`, `fclose()`
- `fprintf()` and `fscanf()` for formatted I/O
- Binary file operations: `fwrite()`, `fread()`
- File positioning: `fseek()`, `ftell()`
- Input/output from/to files

### 12. **macros.c**
Preprocessor macros and conditional compilation:
- `#define` for constants and macros
- Function-like macros with parameters
- Common patterns (MIN, MAX, ABS)
- Conditional compilation: `#if`, `#ifdef`, `#ifndef`
- Token concatenation `##`
- Variadic macros with `__VA_ARGS__`
- Macro vs inline functions

### 13. **algoritmos.c**
Searching and sorting algorithms:
- Linear search: O(n)
- Binary search: O(log n)
- Bubble sort: O(n²)
- Selection sort: O(n²)
- Insertion sort: O(n²)
- Merge sort: O(n log n)
- Algorithm complexity analysis
- Use cases and trade-offs

---

## Getting Started

### Prerequisites

- GCC or Clang compiler
- CMake 3.27+

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
./arrays
./punteros
./structs
./strings
./memoria
./io
./macros
./algoritmos
```

---

## File Descriptions

| File | Topic | Key Concepts |
|------|-------|---|
| `variables.c` | Data types and variables | primitives, const, casting, sizeof |
| `operadores.c` | All operators | arithmetic, logical, bitwise, ternary |
| `control_flujo.c` | Conditionals | if/else, switch, nested conditions |
| `bucles.c` | Loops | for, while, do-while, break, continue |
| `funciones.c` | Functions | parameters, return, recursion, scope |
| `arrays.c` | Arrays | 1D/2D arrays, initialization, operations |
| `punteros.c` | Pointers and memory | &, *, malloc, free, pointer arithmetic |
| `structs.c` | Structures | struct, members, nesting, bit fields |
| `strings.c` | String operations | strlen, strcpy, strcat, strcmp, strtok |
| `memoria.c` | Memory management | malloc, free, calloc, realloc, memory leaks |
| `io.c` | Input/Output | scanf, printf, fopen, fprintf, file I/O |
| `macros.c` | Preprocessor | #define, #ifdef, conditional compilation |
| `algoritmos.c` | Algorithms | linear search, binary search, sorting |

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
- Type casting behavior
- Memory addresses
- Constant declarations

Running `./punteros` shows:
- Pointer declaration and usage
- Address operations
- Dynamic memory allocation
- Pointer arithmetic

Running `./algoritmos` shows:
- Linear and binary search demonstrations
- Multiple sorting algorithms
- Complexity analysis and comparisons

---

## Code Style

All files follow the established C practice style:

- **Comments:** Single-line `//` in Spanish, explaining concepts
- **Separators:** `// ===== SECTION TITLE =====` with matching `printf` output
- **Variables:** camelCase Spanish names (`numeroEntero`, `velocidadMaxima`)
- **Constants:** `SCREAMING_SNAKE_CASE` Spanish (`VELOCIDAD_LUZ`)
- **Functions:** camelCase (`busquedaLineal`, `ordenamientoBurbuja`)
- **Indentation:** 4 spaces
- **Namespace:** `using` appropriate headers for each concept

---

## Recommended Order

1. **variables.c** - Start with data types
2. **operadores.c** - Learn all operators
3. **control_flujo.c** - Control flow
4. **bucles.c** - Loops
5. **funciones.c** - Functions
6. **arrays.c** - Arrays
7. **strings.c** - String handling
8. **punteros.c** - Pointers (important!)
9. **structs.c** - Structures
10. **memoria.c** - Memory management (critical for C!)
11. **io.c** - File I/O
12. **macros.c** - Preprocessor macros
13. **algoritmos.c** - Algorithms and sorting

---

## Resources

### Official Documentation
- [C Reference (cppreference.com)](https://en.cppreference.com/w/c)
- [cplusplus.com C Reference](https://www.cplusplus.com/reference/clibrary/)
- [GNU C Library](https://www.gnu.org/software/libc/manual/)

### Learning Resources
- [Learn C (learn-c.org)](https://www.learn-c.org/)
- [C Programming Tutorials (tutorialspoint.com)](https://www.tutorialspoint.com/cprogramming/)
- [The C Book](https://www.gbdirect.co.uk/c_book/)

### Tools
- [GCC Compiler](https://gcc.gnu.org/)
- [Valgrind (memory debugging)](https://valgrind.org/)
- [GDB (debugger)](https://www.gnu.org/software/gdb/)

---

## License

This project is licensed under the MIT License. See the main repository for details.

---

<div align="center">

### Part of practice-programming-languages

**Last Updated:** March 2026

Found this helpful? Give the repository a star!

</div>
