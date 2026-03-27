# Practice Programming Languages

<div align="center">

[![GitHub License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![Last Updated](https://img.shields.io/badge/updated-2026--03-brightgreen)](https://github.com)
[![Languages](https://img.shields.io/badge/languages-7-informational)](README.md)
[![Repository Status](https://img.shields.io/badge/status-actively%20maintained-success.svg)](README.md)

A comprehensive repository for practicing and mastering multiple programming languages through hands-on projects and exercises.

</div>

---

## Table of Contents

- [Overview](#overview)
- [Supported Languages](#supported-languages)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Language Guides](#language-guides)
- [Quick Reference](#quick-reference)
- [Contributing](#contributing)

---

## Overview

> This repository serves as a unified workspace for learning and practicing different programming languages. Each language has its own dedicated directory with projects, exercises, and examples tailored to that language's unique features and paradigms.

**Key Features:**

| Feature | Description |
|---------|-------------|
| **Multi-Language Support** | Learn 7 different programming languages in one place |
| **Organized Structure** | Each language has dedicated directories and resources |
| **Hands-On Learning** | Real-world projects and practical exercises |
| **Best Practices** | Industry-standard patterns and conventions |
| **Scalable** | Easy to expand with new languages and projects |

---

## Supported Languages

<table>
<tr>
<td>

### Java
[![Java](https://img.shields.io/badge/Java-ED8B00?style=flat-square&logo=java&logoColor=white)](practice-java/)

Object-oriented programming with enterprise focus.

**Status:** ✓ Active

</td>
<td>

### Python
[![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)](practice-python/)

Versatile language for general-purpose programming.

**Status:** ✓ Active

</td>
</tr>
<tr>
<td>

### Rust
[![Rust](https://img.shields.io/badge/Rust-000000?style=flat-square&logo=rust&logoColor=white)](practice-rust/)

Systems programming with memory safety.

**Status:** ✓ Active

</td>
<td>

### Go
[![Go](https://img.shields.io/badge/Go-00ADD8?style=flat-square&logo=go&logoColor=white)](practice-go/)

Concurrent and efficient systems language.

**Status:** ✓ Active

</td>
</tr>
<tr>
<td>

### C++
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](practice-cpp/)

High-performance with low-level control.

**Status:** ✓ Active

</td>
<td>

### .NET
[![.NET](https://img.shields.io/badge/.NET-512BD4?style=flat-square&logo=dotnet&logoColor=white)](practice-dotnet/)

Microsoft ecosystem for modern applications.

**Status:** ✓ Active

</td>
</tr>
<tr>
<td colspan="2">

### C
[![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black)](practice-c/)

Foundational language for systems programming.

**Status:** ✓ Active

</td>
</tr>
</table>

---

## Project Structure

```
practice-programming-languages/
├── practice-java/              Java projects and exercises
├── practice-python/            Python projects and exercises
├── practice-rust/              Rust projects and exercises
├── practice-go/                Go projects and exercises
├── practice-cpp/               C++ projects and exercises
├── practice-dotnet/            .NET projects and exercises
├── practice-c/                 C projects and exercises
└── README.md                   This file
```

---

## Getting Started

### Prerequisites

Make sure you have the following tools installed:

<details>
<summary><b>View All Required Tools</b></summary>

| Tool | Version | Install Link |
|------|---------|--------------|
| Java JDK | 11+ | [oracle.com/java](https://www.oracle.com/java/technologies/downloads/) |
| Python | 3.8+ | [python.org](https://www.python.org/downloads/) |
| Rust | Latest | [rustup.rs](https://rustup.rs/) |
| Go | 1.18+ | [golang.org](https://golang.org/dl/) |
| GCC/G++ | Latest | [gcc.gnu.org](https://gcc.gnu.org/) |
| .NET SDK | 6.0+ | [dotnet.microsoft.com](https://dotnet.microsoft.com/download) |
| Git | Latest | [git-scm.com](https://git-scm.com/) |

</details>

### Clone the Repository

```bash
git clone https://github.com/yourusername/practice-programming-languages.git
cd practice-programming-languages
```

---

## Language Guides

<details open>
<summary><b>Java</b></summary>

**Location:** `practice-java/`

```bash
cd practice-java
javac HelloWorld.java
java HelloWorld
```

**Topics:**
- Object-Oriented Programming
- Collections Framework
- Streams & Functional Programming
- Concurrency & Threading
- Spring Framework Basics

**Recommended Resources:**
- [Java Documentation](https://docs.oracle.com/javase/)
- [Effective Java](https://www.oracle.com/java/technologies/books.html)

</details>

<details>
<summary><b>Python</b></summary>

**Location:** `practice-python/`

```bash
cd practice-python
python3 main.py
```

**Topics:**
- Data Structures & Algorithms
- Object-Oriented & Functional Programming
- Web Development (Flask, Django)
- Data Science & Analysis
- Automation Scripts

**Recommended Resources:**
- [Python.org Documentation](https://docs.python.org/3/)
- [Real Python](https://realpython.com/)

</details>

<details>
<summary><b>Rust</b></summary>

**Location:** `practice-rust/`

```bash
cd practice-rust
cargo run
```

**Topics:**
- Ownership & Borrowing System
- Pattern Matching
- Error Handling (Result & Option)
- Async Programming
- Systems Programming

**Recommended Resources:**
- [The Rust Book](https://doc.rust-lang.org/book/)
- [Rust by Example](https://doc.rust-lang.org/rust-by-example/)

</details>

<details>
<summary><b>Go</b></summary>

**Location:** `practice-go/`

```bash
cd practice-go
go run main.go
```

**Topics:**
- Goroutines & Channels
- Interface Design
- Package Management
- Web Services Development
- Concurrent Programming Patterns

**Recommended Resources:**
- [Go Official Documentation](https://golang.org/doc/)
- [Effective Go](https://golang.org/doc/effective_go)

</details>

<details>
<summary><b>C++</b></summary>

**Location:** `practice-cpp/`

```bash
cd practice-cpp
g++ -o program main.cpp
./program
```

**Topics:**
- Standard Template Library (STL)
- Object-Oriented Design
- Memory Management & RAII
- Templates & Generic Programming
- Modern C++ (C++11/17/20)

**Recommended Resources:**
- [CPlusPlus Reference](https://www.cplusplus.com/)
- [CPP Core Guidelines](https://github.com/isocpp/CppCoreGuidelines)

</details>

<details>
<summary><b>.NET / C#</b></summary>

**Location:** `practice-dotnet/`

```bash
cd practice-dotnet
dotnet run
```

**Topics:**
- C# Language Features
- LINQ & Query Expressions
- Async/Await Patterns
- Entity Framework
- ASP.NET Core Fundamentals

**Recommended Resources:**
- [Microsoft Learn - C#](https://learn.microsoft.com/en-us/dotnet/csharp/)
- [.NET Documentation](https://learn.microsoft.com/en-us/dotnet/)

</details>

<details>
<summary><b>C</b></summary>

**Location:** `practice-c/`

```bash
cd practice-c
gcc -o program main.c
./program
```

**Topics:**
- Pointers & Memory Management
- Data Structures (Arrays, Lists, Trees)
- File I/O Operations
- Systems Programming Concepts
- Algorithm Implementation

**Recommended Resources:**
- [C Documentation](https://en.cppreference.com/w/c)
- [K&R - The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language)

</details>

---

## Quick Reference

### Build & Run Commands

```bash
# Java
cd practice-java && javac Main.java && java Main

# Python
cd practice-python && python3 main.py

# Rust
cd practice-rust && cargo run

# Go
cd practice-go && go run main.go

# C++
cd practice-cpp && g++ -o app main.cpp && ./app

# .NET
cd practice-dotnet && dotnet run

# C
cd practice-c && gcc -o app main.c && ./app
```

---

## Repository Statistics

| Metric | Value |
|--------|-------|
| Total Languages | 7 |
| Repository Status | Actively Maintained |
| Last Updated | March 2026 |
| Total Directories | 7 |
| License | MIT |

---

## Learning Path Recommendation

### Beginner Level
1. Python - Dynamic, readable syntax
2. Go - Simple concurrency model
3. Java - Strong OOP foundation

### Intermediate Level
1. C++ - Performance and control
2. C - Fundamental systems concepts
3. Rust - Modern systems programming

### Advanced Level
1. Rust with async/await
2. Go with concurrency patterns
3. .NET with advanced C# features

---

## Suggested Progression

```
Start Here
    ↓
Python (Fundamentals)
    ↓
Go or Java (Paradigm Choice)
    ↓
C/C++ (Systems Programming)
    ↓
Rust (Advanced Systems)
    ↓
.NET (Enterprise Development)
```

---

## Contributing

Contributions are welcome! Please follow these steps:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/your-feature`)
3. **Commit** your changes (`git commit -m 'Add feature'`)
4. **Push** to your branch (`git push origin feature/your-feature`)
5. **Open** a Pull Request

### Guidelines

- Follow language-specific style guides
- Include comments for complex logic
- Test your code before submitting
- Update relevant documentation

---

## Resources & References

### Documentation
- [Java SE Documentation](https://docs.oracle.com/javase/)
- [Python Official Docs](https://docs.python.org/)
- [Rust Documentation](https://www.rust-lang.org/documentation.html)
- [Go Documentation](https://golang.org/doc/)
- [C++ Reference](https://en.cppreference.com/)
- [.NET Documentation](https://learn.microsoft.com/dotnet/)
- [C Language Reference](https://en.cppreference.com/w/c)

### Useful Tools
- **IDE/Editors:** VS Code, IntelliJ IDEA, Visual Studio, Vim
- **Build Tools:** Maven, Gradle, Cargo, Make, CMake
- **Version Control:** Git & GitHub
- **Debugging:** GDB, LLDB, Debuggers built into IDEs

---

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) file for details.

---

<div align="center">

### Repository Information

**Location:** `/Users/fernudev/Documents/practice-programming-languages/`

**Maintained by:** Programming Language Enthusiasts

**Last Updated:** 2026-03-27

Found this helpful? Consider starring the repository!

---

</div>
