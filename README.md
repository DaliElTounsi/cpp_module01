# C++ Module 01 — Memory, References, File Streams & Pointers to Members

The second module of the **42 School C++ curriculum**, focused on object lifetime, dynamic allocation, references, pointers and practical file manipulation in C++98.

## What this module demonstrates

- Stack versus heap allocation
- `new` and `delete`
- References and pointers
- Object lifetime management
- Arrays of dynamically allocated objects
- File input/output with `std::ifstream` and `std::ofstream`
- String replacement and stream processing
- Pointers to member functions
- Cleaner ownership and resource-management habits

## Exercise progression

The exercises gradually move from simple object allocation to more explicit resource ownership and indirection.

A representative example is the file-replacement exercise, which reads a source file, replaces occurrences of a string and writes the result to a new `.replace` file using standard C++ streams.

## Why it matters

This module strengthens one of the most important areas when moving from C to C++: understanding **who owns a resource, how long it lives and when it must be released**. Those habits become essential in larger object-oriented systems.

## Build

Each exercise is independent and contains its own `Makefile`.

```bash
cd ex04
make
```

## Project context

This repository is part of my **42 School software-engineering journey** and remains public as a record of my progression through C++98 and object-oriented programming.

---

**Mohamed Ali Chamsa**  
Software & AI Builder · Entrepreneur · 42 School