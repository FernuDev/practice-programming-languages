# Advanced C Programming Course

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://www.cprogramming.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-In%20Progress-yellow.svg)]()

Source code repository from an advanced C programming language course. This repository contains organized exercises, projects, and examples covering fundamental to advanced C programming concepts.

## Table of Contents

- [01 Basics](#01-basics)
- [02 Advanced Types](#02-advanced-types)
- [03 Preprocessor](#03-preprocessor)
- [04 Data Structures](#04-data-structures)
- [05 Algorithms](#05-algorithms)
- [06 Math](#06-math)
- [Building and Running](#building-and-running)

## 01 Basics

[![Basics](https://img.shields.io/badge/Category-Basics-orange.svg)](01_basics/)

This section covers fundamental C programming concepts including project organization, memory management, and storage classes.

### Project 01

**Topics Covered:**
- Header files and modular programming
- Function declarations and definitions
- Stack memory vs heap memory management
- Date structures and enumerations
- Makefile usage for project compilation

**Files:**
- `src/main.c` - Main entry point demonstrating header file usage
- `src/other.c` - Example module with function implementation
- `src/date.c` - Date manipulation functions
- `src/stack_memory.c` - Stack memory examples
- `src/heap_memory.c` - Dynamic memory allocation with malloc/free
- `headers/date.h` - Date structure and function declarations
- `headers/other.h` - Function declarations
- `makefile` - Build configuration

### Project 02

**Topics Covered:**
- Storage classes: auto, static, extern, register
- Variable scope and lifetime
- Global vs local variables
- Static variables in functions
- External variable linkage
- Register variables for performance optimization

**Files:**
- `src/main.c` - Storage class demonstration
- `src/storage_classes.c` - Comprehensive storage class examples
- `src/extern_class.c` - External variable examples
- `src/challenge_01.c` - Static and extern variable challenge
- `src/challenge_02.c` - Static variable accumulation challenge
- `src/challenge_03.c` - External function linkage challenge

## 02 Advanced Types

[![Advanced Types](https://img.shields.io/badge/Category-Advanced%20Types-purple.svg)](02_advanced_types/)

This section explores advanced type definitions and variable-length arrays in C.

### Typedef

**Topics Covered:**
- Creating custom type names with typedef
- Typedef vs #define preprocessor directive
- Typedef for pointers, arrays, and strings
- Type aliasing for improved code readability

**Files:**
- `typedef/typedef.c` - Comprehensive typedef examples including pointer types, arrays, and string definitions

### Variable Length Arrays

**Topics Covered:**
- Variable-length arrays (VLA) in C
- Dynamic array allocation at runtime
- Multi-dimensional variable-length arrays
- Size_t type for array dimensions

**Files:**
- `variable_length_arrays/var_len_arr.c` - Basic VLA examples with user input
- `variable_length_arrays/vla_challenge.c` - VLA challenge with dynamic sum calculation

### Preprocessor Defines

**Topics Covered:**
- #define preprocessor directive
- Symbolic constants
- Manifest constants
- NULL pointer definition

**Files:**
- `preprocessor_defines/define_preprocessor.c` - Preprocessor constant definitions

## 03 Preprocessor

[![Preprocessor](https://img.shields.io/badge/Category-Preprocessor-red.svg)](03_preprocessor/)

This section covers C preprocessor directives, macros, and conditional compilation.

### Macros

**Topics Covered:**
- #define directive for symbolic constants
- Function-like macros with parameters
- Macro expansion and evaluation
- Common macro patterns (MIN, MAX, SQUARE)
- Conditional expressions in macros

**Files:**
- `macros/macros.c` - Macro definitions including MIN, SQUARE, IS_LEAPYEAR, TO_LOWER

### Exercises

**Topics Covered:**
- Advanced macro definitions
- Multi-parameter macros
- Character manipulation macros
- Type checking macros

**Files:**
- `exercises/exercises_13_5.c` - Advanced macro exercises including MIN, MAX3, TOLOWER, IS_LETTER

## 04 Data Structures

[![Data Structures](https://img.shields.io/badge/Category-Data%20Structures-green.svg)](04_data_structures/)

This section implements fundamental data structures in C.

### Linked List

**Topics Covered:**
- Singly linked list implementation
- Dynamic memory allocation for nodes
- List insertion and traversal
- List size calculation
- Middle element retrieval
- List concatenation and arithmetic operations

**Files:**
- `linked_list/linked_list.c` - Complete linked list implementation with functions for insertion, printing, size calculation, and number addition algorithm

## 05 Algorithms

[![Algorithms](https://img.shields.io/badge/Category-Algorithms-blue.svg)](05_algorithms/)

This section covers fundamental searching and sorting algorithms.

### Searching

**Topics Covered:**
- Sequential/linear search algorithm
- Binary search algorithm
- Time complexity analysis
- Step counting for algorithm efficiency

**Files:**
- `searching/sequential_search.c` - Linear search implementation with step counting
- `searching/binary_search.c` - Binary search implementation with O(log n) complexity

## 06 Math

[![Math](https://img.shields.io/badge/Category-Math-teal.svg)](06_math/)

This section contains mathematical algorithms and pattern generation exercises.

### Series

**Topics Covered:**
- Taylor series expansion
- Sine and cosine calculation using series
- Exponential function calculation
- Factorial computation
- Degree to radian conversion

**Files:**
- `series/series_taylor.c` - Taylor series implementations for sin, cos, and exp functions

### Patterns

**Topics Covered:**
- Pattern generation with nested loops
- Pyramid pattern printing
- User input handling

**Files:**
- `patterns/pyramid.c` - Pyramid pattern generator

## Building and Running

### Prerequisites

- GCC compiler
- Make utility (optional, for projects with makefiles)

### Compilation

Most files can be compiled directly with GCC:

```bash
gcc -Wall -g -o output_name source_file.c
./output_name
```

For projects with makefiles:

```bash
cd 01_basics/project_01
make
```

### Clean Build Artifacts

```bash
cd 01_basics/project_01
make clean
```

## License

This repository is for educational purposes. Feel free to use and modify the code for learning.
