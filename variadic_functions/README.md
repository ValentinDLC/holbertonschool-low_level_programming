# C - Variadic Functions

## Master  
**By:** Valentin Dardenne  
**Weight:** 1  
**Score:** Your score will be updated as you progress.

---

## 📚 Description

This project introduces **variadic functions** in the C programming language—functions that can accept a variable number of arguments. These are particularly useful when the number of parameters is not known in advance, such as with `printf`.

---

## 🔗 Resources

### Read or watch:
- [stdarg.h (cppreference)](https://en.cppreference.com/w/c/variadic)
- [Variadic Functions - GNU Manual](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword - GeeksforGeeks](https://www.geeksforgeeks.org/const-keyword-c/)

### man or help:
- `man stdarg`

---

## 🎯 Learning Objectives

At the end of this project, you should be able to explain, without external help:

- What are variadic functions
- How to use the macros `va_start`, `va_arg`, and `va_end`
- Why and how to use the `const` type qualifier

---

## ✅ Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should follow the **Betty** coding style (checked using `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- A maximum of 5 functions per file
- The only allowed C standard library functions are: `malloc`, `free`, `exit`
- Usage of `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden
- You are allowed to use the following macros: `va_start`, `va_arg`, and `va_end`
- You may use `_putchar` (our version will be used during grading)
- You do not need to push `_putchar.c`; if you do, it will not be used
- Do not push any `main.c` files (we will use our own to test your code)
- All function prototypes must be included in your header file: `variadic_functions.h`
- All header files must be include-guarded

---

## 🧪 Tasks

### 0. Beauty is variable, ugliness is constant  
✅ **File:** `0-sum_them_all.c`

Write a function that returns the sum of all its parameters:

```c
int sum_them_all(const unsigned int n, ...);

