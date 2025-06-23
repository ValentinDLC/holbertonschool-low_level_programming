# C - More functions, more nested loops

## Author
Valentin Dardenne

## Level
Novice

## Project Weight
1

---

## Description
This project focuses on understanding and implementing nested loops and functions in C. It aims to deepen your knowledge of function prototypes, definitions, declarations, and variable scope, as well as how to organize your code with header files.

---

## Learning Objectives
By the end of this project, you should be able to explain and demonstrate:

- What nested loops are and how to use them effectively.
- What a function is and how to define and use functions in C.
- The difference between a function declaration and a function definition.
- The purpose and use of function prototypes.
- The scope of variables within functions and loops.
- The significance of common GCC flags: `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, `-std=gnu89`.
- What header files are and how to include them correctly using `#include`.

---

## Requirements

- **Allowed editors:** `vi`, `vim`, `emacs`.
- **Compilation environment:** Ubuntu 20.04 LTS.
- **Compiler:** `gcc` with options:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All source files must end with a newline.
- Use the **Betty style** for code formatting. Your code will be checked with `betty-style.pl` and `betty-doc.pl`.
- No global variables allowed.
- Maximum **5 functions per file**.
- **Standard library functions like `printf`, `puts`, etc., are forbidden.**
- You are allowed to use the `_putchar` function to output characters.
- You do **not** need to include `_putchar.c` in your repository; it will be provided during compilation.
- Function prototypes, including the prototype for `_putchar`, **must be declared in a header file named `main.h`**.
- Do **not** push your own `main.c`. The provided examples are for testing only. The evaluator will use their own `main.c` during compilation.

---

## Files to include

- Your source `.c` files implementing the required functions.
- The header file `main.h` with all function prototypes.

---

## How to compile

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o executable_name

