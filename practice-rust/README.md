# Rust Learning Path

[![Rust](https://img.shields.io/badge/Rust-Latest-000000?style=for-the-badge&logo=rust&logoColor=white)](https://www.rust-lang.org/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=for-the-badge)]()

A comprehensive guide to mastering Rust, from ownership fundamentals to systems programming and concurrent applications.

---

## Table of Contents

- [Overview](#overview)
- [Learning Path](#learning-path)
- [Getting Started](#getting-started)
- [Core Concepts](#core-concepts)
- [Project Structure](#project-structure)

---

## Overview

> This repository contains a structured learning path for Rust development, covering fundamental concepts, ownership system, error handling, and practical applications in systems programming and concurrent applications.

**Key Features:**
- Ownership and borrowing system mastery
- Pattern matching and error handling
- Trait systems and generics
- Asynchronous programming with async/await
- Systems programming fundamentals
- Practical project implementations

---

## Learning Path

### Phase 1: Fundamentals

Understanding Rust's core syntax and philosophy.

| Concept | Description | Status |
|---------|-------------|--------|
| Ownership | Move semantics, borrowing, lifetimes | Available |
| Pattern Matching | match expressions, if let | Available |
| Error Handling | Result, Option, ? operator | Available |
| Collections | Vec, String, HashMap | Available |

### Phase 2: Intermediate Concepts

<details>
<summary><b>Trait System</b></summary>

- Defining traits
- Implementing traits
- Trait bounds
- Associated types
- Default implementations

</details>

<details>
<summary><b>Generics & Type Safety</b></summary>

- Generic functions and types
- Monomorphization
- Constraint with trait bounds
- Phantom types

</details>

<details>
<summary><b>Module System</b></summary>

- Modules and packages
- use statements
- Re-exports
- Visibility rules

</details>

### Phase 3: Advanced Topics

<details>
<summary><b>Asynchronous Programming</b></summary>

- Future trait
- async/await syntax
- Tokio runtime
- Concurrent task execution
- Channel communication

</details>

<details>
<summary><b>Systems Programming</b></summary>

- Memory layout and alignment
- Unsafe code blocks
- FFI (Foreign Function Interface)
- Low-level optimizations

</details>

<details>
<summary><b>Macros</b></summary>

- Declarative macros (macro_rules!)
- Procedural macros
- Attribute macros
- Custom derives

</details>

---

## Getting Started

### Prerequisites

- Rust 1.70+ (install from [rustup.rs](https://rustup.rs/))
- Cargo (comes with Rust)
- Text editor or IDE (VS Code with rust-analyzer recommended)

### Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/practice-rust.git
cd practice-rust

# Verify Rust installation
rustc --version
cargo --version
```

### Run Examples

```bash
# Run all tests
cargo test

# Run specific binary
cargo run --bin hello_world

# Run with release optimization
cargo run --release

# Check code without compiling
cargo check

# Build documentation
cargo doc --open
```

---

## Core Concepts

### Ownership System

```
Memory Safety Without Garbage Collection

1. Ownership Rules
   ├── Each value has one owner
   ├── Value is dropped when owner goes out of scope
   └── Ownership can be moved or borrowed

2. Borrowing
   ├── Immutable reference (&T)
   ├── Mutable reference (&mut T)
   └── Lifetime rules

3. Lifetime Annotations
   ├── Named lifetimes ('a, 'b, etc)
   ├── Explicit lifetime bounds
   └── Elision rules
```

### Pattern Matching

| Pattern Type | Example | Use Case |
|--------------|---------|----------|
| **Literal** | `1`, `"hello"` | Exact value matching |
| **Range** | `1..=10` | Numeric ranges |
| **Struct** | `Point { x, y }` | Destructuring |
| **Enum** | `Some(value)`, `None` | Type variants |
| **Binding** | `x @ 1..=5` | Bind matched value |
| **Guard** | `if x > 5` | Additional conditions |

### Error Handling

```rust
// Option - Value or absence
enum Option<T> {
    Some(T),
    None,
}

// Result - Success or failure with reason
enum Result<T, E> {
    Ok(T),
    Err(E),
}

// Using ? operator for propagation
fn operation() -> Result<i32, Error> {
    let value = risky_operation()?;
    Ok(value)
}
```

---

## Project Structure

```
practice-rust/
├── src/
│   ├── bin/                           # Binaries
│   │   ├── hello_world.rs
│   │   ├── ownership_demo.rs
│   │   └── pattern_matching.rs
│   │
│   ├── lib.rs                         # Library root
│   │
│   └── modules/
│       ├── fundamentals/
│       │   ├── variables.rs
│       │   ├── control_flow.rs
│       │   └── functions.rs
│       │
│       ├── ownership/
│       │   ├── ownership.rs
│       │   ├── borrowing.rs
│       │   └── lifetimes.rs
│       │
│       ├── error_handling/
│       │   ├── result.rs
│       │   ├── option.rs
│       │   └── custom_errors.rs
│       │
│       ├── traits/
│       │   ├── trait_definition.rs
│       │   ├── generic_traits.rs
│       │   └── trait_bounds.rs
│       │
│       ├── async_programming/
│       │   ├── futures.rs
│       │   ├── async_await.rs
│       │   └── tokio_basics.rs
│       │
│       └── systems/
│           ├── memory.rs
│           ├── unsafe_code.rs
│           └── ffi_example.rs
│
├── tests/                             # Integration tests
│   └── integration_tests.rs
│
├── Cargo.toml
├── Cargo.lock
└── README.md
```

---

## Key Rust Patterns

### Resource Acquisition Is Initialization (RAII)

```rust
// Resources are automatically cleaned up
struct File {
    handle: i32,
}

impl Drop for File {
    fn drop(&mut self) {
        // Cleanup happens automatically
        println!("File {} closed", self.handle);
    }
}
```

### Builder Pattern

```rust
let config = ConfigBuilder::new()
    .port(8080)
    .timeout(30)
    .build()?;
```

### Type-State Pattern

```rust
struct Config<State> {
    value: String,
    _state: State,
}

// Ensures correct usage at compile time
let unconfigured = Config::new();
let configured = unconfigured.validate()?;
```

---

## Common Commands

### Development

```bash
# Check code syntax without compilation
cargo check

# Build the project
cargo build

# Build with optimizations
cargo build --release

# Format code according to style guide
cargo fmt

# Lint code for common mistakes
cargo clippy

# Run tests
cargo test

# Run specific test
cargo test test_name
```

### Documentation

```bash
# Generate and open documentation
cargo doc --open

# Document private items
cargo doc --private

# Create README from comments
cargo readme > README.md
```

---

## Resources

### Official Documentation
- [The Rust Book](https://doc.rust-lang.org/book/)
- [Rust by Example](https://doc.rust-lang.org/rust-by-example/)
- [Rust Reference](https://doc.rust-lang.org/reference/)
- [The Nomicon](https://doc.rust-lang.org/nomicon/) (Unsafe Rust)

### Learning Platforms
- [Rustlings](https://github.com/rust-lang/rustlings) - Small exercises
- [LeetCode Rust](https://leetcode.com/) - Algorithm challenges
- [Exercism Rust Track](https://exercism.org/tracks/rust)

### Books
- Programming in Rust by Jim Blandy & Jason Orendorff
- The Rustonomicon - Deep dive into unsafe Rust

### Community
- [Rust Forum](https://users.rust-lang.org/)
- [Rust Subreddit](https://www.reddit.com/r/rust/)
- [Rust Discord](https://discord.gg/rust-lang)

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
