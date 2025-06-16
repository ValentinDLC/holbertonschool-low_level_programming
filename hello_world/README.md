# C - Hello, World

## About the Project

This project is a beginner-level introduction to programming in C. The goal is to write a simple program that prints "Hello, World" to the standard output, while learning the basics of C programming, compilation, and coding style.

---

## Author

**Valentin DARDENNE**

---

## Project Overview

This project covers fundamental concepts of C programming including:

- Why C programming is awesome
- History and inventors of C: Dennis Ritchie and Brian Kernighan
- Contributions from Linus Torvalds
- How the compilation process works with `gcc`
- The concept of the program entry point (`main` function)
- How to print output using `printf`, `puts`, and `putchar`
- Using the `sizeof` operator
- How to compile C programs with `gcc`
- Understanding the default executable name after compilation
- The official Betty coding style and how to check code compliance
- How to determine the correct header files to include
- How the `main` function's return value affects program termination

---

## Learning Objectives

By the end of this project, you should be able to explain, without external help:

- The significance of C programming and its inventor
- Key figures in C programming history: Dennis Ritchie, Brian Kernighan, and Linus Torvalds
- What happens behind the scenes when running `gcc main.c`
- What the entry point `main` function represents
- How to print text using different functions (`printf`, `puts`, `putchar`)
- How to use the `sizeof` operator to get the size of types
- How to compile your C program with appropriate `gcc` flags
- What the default output file name is when compiling with `gcc`
- The official C coding style (Betty) and how to use the Betty linter
- How to include the correct headers for standard functions
- The influence of `main`’s return value on the program’s exit status

---

## Requirements

- Programming language: C
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation environment: Ubuntu 20.04 LTS
- Compiler flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All source files must end with a newline
- No compilation warnings or errors allowed
- Do **not** use the `system` function
- Code must follow the official Betty style guidelines

---

## Compilation & Execution

To compile the program, use:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -o hello
