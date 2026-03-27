# C++ Learning Path

[![C++](https://img.shields.io/badge/C%2B%2B-17/20-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://en.cppreference.com/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=for-the-badge)]()

A comprehensive guide to mastering modern C++, from fundamentals through advanced metaprogramming and systems programming.

---

## Table of Contents

- [Overview](#overview)
- [Learning Path](#learning-path)
- [Getting Started](#getting-started)
- [Core Concepts](#core-concepts)
- [Project Structure](#project-structure)

---

## Overview

> This repository contains a structured learning path for C++ development, covering modern C++ (C++11/17/20), object-oriented design, template metaprogramming, and practical applications in systems programming and high-performance computing.

**Key Features:**
- Modern C++ practices and standards
- Standard Template Library (STL) mastery
- Object-oriented and generic programming
- Template metaprogramming fundamentals
- Memory management and smart pointers
- Performance optimization techniques

---

## Learning Path

### Phase 1: Fundamentals

Core C++ syntax and basic concepts.

| Topic | Description | Status |
|-------|-------------|--------|
| Variables & Types | Basic types, type deduction | Available |
| Control Flow | if/else, switch, loops | Available |
| Functions | Function declarations, overloading | Available |
| Pointers & References | Memory addressing, references | Available |

### Phase 2: Object-Oriented Programming

<details>
<summary><b>Classes & Objects</b></summary>

- Class definition and members
- Constructors and destructors
- Access modifiers
- Operator overloading
- Const correctness

</details>

<details>
<summary><b>Inheritance & Polymorphism</b></summary>

- Base and derived classes
- Virtual functions
- Abstract classes
- Multiple inheritance
- RTTI (Run-Time Type Information)

</details>

<details>
<summary><b>Memory Management</b></summary>

- Stack vs heap allocation
- new and delete operators
- Smart pointers (unique_ptr, shared_ptr)
- RAII principle
- Memory leaks prevention

</details>

### Phase 3: Standard Template Library (STL)

<details>
<summary><b>Containers</b></summary>

- Sequence: vector, deque, list
- Associative: map, set, unordered_map
- Adapters: stack, queue, priority_queue
- Container operations and complexity

</details>

<details>
<summary><b>Iterators & Algorithms</b></summary>

- Iterator categories
- Iterator operations
- Algorithm library (sort, find, transform)
- Lambda functions in algorithms
- Ranges (C++20)

</details>

### Phase 4: Advanced Topics

<details>
<summary><b>Templates & Generics</b></summary>

- Template functions and classes
- Template specialization
- Template metaprogramming basics
- SFINAE (Substitution Failure Is Not An Error)
- Concepts (C++20)

</details>

<details>
<summary><b>Modern C++ Features</b></summary>

- Move semantics and rvalue references
- Perfect forwarding
- auto and decltype
- Range-based for loops
- nullptr and initializer lists

</details>

<details>
<summary><b>Concurrency</b></summary>

- std::thread
- Mutexes and locks
- Atomic operations
- Future and promises
- Task-based parallelism

</details>

---

## Getting Started

### Prerequisites

- C++17 compatible compiler (GCC 7+, Clang 5+, MSVC 2017+)
- CMake 3.10+ for build system
- Standard library headers

### Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/practice-cpp.git
cd practice-cpp

# Verify compiler
g++ --version
clang++ --version
```

### Compile & Run

```bash
# Single file compilation
g++ -std=c++17 -o program main.cpp

# Run program
./program

# Compile with warnings
g++ -std=c++17 -Wall -Wextra -o program main.cpp

# Debug build
g++ -std=c++17 -g -o program main.cpp

# Release build with optimization
g++ -std=c++17 -O3 -o program main.cpp
```

### CMake Build

```bash
# Create build directory
mkdir build && cd build

# Generate build files
cmake -DCMAKE_BUILD_TYPE=Release ..

# Build project
cmake --build .

# Run executable
./program
```

---

## Core Concepts

### Memory Management Evolution

```
Raw Pointers (C-style)
    ↓ (error-prone)
new/delete operators
    ↓ (automatic cleanup)
Smart Pointers (C++11+)
    ├── unique_ptr (exclusive ownership)
    └── shared_ptr (shared ownership)

Best Practice: RAII (Resource Acquisition Is Initialization)
```

### STL Container Complexity

| Container | Insert | Delete | Access | Search |
|-----------|--------|--------|--------|--------|
| **vector** | O(n) | O(n) | O(1) | O(n) |
| **deque** | O(1) ends | O(1) ends | O(1) | O(n) |
| **list** | O(1) | O(1) | O(n) | O(n) |
| **map** | O(log n) | O(log n) | O(log n) | O(log n) |
| **set** | O(log n) | O(log n) | — | O(log n) |
| **unordered_map** | O(1) avg | O(1) avg | O(1) avg | O(1) avg |

### Type System Features

| Feature | Purpose |
|---------|---------|
| **auto** | Type deduction |
| **decltype** | Extract type information |
| **std::enable_if** | Conditional compilation |
| **SFINAE** | Template specialization |
| **Concepts** | Constrain template parameters |

---

## Project Structure

```
practice-cpp/
├── src/                               # Source files
│   ├── fundamentals/
│   │   ├── variables.cpp
│   │   ├── control_flow.cpp
│   │   ├── functions.cpp
│   │   └── pointers_references.cpp
│   │
│   ├── oop/
│   │   ├── classes.cpp
│   │   ├── constructors.cpp
│   │   ├── inheritance.cpp
│   │   ├── polymorphism.cpp
│   │   └── operator_overloading.cpp
│   │
│   ├── memory/
│   │   ├── raw_pointers.cpp
│   │   ├── smart_pointers.cpp
│   │   ├── raii_principle.cpp
│   │   └── move_semantics.cpp
│   │
│   ├── stl/
│   │   ├── containers.cpp
│   │   ├── iterators.cpp
│   │   ├── algorithms.cpp
│   │   ├── ranges.cpp
│   │   └── custom_containers.cpp
│   │
│   ├── templates/
│   │   ├── template_basics.cpp
│   │   ├── template_specialization.cpp
│   │   ├── metaprogramming.cpp
│   │   ├── sfinae.cpp
│   │   └── concepts.cpp
│   │
│   ├── concurrency/
│   │   ├── threads.cpp
│   │   ├── synchronization.cpp
│   │   ├── atomic.cpp
│   │   └── async.cpp
│   │
│   └── advanced/
│       ├── move_semantics.cpp
│       ├── perfect_forwarding.cpp
│       └── type_traits.cpp
│
├── include/                           # Header files
│   └── custom_lib.h
│
├── tests/                             # Unit tests
│   ├── test_containers.cpp
│   └── test_algorithms.cpp
│
├── CMakeLists.txt
└── README.md
```

---

## Modern C++ Best Practices

### Smart Pointer Usage

```cpp
// Bad: Raw pointers
int* ptr = new int(42);
delete ptr;  // Must remember to delete

// Good: Smart pointers
std::unique_ptr<int> uptr(new int(42));  // Exclusive ownership
std::shared_ptr<int> sptr = std::make_shared<int>(42);  // Shared ownership
// Automatic cleanup when out of scope
```

### RAII Pattern

```cpp
class FileHandler {
private:
    FILE* handle;

public:
    FileHandler(const std::string& filename) {
        handle = fopen(filename.c_str(), "r");
        if (!handle) throw std::runtime_error("File open failed");
    }

    ~FileHandler() {
        if (handle) fclose(handle);  // Always cleaned up
    }

    // Prevent copying
    FileHandler(const FileHandler&) = delete;
    FileHandler& operator=(const FileHandler&) = delete;
};
```

### Template Function

```cpp
template<typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

// Usage
int imax = max(3, 5);
double dmax = max(3.14, 2.71);
```

---

## Common Commands

### Compilation

```bash
# Standard compilation
g++ -std=c++17 program.cpp

# With optimization and warnings
g++ -std=c++20 -O3 -Wall -Wextra program.cpp -o program

# Debug information
g++ -std=c++17 -g program.cpp

# Generate assembly
g++ -std=c++17 -S program.cpp
```

### Build with CMake

```bash
# Configure
cmake -B build -DCMAKE_BUILD_TYPE=Release

# Build
cmake --build build

# Run tests
ctest --test-dir build
```

### Debugging

```bash
# Run with GDB
gdb ./program

# Within GDB
(gdb) run
(gdb) break main
(gdb) next
(gdb) print variable
(gdb) quit
```

---

## Resources

### Official Documentation
- [C++ Reference](https://en.cppreference.com/)
- [C++ Standards Committee](https://isocpp.org/)
- [CppCoreGuidelines](https://github.com/isocpp/CppCoreGuidelines)

### Learning Materials
- [LearnCpp.com](https://www.learncpp.com/)
- [C++ Tutor - Visualize execution](https://pythontutor.com/cpp.html)

### Books
- C++ Primer by Lippman, Lajoie & Moo
- Effective Modern C++ by Scott Meyers
- C++ Templates by Vandevoorde, Josuttis & Gregor

### Online Judges
- [LeetCode C++](https://leetcode.com/)
- [Codeforces](https://codeforces.com/)
- [HackerRank C++](https://www.hackerrank.com/domains/cpp)

---

## Standard Library Highlights

| Category | Important Classes/Functions |
|----------|---------------------------|
| **Containers** | vector, map, set, deque, list |
| **Iterators** | iterator traits, ranges (C++20) |
| **Algorithms** | sort, find, transform, accumulate |
| **Memory** | unique_ptr, shared_ptr, make_unique |
| **Utilities** | std::pair, std::tuple, std::variant |
| **Concurrency** | thread, mutex, future, atomic |
| **Strings** | std::string, std::string_view (C++17) |
| **Input/Output** | iostream, fstream, stringstream |

---

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) file for details.

---

<div align="center">

### Repository Information

**Maintained:** As part of practice-programming-languages

**Last Updated:** 2026-03-27

Found this helpful? Consider starring the repository!

</div>
