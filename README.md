# 📘 The C Programming Language — Exercises

> Solutions to all exercises from *The C Programming Language* (2nd Edition) by **Brian W. Kernighan** and **Dennis M. Ritchie** — **K&R C**.

---

## 📖 About

This repository contains my implementations of every exercise found in **K&R C**, one of the most influential programming books ever written. The goal is to build a solid foundation in C through deliberade practice of the classic problems.

---

## 🗂️ Repository Structure

```
.
├── chapter-1/          # A Tutorial Introduction
│   ├── ex01.c
│   ├── ex02.c
│   └── ...
├── chapter-2/          # Types, Operators, and Expressions
├── chapter-3/          # Control Flow
├── chapter-4/          # Functions and Program Structure
├── chapter-5/          # Pointers and Arrays
├── chapter-6/          # Structures
├── chapter-7/          # Input and Output
├── chapter-8/          # The UNIX System Interface
└── README.md
```
-

## 📚 Chapters
| 1 | A Tutorial Introduction | Hello World, variables, loops, functions |
| 2 | Types, Operators, and Expressions | Data types, operators, type conversions |
| 3 | Control Flow | if/else, switch, loops, break, continue |
| 4 | Functions and Program Structure | Scope, recursion, preprocessor |
| 5 | Pointers and Arrays | Pointer arithmetic, strings, multi-dim arrays |
| 6 | Structures | structs, unions, typedef, bit-fields |
| 7 | Input and Output | stdio, printf/scanf, file I/O |
| 8 | The UNIX System Interface | System calls, file descriptors, storage allocator |

---

## 🛠️ Building & Running

Any standard C compiler works. Examples using `gcc`:

```bash
# Compile a single exercise
gcc chapter-1/ex-01.c -o ex01

# Run it
./ex01
```

For exercises that read from files or stdin, you can pipe input:

```bash
echo "hello world" | ./ex05
```

> **Compiler:** GCC or Clang recommended  
> **Standard:** C89/C90 (as per K&R 2nd Edition)

---

## 📌 Progress

- [x] Chapter 1 — A Tutorial Introduction
- [ ] Chapter 2 — Types, Operators, and Expressions
- [ ] Chapter 3 — Control Flow
- [ ] Chapter 4 — Functions and Program Structure
- [ ] Chapter 5 — Pointers and Arrays
- [ ] Chapter 6 — Structures
- [ ] Chapter 7 — Input and Output
- [ ] Chapter 8 — The UNIX System Interface

---

## 📝 Notes

- Solutions are my own implementations unless otherwise noted in comments.
- Some exercises have multiple valid approaches; I may include notes explaining design choices.
- The focus is on learning, not on producing the most optimized code possible.

---

## 📚 Reference

- **Book:** *The C Programming Language*, 2nd Edition  
- **Authors:** Brian W. Kernighan & Dennis M. Ritchie  
- **Publisher:** Prentice Hall, 1988  
- **ISBN:** 978-0131103627  

---

## 📄 License

This repository is for educational purposes only.  
All exercise descriptions belong to their respective authors and publisher.  
Code solutions are released under the [MIT License](LICENSE).
