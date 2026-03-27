# Advanced C Programming Course

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://www.cprogramming.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-success.svg)]()

A comprehensive learning path for C programming, organized from fundamentals through advanced concepts. This repository contains organized exercises, projects, and examples covering essential to advanced C programming topics.

---

## Table of Contents

- [Learning Path](#learning-path)
- [Fundamentals](#fundamentals)
- [Intermediate](#intermediate)
- [Advanced](#advanced)
- [Building and Running](#building-and-running)

---

## Learning Path

```
Beginner
  ↓
Fundamentals (13 programs)
  ↓
Intermediate
  ├─ Basics & Memory Management (projects)
  ├─ Advanced Types & Preprocessor
  └─ Preprocessor Macros
  ↓
Advanced
  ├─ Data Structures (Linked Lists)
  ├─ Algorithms (Searching & Sorting)
  └─ Mathematics (Series & Patterns)
```

---

## Fundamentals

[![Fundamentals](https://img.shields.io/badge/Category-Fundamentals-success.svg)](fundamentals/)

**Start here!** Covers core C concepts with 13 standalone programs.

### Topics Covered:
1. **variables.c** - Data types and variables
2. **operadores.c** - All operators
3. **control_flujo.c** - Control structures
4. **bucles.c** - Loops
5. **funciones.c** - Functions and scope
6. **arrays.c** - Arrays and matrices
7. **punteros.c** - Pointers and memory
8. **structs.c** - Structures
9. **strings.c** - String manipulation
10. **memoria.c** - Dynamic memory management
11. **io.c** - File I/O
12. **macros.c** - Preprocessor macros
13. **algoritmos.c** - Searching and sorting

### Build:
```bash
cd fundamentals
./build.sh
cd build
./variables  # run any program
```

See [fundamentals/README.md](fundamentals/README.md) for detailed information.

---

## Intermediate

### 01 Basics

[![Basics](https://img.shields.io/badge/Category-Intermediate-orange.svg)](01_basics/)

Project-based learning covering modular programming and memory management.

**Project 01 Topics:**
- Header files and modular programming
- Function declarations and definitions
- Stack vs heap memory management
- Date structures and enumerations
- Makefile usage for compilation

**Project 02 Topics:**
- Storage classes: `auto`, `static`, `extern`, `register`
- Variable scope and lifetime
- Global vs local variables
- Static variables
- External variable linkage

### 02 Advanced Types

[![Advanced Types](https://img.shields.io/badge/Category-Intermediate-orange.svg)](02_advanced_types/)

Explores advanced type definitions and preprocessor features.

**Topics Covered:**
- `typedef` for custom type names
- Variable-length arrays (VLA)
- Preprocessor `#define` constants
- Type aliasing for code clarity

### 03 Preprocessor

[![Preprocessor](https://img.shields.io/badge/Category-Intermediate-orange.svg)](03_preprocessor/)

Deep dive into preprocessor directives and macros.

**Topics Covered:**
- `#define` macros and function-like macros
- Symbolic constants
- Macro expansion
- Conditional compilation

---

## Advanced

### 04 Data Structures

[![Data Structures](https://img.shields.io/badge/Category-Advanced-red.svg)](04_data_structures/)

Implementation of fundamental data structures.

**Topics:**
- Singly linked list implementation
- Dynamic node allocation
- List traversal and manipulation
- Insertion and search operations

### 05 Algorithms

[![Algorithms](https://img.shields.io/badge/Category-Advanced-red.svg)](05_algorithms/)

Fundamental searching and sorting algorithms.

**Topics:**
- Sequential/linear search - O(n)
- Binary search - O(log n)
- Algorithm complexity analysis
- Performance comparison

### 06 Math

[![Math](https://img.shields.io/badge/Category-Advanced-red.svg)](06_math/)

Mathematical algorithms and pattern generation.

**Topics:**
- Taylor series (sin, cos, exp)
- Series expansion algorithms
- Factorial computation
- Degree/radian conversion
- Pattern generation

---

## Building and Running

### Prerequisites

- GCC or Clang compiler
- Make utility (for projects with Makefiles)
- CMake 3.27+ (for fundamentals)

### Fundamentals (Recommended Start)

```bash
cd fundamentals

# Build all 13 programs
./build.sh

# Run any program
cd build
./variables
./operadores
./punteros
# ... etc.
```

### Individual Projects

```bash
cd 01_basics/project_01
make
./programa

# Clean
make clean
```

Most .c files can be compiled directly:
```bash
gcc -Wall -g -o programa archivo.c
./programa
```

### Recommended Learning Order

1. **Start with fundamentals/** (13 programs, 1-2 weeks)
2. **01_basics/** (project-based, 1 week)
3. **02_advanced_types/** & **03_preprocessor/** (2-3 days each)
4. **04_data_structures/** (1 week)
5. **05_algorithms/** (3-5 days)
6. **06_math/** (optional, specialized topics)

---

## File Organization

```
practice-c/
├── fundamentals/              ← START HERE (13 programs)
│   ├── CMakeLists.txt
│   ├── build.sh
│   ├── README.md
│   └── src/
│       ├── variables.c
│       ├── operadores.c
│       ├── ... (13 total)
│
├── 01_basics/                 (Intermediate)
│   ├── project_01/
│   └── project_02/
│
├── 02_advanced_types/         (Intermediate)
│   ├── typedef/
│   ├── variable_length_arrays/
│   └── preprocessor_defines/
│
├── 03_preprocessor/           (Intermediate)
│   ├── macros/
│   └── exercises/
│
├── 04_data_structures/        (Advanced)
│   └── linked_list/
│
├── 05_algorithms/             (Advanced)
│   └── searching/
│
└── 06_math/                   (Advanced)
    ├── series/
    └── patterns/
```

---

## Features

- ✅ **13 Fundamentals Programs** - Complete beginner coverage
- ✅ **Project-Based Learning** - Real-world contexts
- ✅ **Cross-Platform** - Works on Linux, macOS, Windows
- ✅ **Well-Commented** - Spanish comments for clarity
- ✅ **CMake Support** - Modern build system for fundamentals
- ✅ **Makefile Examples** - Traditional build files included
- ✅ **Algorithm Implementation** - Search and sort examples
- ✅ **Data Structures** - Linked lists and more

---

## Resources

### Official Documentation
- [C Reference (cppreference.com)](https://en.cppreference.com/w/c)
- [GNU C Library](https://www.gnu.org/software/libc/manual/)

### Learning Resources
- [Learn C (learn-c.org)](https://www.learn-c.org/)
- [The C Book](https://www.gbdirect.co.uk/c_book/)

### Tools
- [GCC Compiler](https://gcc.gnu.org/)
- [Valgrind (memory debugging)](https://valgrind.org/)
- [GDB (debugger)](https://www.gnu.org/software/gdb/)

---

## License

This repository is for educational purposes. Licensed under MIT.

---

<div align="center">

### Part of practice-programming-languages

**Last Updated:** March 2026

Complete the learning path and master C programming!

</div>
