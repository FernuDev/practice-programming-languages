# Go Learning Path

[![Go](https://img.shields.io/badge/Go-1.18%2B-00ADD8?style=for-the-badge&logo=go&logoColor=white)](https://golang.org/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=for-the-badge)]()

A comprehensive guide to mastering Go, focusing on concurrency, systems programming, and building scalable applications.

---

## Table of Contents

- [Overview](#overview)
- [Learning Path](#learning-path)
- [Getting Started](#getting-started)
- [Core Concepts](#core-concepts)
- [Project Structure](#project-structure)

---

## Overview

> This repository contains a structured learning path for Go development, covering fundamental concepts, concurrency patterns, interface design, and practical applications in systems programming and network services.

**Key Features:**
- Simple and readable syntax
- Fast compilation and execution
- Built-in concurrency with goroutines and channels
- Strong standard library
- Cross-platform compilation
- Interface-driven design

---

## Learning Path

### Phase 1: Fundamentals

Core Go syntax and basic concepts.

| Topic | Description | Status |
|-------|-------------|--------|
| Variables & Types | Basic types, type conversions | Available |
| Control Flow | if/else, switch, loops | Available |
| Functions | Function declarations, multiple returns | Available |
| Packages & Imports | Module organization | Available |

### Phase 2: Object-Oriented Programming

<details>
<summary><b>Structs & Methods</b></summary>

- Struct definition and initialization
- Methods on types
- Pointer receivers
- Embedding and composition

</details>

<details>
<summary><b>Interfaces</b></summary>

- Interface definition and implementation
- Type assertions
- Empty interface (interface{})
- Interface composition

</details>

<details>
<summary><b>Error Handling</b></summary>

- Error interface
- Custom errors
- Error wrapping with xerrors
- Defer and panic recovery

</details>

### Phase 3: Concurrency

<details>
<summary><b>Goroutines & Channels</b></summary>

- Goroutine creation and scheduling
- Unbuffered channels
- Buffered channels
- Channel operations (send, receive, close)
- Select statement for multiplex

</details>

<details>
<summary><b>Synchronization</b></summary>

- WaitGroups
- Mutexes
- Atomic operations
- Once for one-time initialization

</details>

<details>
<summary><b>Concurrency Patterns</b></summary>

- Worker pools
- Fan-in and fan-out
- Pipeline pattern
- Rate limiting

</details>

### Phase 4: Advanced Topics

<details>
<summary><b>Web Services</b></summary>

- HTTP client and server
- JSON encoding/decoding
- REST API design
- Middleware patterns

</details>

<details>
<summary><b>Database Integration</b></summary>

- Database/sql package
- Prepared statements
- Connection pooling
- ORM basics with GORM

</details>

---

## Getting Started

### Prerequisites

- Go 1.18 or higher (install from [golang.org](https://golang.org/dl/))
- Text editor or IDE (VS Code with Go extension recommended)
- Basic command line knowledge

### Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/practice-go.git
cd practice-go

# Verify Go installation
go version
go env GOPATH
```

### Run Examples

```bash
# Run main program
go run main.go

# Run specific file
go run ./cmd/server/main.go

# Build binary
go build -o myapp

# Run tests
go test ./...

# Run with verbose output
go test -v ./...

# Run benchmarks
go test -bench=. ./...
```

---

## Core Concepts

### Concurrency Model

```
Concurrency in Go

Goroutines (lightweight threads)
    ↓
Channels (communication)
    ↓
Select statement (multiplex)
    ↓
Synchronization primitives
    ├── WaitGroups
    ├── Mutexes
    ├── Atomic operations
    └── Once
```

### Interface-Based Design

| Pattern | Use Case |
|---------|----------|
| **Writer/Reader** | I/O operations |
| **Handler** | HTTP request processing |
| **Iterator** | Collection traversal |
| **Closer** | Resource cleanup |
| **Marshaler** | Custom serialization |

### Error Handling

```go
// Standard error interface
type error interface {
    Error() string
}

// Custom error type
type CustomError struct {
    message string
    code    int
}

func (e *CustomError) Error() string {
    return fmt.Sprintf("error %d: %s", e.code, e.message)
}

// Usage
if err != nil {
    return fmt.Errorf("failed to process: %w", err)
}
```

---

## Project Structure

```
practice-go/
├── cmd/                               # Entry points
│   ├── hello-world/
│   │   └── main.go
│   ├── server/
│   │   └── main.go
│   └── client/
│       └── main.go
│
├── pkg/                               # Reusable packages
│   ├── fundamentals/
│   │   ├── variables.go
│   │   ├── control_flow.go
│   │   └── functions.go
│   │
│   ├── types/
│   │   ├── structs.go
│   │   ├── methods.go
│   │   └── interfaces.go
│   │
│   ├── concurrency/
│   │   ├── goroutines.go
│   │   ├── channels.go
│   │   ├── select.go
│   │   ├── synchronization.go
│   │   └── patterns.go
│   │
│   ├── web/
│   │   ├── http_client.go
│   │   ├── http_server.go
│   │   ├── json_handler.go
│   │   └── middleware.go
│   │
│   └── database/
│       ├── connection.go
│       ├── queries.go
│       └── models.go
│
├── internal/                          # Internal packages
│   └── config/
│       └── config.go
│
├── tests/                             # Test files
│   └── concurrency_test.go
│
├── go.mod
├── go.sum
└── README.md
```

---

## Concurrency Patterns

### Goroutine with WaitGroup

```go
var wg sync.WaitGroup

for i := 0; i < 10; i++ {
    wg.Add(1)
    go func(id int) {
        defer wg.Done()
        doWork(id)
    }(i)
}

wg.Wait()
```

### Worker Pool Pattern

```go
jobs := make(chan Job, 100)
results := make(chan Result, 100)

// Start workers
for i := 0; i < numWorkers; i++ {
    go worker(jobs, results)
}

// Send jobs
for _, job := range jobList {
    jobs <- job
}
close(jobs)
```

### Pipeline Pattern

```go
// Stage 1: Generate numbers
numbers := generate(ctx)

// Stage 2: Square numbers
squares := square(ctx, numbers)

// Stage 3: Print results
print(ctx, squares)
```

---

## Common Commands

### Development

```bash
# Format code according to Go style
go fmt ./...

# Lint code for common mistakes
go vet ./...

# Download dependencies
go get

# Update dependencies
go get -u

# Clean build cache
go clean -cache
```

### Testing

```bash
# Run all tests
go test ./...

# Run specific test
go test -run TestName ./package

# Run with verbose output
go test -v ./...

# Generate coverage report
go test -cover ./...

# Generate coverage file
go test -coverprofile=coverage.out ./...
go tool cover -html=coverage.out
```

### Performance

```bash
# Run benchmarks
go test -bench=. ./...

# Run specific benchmark
go test -bench=BenchmarkName ./...

# Run with memory stats
go test -bench=. -benchmem ./...

# CPU profiling
go test -cpuprofile=cpu.prof -bench=.
go tool pprof cpu.prof
```

---

## Resources

### Official Documentation
- [Go Official Documentation](https://golang.org/doc/)
- [Effective Go](https://golang.org/doc/effective_go)
- [Go Code Review Comments](https://golang.org/wiki/CodeReviewComments)

### Learning Materials
- [A Tour of Go](https://tour.golang.org/)
- [Go by Example](https://gobyexample.com/)
- [Learn Go with Tests](https://quii.gitbook.io/learn-go-with-tests/)

### Books
- The Go Programming Language by Donovan & Kernighan
- Go in Action by Kennedy, Ketelsen & St. Jean
- Concurrency in Go by Katherine Cox-Buday

### Community
- [Go Forum](https://golang.org/wiki/Forums)
- [Go Slack Community](https://gophers.slack.com/)
- [Go Reddit](https://www.reddit.com/r/golang/)

---

## Standard Library Highlights

| Package | Purpose |
|---------|---------|
| **fmt** | Formatted I/O |
| **io** | Interface and primitives for I/O |
| **os** | Operating system functionality |
| **net** | Network I/O primitives |
| **http** | HTTP client and server |
| **json** | JSON encoding and decoding |
| **database/sql** | Database connectivity |
| **time** | Time and duration handling |
| **sync** | Synchronization primitives |
| **context** | Context for deadlines and cancellation |

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
