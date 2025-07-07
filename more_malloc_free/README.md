# C - More malloc, free

## Project by: Valentin Dardenne 
**Weight:** 1  

---

## Description

This project focuses on **dynamic memory allocation** in C using the functions `malloc`, `free`, and introduces the concepts of `calloc`, `realloc`, and the `exit` function.  
It is part of the **Holberton School low-level programming curriculum.**

---

## Learning Objectives

At the end of this project, you should be able to explain the following concepts without external resources:

- How to use the `exit` function.
- The difference between `malloc`, `calloc`, and `realloc`.
- How to allocate and manage memory dynamically in C.
- How to handle errors when memory allocation fails.

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation: Ubuntu 20.04 LTS using `gcc` with flags:
- All files must end with a new line.
- Code must follow **Betty** style guidelines.
- No use of global variables.
- Maximum 5 functions per file.
- Only allowed standard library functions:
- `malloc`
- `free`
- `exit`
- Use of `_putchar` is allowed.
- Push your `main.h` header file (containing all prototypes).
- Do not push the test `main.c` files (they will not be taken into account).

---

## Authorized Functions
- `malloc`
- `free`
- `exit`

---

## Files and Functions

| File                  | Description                                    |
|-----------------------|-----------------------------------------------|
| `0-malloc_checked.c`  | Allocates memory using `malloc`.               |
| `1-string_nconcat.c`  | Concatenates two strings up to `n` bytes.      |
| `2-calloc.c`          | Allocates memory for an array and sets it to 0.|
| `3-array_range.c`     | Creates an array of integers from min to max.  |

---

## Compilation Example

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file.c> <function_file.c> -o output
./output

