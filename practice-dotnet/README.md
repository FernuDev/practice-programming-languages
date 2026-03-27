# .NET / C# Learning Path

[![.NET](https://img.shields.io/badge/.NET-8.0%2B-512BD4?style=for-the-badge&logo=dotnet&logoColor=white)](https://dotnet.microsoft.com/)
[![C#](https://img.shields.io/badge/C%23-12.0-239120?style=for-the-badge&logo=csharp&logoColor=white)](https://docs.microsoft.com/en-us/dotnet/csharp/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=for-the-badge)]()

A comprehensive guide to mastering .NET and C#, from fundamentals through enterprise application development and cloud integration.

---

## Table of Contents

- [Overview](#overview)
- [Learning Path](#learning-path)
- [Getting Started](#getting-started)
- [Core Concepts](#core-concepts)
- [Project Structure](#project-structure)

---

## Overview

> This repository contains a structured learning path for .NET development using C#, covering fundamental language features, asynchronous programming, database integration, and practical applications in web services and enterprise systems.

**Key Features:**
- Modern C# language features (nullable types, pattern matching, records)
- Asynchronous programming with async/await
- Entity Framework Core for database access
- ASP.NET Core fundamentals
- Dependency injection and middleware
- LINQ for data queries

---

## Learning Path

### Phase 1: C# Fundamentals

Core language features and object-oriented programming.

| Topic | Description | Status |
|-------|-------------|--------|
| Variables & Types | Value types, reference types, nullable | Available |
| Control Flow | if/else, switch expressions, loops | Available |
| Methods & Classes | Methods, properties, constructors | Available |
| OOP Principles | Encapsulation, inheritance, polymorphism | Available |

### Phase 2: Advanced Language Features

<details>
<summary><b>LINQ & Data Queries</b></summary>

- Query syntax and method syntax
- LINQ providers
- Deferred execution
- Standard query operators
- Custom LINQ providers

</details>

<details>
<summary><b>Asynchronous Programming</b></summary>

- async/await keywords
- Task and Task<T>
- Async patterns
- Exception handling in async code
- ValueTask for optimization

</details>

<details>
<summary><b>Generics & Delegates</b></summary>

- Generic types and constraints
- Contravariance and covariance
- Delegates and events
- Func<> and Action<>
- Lambda expressions

</details>

<details>
<summary><b>Modern C# Features</b></summary>

- Pattern matching (C# 7.0+)
- Records (C# 9.0+)
- Nullable reference types (C# 8.0+)
- Init-only properties
- Top-level statements (C# 9.0+)

</details>

### Phase 3: Data Access & Entity Framework

<details>
<summary><b>Entity Framework Core</b></summary>

- DbContext and models
- Migrations
- LINQ to Entities
- Relationships (one-to-many, many-to-many)
- Performance optimization (eager/lazy loading)

</details>

<details>
<summary><b>Database Operations</b></summary>

- CRUD operations
- Complex queries
- Change tracking
- Transactions
- Bulk operations

</details>

### Phase 4: Web Development

<details>
<summary><b>ASP.NET Core Fundamentals</b></summary>

- Routing and endpoints
- Controllers and actions
- Dependency injection container
- Configuration and options
- Logging and diagnostics

</details>

<details>
<summary><b>Web APIs</b></summary>

- REST principles
- Controller-based APIs
- Minimal APIs
- OpenAPI/Swagger documentation
- Error handling and validation

</details>

<details>
<summary><b>Middleware & Filters</b></summary>

- Request/response pipeline
- Custom middleware
- Action filters
- Authorization and authentication
- CORS configuration

</details>

---

## Getting Started

### Prerequisites

- .NET 8.0 SDK or later (download from [dotnet.microsoft.com](https://dotnet.microsoft.com/download))
- C# 12.0 language features
- Text editor or IDE (Visual Studio 2022 or VS Code recommended)

### Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/practice-dotnet.git
cd practice-dotnet

# Verify .NET installation
dotnet --version
dotnet --list-sdks
```

### Create New Project

```bash
# Console application
dotnet new console -n MyApp

# ASP.NET Core Web API
dotnet new webapi -n MyApi

# Class library
dotnet new classlib -n MyLibrary

# List available templates
dotnet new list
```

### Run & Build

```bash
# Run project
dotnet run

# Run specific project
dotnet run --project ./src/MyApp/MyApp.csproj

# Build project
dotnet build

# Build for release
dotnet build -c Release

# Run tests
dotnet test

# Publish application
dotnet publish -c Release
```

---

## Core Concepts

### Type System

```
.NET Type System

┌─ Value Types (stored on stack)
│  ├─ Primitive: int, double, bool, char
│  ├─ Struct: custom value types
│  └─ Enum: enumerated values
│
└─ Reference Types (stored on heap)
   ├─ Class: custom types
   ├─ Interface: contracts
   ├─ Delegate: type-safe function pointers
   ├─ Array: collections
   ├─ Record: immutable-by-default classes
   └─ String: immutable sequences
```

### Properties & Backing Fields

| Feature | Use Case |
|---------|----------|
| **Auto-properties** | Simple get/set without logic |
| **Init-only properties** | Immutable after construction |
| **Indexers** | Array-like access to objects |
| **Events** | Publish-subscribe pattern |
| **Backing fields** | Complex property logic |

### LINQ Query Patterns

```csharp
// Method syntax
var numbers = Enumerable.Range(1, 10)
    .Where(n => n % 2 == 0)
    .Select(n => n * 2)
    .OrderBy(n => n);

// Query syntax
var result = from n in Enumerable.Range(1, 10)
             where n % 2 == 0
             select n * 2;
```

### Async/Await Pattern

```csharp
// Async method
public async Task<string> FetchDataAsync(string url)
{
    using var client = new HttpClient();
    var response = await client.GetAsync(url);
    return await response.Content.ReadAsStringAsync();
}

// Usage
var data = await FetchDataAsync("https://example.com");
```

---

## Project Structure

```
practice-dotnet/
├── src/
│   ├── 01-Fundamentals/
│   │   ├── Variables.cs
│   │   ├── ControlFlow.cs
│   │   ├── Methods.cs
│   │   └── Classes.cs
│   │
│   ├── 02-OOP/
│   │   ├── Inheritance.cs
│   │   ├── Polymorphism.cs
│   │   ├── Interfaces.cs
│   │   └── Abstraction.cs
│   │
│   ├── 03-AdvancedFeatures/
│   │   ├── Generics.cs
│   │   ├── Delegates.cs
│   │   ├── Events.cs
│   │   ├── PatternMatching.cs
│   │   └── Records.cs
│   │
│   ├── 04-LINQ/
│   │   ├── QuerySyntax.cs
│   │   ├── MethodSyntax.cs
│   │   ├── DeferredExecution.cs
│   │   └── CustomProviders.cs
│   │
│   ├── 05-Async/
│   │   ├── AsyncAwait.cs
│   │   ├── TaskParallelism.cs
│   │   ├── TaskCombination.cs
│   │   └── ExceptionHandling.cs
│   │
│   ├── 06-EFCore/
│   │   ├── DbContext.cs
│   │   ├── Models/
│   │   ├── Migrations/
│   │   └── Queries.cs
│   │
│   └── 07-WebAPI/
│       ├── Program.cs
│       ├── Controllers/
│       │   └── ProductController.cs
│       ├── Models/
│       ├── Services/
│       └── appsettings.json
│
├── tests/
│   ├── UnitTests/
│   └── IntegrationTests/
│
├── .gitignore
├── .sln
└── README.md
```

---

## C# Language Features Timeline

| Version | Key Features |
|---------|-------------|
| **C# 7.0** | Tuples, pattern matching, local functions |
| **C# 8.0** | Nullable reference types, default interface members |
| **C# 9.0** | Records, init-only properties, top-level statements |
| **C# 10.0** | Global using directives, file-scoped types, record structs |
| **C# 11.0** | Raw string literals, generic attributes, list patterns |
| **C# 12.0** | Primary constructors, collection expressions, inline arrays |

---

## Common Commands

### Project Management

```bash
# Add NuGet package
dotnet add package Newtonsoft.Json

# Remove package
dotnet remove package Newtonsoft.Json

# List packages
dotnet list package

# Update packages
dotnet package update
```

### Database Management

```bash
# Add migration
dotnet ef migrations add InitialCreate

# Update database
dotnet ef database update

# Remove migration
dotnet ef migrations remove

# Generate SQL
dotnet ef migrations script
```

### Testing

```bash
# Run all tests
dotnet test

# Run specific test class
dotnet test --filter "Class=MyTests"

# Run with coverage
dotnet test /p:CollectCoverage=true

# View coverage report
dotnet test /p:CollectCoverage=true /p:CoverageFormat=opencover
```

---

## Resources

### Official Documentation
- [.NET Documentation](https://docs.microsoft.com/en-us/dotnet/)
- [C# Language Reference](https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/)
- [Entity Framework Core](https://docs.microsoft.com/en-us/ef/core/)
- [ASP.NET Core Documentation](https://docs.microsoft.com/en-us/aspnet/core/)

### Learning Platforms
- [Microsoft Learn Path](https://learn.microsoft.com/en-us/dotnet/fundamentals/)
- [C# Yellow Book (free PDF)](https://www.robmiles.com/c-yellow-book/)
- [Microsoft Learning Paths](https://docs.microsoft.com/en-us/users/dotnet/)

### Books
- C# Player's Guide by RB Whitaker
- C# 12 and .NET 8 by Mark J. Price
- CLR via C# by Jeffrey Richter

### Community
- [.NET Foundation](https://dotnetfoundation.org/)
- [C# Community on GitHub](https://github.com/dotnet/community)
- [Stack Overflow - C#](https://stackoverflow.com/questions/tagged/c%23)

---

## Useful NuGet Packages

| Package | Purpose |
|---------|---------|
| **Serilog** | Structured logging |
| **AutoMapper** | Object-to-object mapping |
| **FluentValidation** | Data validation |
| **MediatR** | Command and query handler pattern |
| **Polly** | Resilience and transient-fault handling |
| **xUnit** | Unit testing framework |
| **Moq** | Mocking for unit tests |
| **Swagger/Swashbuckle** | OpenAPI/Swagger support |

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
