# C - malloc, free

## Author
By: Valentin dardenne

## Project Overview
This project focuses on **automatic and dynamic memory allocation in C**, specifically using `malloc` and `free`. You will learn how to manage memory dynamically, when and why to use `malloc`, and how to detect memory leaks using `valgrind`.

## Learning Objectives
By the end of this project, you should be able to explain the following concepts clearly:
- The difference between automatic and dynamic memory allocation
- What `malloc` and `free` are and how to use them
- Why and when to use dynamic memory allocation
- How to use `valgrind` to check for memory leaks

## Resources
### Mandatory Resources
- `0x0a - malloc & free - quick overview.pdf`
- [Dynamic memory allocation in C - malloc calloc realloc free (watch up to 6:50)](https://www.youtube.com/watch?v=8-hx6fRcAY4)

### Man Pages
- `man malloc`
- `man free`

## Requirements
- **Editors:** vi, vim, emacs
- **OS:** Ubuntu 20.04 LTS
- **Compiler:** gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style:** Betty (using `betty-style.pl` and `betty-doc.pl`)
- **Restrictions:**
  - No global variables
  - Maximum of 5 functions per file
  - Only `malloc` and `free` from the standard library are allowed
  - `printf`, `puts`, `calloc`, `realloc`, etc. are **not allowed**
- **_putchar is allowed**
- **Do not push _putchar.c, we will use ours**
- **Test files are optional and will not be checked**
- **All function prototypes must be in a header file named `main.h`**

## Important Notes
- You are not required to learn about `calloc` and `realloc` for this project.
- Memory leaks must be avoided. Use `valgrind` to ensure proper memory management.

---

## Compilation Example
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c file.c -o output

