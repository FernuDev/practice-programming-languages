# Rust Fundamentals

[![Rust](https://img.shields.io/badge/Rust-1.70+-CE422B?style=for-the-badge&logo=rust&logoColor=white)](https://www.rust-lang.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-success.svg)]()

A comprehensive guide to learning Rust fundamentals through practical, well-commented examples. Each topic is a standalone executable program.

---

## Table of Contents

- [Overview](#overview)
- [Modules](#modules)
- [Getting Started](#getting-started)
- [How to Run](#how-to-run)

---

## Overview

This module covers the essential concepts of Rust from basic syntax through ownership system, error handling, and advanced features like traits and generics.

**Key Features:**
- 13 standalone Rust programs, each covering one topic
- Full Spanish comments explaining each concept
- Practical, real-world examples
- Rust 1.70+ compatible
- Compiles with Cargo for cross-platform support
- Each program can be run independently

---

## Modules

All files located in `src/`:

### 1. **variables.rs**
Core data types and variables:
- Primitive types: `u8`, `i32`, `f64`, `bool`, `char`
- String types: `&str`, `String`
- Tuples and arrays
- Immutability and shadowing
- Type inference

### 2. **operadores.rs**
All Rust operators:
- Arithmetic: `+`, `-`, `*`, `/`, `%`
- Comparison: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical: `&&`, `||`, `!`
- Bitwise: `&`, `|`, `^`, `!`, `<<`, `>>`
- Type casting: `as`
- References: `&`, `&mut`, `*`

### 3. **control_flujo.rs**
Control flow structures:
- `if`/`else if`/`else` as expressions
- `match` statement with pattern matching
- Guard conditions in patterns
- `if let` simplified matching

### 4. **bucles.rs**
Loop structures:
- `loop` (infinite loop with break)
- `while` conditional loop
- `for` with ranges and iterators
- `break` and `continue`
- Loop labels for nested loops

### 5. **funciones.rs**
Function definition and usage:
- Function declaration and return types
- Parameters and return values
- Closures and lambda functions
- Iterators: `map()`, `filter()`, `fold()`
- Early returns

### 6. **ownership.rs**
Rust's ownership system:
- Move semantics
- Copy trait for simple types
- Clone for explicit copying
- Scope and lifetime of values
- Memory safety without garbage collection

### 7. **referencias.rs**
References and borrowing:
- Immutable references `&T`
- Mutable references `&mut T`
- Borrowing rules
- Lifetime annotations
- Slices: references to portions

### 8. **structs.rs**
Structure definition and methods:
- Struct declaration
- Methods with `&self`, `&mut self`, `self`
- Constructor pattern
- Generics in structs
- Tuple structs

### 9. **enums.rs**
Enumeration and pattern matching:
- Enum declaration
- Enums with associated data
- `Option<T>`: `Some(T)`, `None`
- `Result<T, E>`: `Ok(T)`, `Err(E)`
- Match expressions and guards

### 10. **strings.rs**
String manipulation:
- `&str`: string slice
- `String`: owned string
- String methods: `len()`, `chars()`, `contains()`
- String concatenation
- Conversion and formatting

### 11. **colecciones.rs**
Collections and iterators:
- `Vec<T>`: dynamic vector
- `HashMap<K, V>`: key-value pairs
- `HashSet<T>`: unique elements
- `VecDeque<T>`: double-ended queue
- Functional operations: `map()`, `filter()`

### 12. **errores.rs**
Error handling patterns:
- `Option<T>` for optional values
- `Result<T, E>` for error handling
- The `?` operator for error propagation
- Custom error types
- Match vs if let

### 13. **traits.rs**
Trait system and generics:
- Trait definition
- Trait implementation
- Trait bounds: `<T: Trait>`
- Multiple trait bounds
- Associated types
- Trait objects: `Box<dyn Trait>`

---

## Getting Started

### Prerequisites

- Rust 1.70+ (install from [rustup.rs](https://rustup.rs/))
- Cargo (comes with Rust)

### Build

```bash
cd fundamentals

# Compile all programs
./build.sh
# OR manually:
# cargo build --release
```

### Run Individual Programs

```bash
# Run any program
cargo run --release --bin variables
cargo run --release --bin operadores
cargo run --release --bin control_flujo
cargo run --release --bin bucles
cargo run --release --bin funciones
cargo run --release --bin ownership
cargo run --release --bin referencias
cargo run --release --bin structs
cargo run --release --bin enums
cargo run --release --bin strings
cargo run --release --bin colecciones
cargo run --release --bin errores
cargo run --release --bin traits
```

---

## How to Run

### Compile and Run

```bash
# Compile with optimizations
cargo build --release

# Run a specific program
cargo run --release --bin variables

# Run all programs
./build.sh
```

### View Output

All programs print comprehensive output demonstrating each concept. Each section is clearly labeled with separators like:
```
===== NOMBRE DE LA SECCIÓN =====
```

### Examples of Output

Running `./target/release/variables` shows:
- All primitive types with details
- Type inference examples
- Immutability and shadowing
- Tuples and arrays

Running `./target/release/ownership` shows:
- Move semantics demonstration
- Copy trait behavior
- Scope and lifetime examples
- Memory safety concepts

Running `./target/release/traits` shows:
- Trait implementation patterns
- Trait bounds usage
- Generic programming
- Trait objects

---

## Code Style

All files follow the established Rust practice style:

- **Comments:** Single-line `//` in Spanish, explaining concepts
- **Separators:** `// ===== SECTION TITLE =====` with matching `println!` output
- **Variables:** snake_case Spanish names (`numero_entero`, `velocidad_maxima`)
- **Constants:** `SCREAMING_SNAKE_CASE` Spanish (`VELOCIDAD_LUZ`)
- **Functions:** snake_case (`calcular_area`, `procesar_datos`)
- **Types/Traits:** PascalCase (`Persona`, `Describible`)
- **Indentation:** 4 spaces

---

## Recommended Order

1. **variables.rs** - Start with data types
2. **operadores.rs** - Learn all operators
3. **control_flujo.rs** - Control flow
4. **bucles.rs** - Loops
5. **funciones.rs** - Functions and closures
6. **ownership.rs** - Ownership (critical for Rust!)
7. **referencias.rs** - References and borrowing
8. **structs.rs** - Structures and methods
9. **enums.rs** - Enums and pattern matching
10. **strings.rs** - String handling
11. **colecciones.rs** - Collections
12. **errores.rs** - Error handling
13. **traits.rs** - Traits and generics

---

## Resources

### Official Documentation
- [The Rust Book](https://doc.rust-lang.org/book/)
- [Rust by Example](https://doc.rust-lang.org/rust-by-example/)
- [Rust Reference](https://doc.rust-lang.org/reference/)

### Learning Platforms
- [Rustlings](https://github.com/rust-lang/rustlings) - Interactive exercises
- [Exercism Rust Track](https://exercism.org/tracks/rust)
- [LeetCode Rust](https://leetcode.com/)

### Community
- [Rust Forum](https://users.rust-lang.org/)
- [Rust Subreddit](https://www.reddit.com/r/rust/)
- [Rust Discord](https://discord.gg/rust-lang)

---

## Common Cargo Commands

```bash
# Check syntax without compiling
cargo check

# Build the project
cargo build
cargo build --release

# Run a binary
cargo run --bin name
cargo run --release --bin name

# Format code
cargo fmt

# Lint code
cargo clippy

# Run tests
cargo test

# Generate documentation
cargo doc --open
```

---

## License

This project is licensed under the MIT License. See the main repository for details.

---

<div align="center">

### Part of practice-programming-languages

**Last Updated:** March 2026

Learning Rust fundamentals - one program at a time! 🦀

</div>
