# Python Learning Path

[![Python](https://img.shields.io/badge/Python-3.8%2B-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://www.python.org/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=for-the-badge)]()

A comprehensive guide to mastering Python from fundamentals through advanced programming paradigms and real-world applications.

---

## Table of Contents

- [Overview](#overview)
- [Learning Modules](#learning-modules)
- [Getting Started](#getting-started)
- [Topics Covered](#topics-covered)
- [Project Structure](#project-structure)

---

## Overview

> This repository contains a progressive learning path for Python development, covering everything from basic syntax to advanced concepts including object-oriented programming, functional programming, data structures, and practical applications.

**Key Features:**
- Foundational Python concepts and syntax
- Data structures and algorithms implementation
- Object-oriented and functional programming paradigms
- Practical web development and automation examples
- Real-world project implementations

---

## Learning Modules

### Fundamentals

Core Python concepts including variables, types, control flow, functions, and basic OOP.

| Topic | Status |
|-------|--------|
| Hello World | Available |
| Variables and Types | Available |
| Control Flow | Available |
| Functions | Available |
| Object-Oriented Programming | Available |

### Data Structures & Algorithms

Implementation of essential data structures and algorithms from scratch.

| Data Structure | Complexity | Status |
|----------------|-----------|--------|
| Lists & Arrays | O(n) | Available |
| Dictionaries & Sets | O(1) average | Available |
| Linked Lists | O(n) | Available |
| Stacks & Queues | O(1) | Available |
| Trees & Graphs | Varies | Available |
| Sorting Algorithms | O(n log n) average | Available |

### Advanced Topics

<details>
<summary><b>Functional Programming</b></summary>

- Lambda functions
- Map, filter, reduce
- Higher-order functions
- Decorators
- Context managers

</details>

<details>
<summary><b>Web Development</b></summary>

- Flask/FastAPI basics
- HTTP requests and responses
- Database integration
- API development

</details>

<details>
<summary><b>Data Science Basics</b></summary>

- NumPy fundamentals
- Pandas DataFrames
- Data visualization
- Statistical analysis

</details>

---

## Getting Started

### Prerequisites

- Python 3.8 or higher
- pip (Python package manager)
- Virtual environment tool (venv or conda)

### Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/practice-python.git
cd practice-python

# Create virtual environment
python3 -m venv venv
source venv/bin/activate  # On Windows: venv\Scripts\activate

# Install dependencies (if applicable)
pip install -r requirements.txt
```

### Run Examples

```bash
# Basic script
python3 fundamentals/hello_world.py

# Run specific module
python3 data_structures/linked_list.py

# Run with arguments
python3 web/api_client.py --url http://example.com
```

---

## Topics Covered

### Core Language Features

| Feature | Description |
|---------|-------------|
| **Variables & Types** | int, float, str, bool, None |
| **Collections** | list, tuple, dict, set |
| **Control Flow** | if/elif/else, loops, comprehensions |
| **Functions** | def, args, kwargs, annotations |
| **Classes** | OOP principles, inheritance, polymorphism |
| **Modules** | Imports, packages, namespace |

### Programming Paradigms

```
Python Learning Path
├── Imperative Programming
│   ├── Sequential statements
│   ├── Loops and conditionals
│   └── State modification
│
├── Object-Oriented Programming
│   ├── Classes and objects
│   ├── Inheritance and polymorphism
│   └── Encapsulation
│
└── Functional Programming
    ├── Pure functions
    ├── First-class functions
    ├── Immutability
    └── Higher-order functions
```

### Ecosystem & Libraries

| Category | Libraries | Use Case |
|----------|-----------|----------|
| **Data Science** | NumPy, Pandas, Matplotlib | Data analysis and visualization |
| **Web Development** | Flask, FastAPI, Django | Web applications and APIs |
| **Testing** | pytest, unittest | Quality assurance |
| **Automation** | requests, beautifulsoup | Web scraping and automation |
| **Performance** | numba, cython | Optimization for heavy computation |

---

## Project Structure

```
practice-python/
├── fundamentals/                  # Module 1: Python Basics
│   ├── hello_world.py
│   ├── variables_and_types.py
│   ├── control_flow.py
│   ├── functions.py
│   └── classes.py
│
├── data_structures/               # Module 2: Data Structures
│   ├── arrays_lists.py
│   ├── linked_list.py
│   ├── stack.py
│   ├── queue.py
│   ├── trees.py
│   └── graphs.py
│
├── algorithms/                    # Module 3: Algorithms
│   ├── sorting/
│   │   ├── bubble_sort.py
│   │   ├── merge_sort.py
│   │   └── quick_sort.py
│   ├── searching/
│   │   ├── linear_search.py
│   │   └── binary_search.py
│   └── dynamic_programming/
│
├── paradigms/                     # Module 4: Programming Paradigms
│   ├── oop_principles.py
│   ├── functional_programming.py
│   ├── decorators.py
│   └── context_managers.py
│
├── web_development/               # Module 5: Web Development
│   ├── http_client.py
│   ├── api_examples.py
│   └── flask_app/
│
├── data_science/                  # Module 6: Data Science
│   ├── numpy_basics.py
│   ├── pandas_dataframes.py
│   └── visualization.py
│
├── requirements.txt
└── README.md
```

---

## Best Practices

### Code Style

- Follow [PEP 8](https://www.python.org/dev/peps/pep-0008/) style guide
- Use meaningful variable names
- Write docstrings for functions and classes
- Add type hints (PEP 484)

### Example with Best Practices

```python
"""Module for demonstrating Python best practices."""

def calculate_fibonacci(n: int) -> list[int]:
    """
    Calculate Fibonacci sequence up to n terms.

    Args:
        n: Number of terms to generate

    Returns:
        List of fibonacci numbers

    Raises:
        ValueError: If n is negative
    """
    if n < 0:
        raise ValueError("n must be non-negative")

    sequence = [0, 1]
    for _ in range(2, n):
        sequence.append(sequence[-1] + sequence[-2])
    return sequence[:n]
```

---

## Common Commands

### Running Tests

```bash
# Run all tests
pytest

# Run specific test file
pytest tests/test_data_structures.py

# Run with coverage
pytest --cov=.
```

### Code Quality

```bash
# Style check
flake8 .

# Type checking
mypy .

# Format code
black .
```

---

## Resources

### Documentation
- [Python Official Documentation](https://docs.python.org/3/)
- [PEP 8 Style Guide](https://www.python.org/dev/peps/pep-0008/)
- [Real Python Tutorials](https://realpython.com/)

### Books
- Fluent Python by Luciano Ramalho
- Python Cookbook by David Beazley & Brian K. Jones

### Online Resources
- [Codecademy Python Course](https://www.codecademy.com/learn/learn-python)
- [LeetCode - Python Problems](https://leetcode.com/)

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
