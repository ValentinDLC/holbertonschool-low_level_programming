# C - More pointers, arrays and strings

## Author
Valentin Dardenne

## Level
Amateur

## Overview
This project contains a series of functions to manipulate strings, arrays, and pointers in C without using standard library functions, except for `_putchar`. The focus is on implementing basic string handling and array manipulation functions similar to those in the C standard library but written from scratch. 

The project is part of a learning curriculum on low-level programming, emphasizing pointer arithmetic, string manipulation, and array operations.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation environment: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code style: Must follow the **Betty** coding style, checked by `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- Maximum of 5 functions per file
- No use of standard library functions like `printf`, `puts`, etc.
- Only `_putchar` is allowed for output (do not include your own `_putchar.c`; the provided one will be used)
- All function prototypes and `_putchar` prototype must be declared in a header file named `main.h`
- A `README.md` file must be present at the root of the project folder

## List of Functions Implemented

| Task | Function Name     | Description                                                   | Prototype                              |
|-------|-------------------|---------------------------------------------------------------|---------------------------------------|
| 0     | _strcat           | Concatenates two strings                                      | `char *_strcat(char *dest, char *src);` |
| 1     | _strncat          | Concatenates two strings, using at most n bytes from src     | `char *_strncat(char *dest, char *src, int n);` |
| 2     | _strncpy          | Copies a string with a maximum length of n                   | `char *_strncpy(char *dest, char *src, int n);` |
| 3     | _strcmp           | Compares two strings                                          | `int _strcmp(char *s1, char *s2);`     |
| 4     | reverse_array     | Reverses the content of an integer array                      | `void reverse_array(int *a, int n);`   |
| 5     | string_toupper    | Changes all lowercase letters of a string to uppercase        | `char *string_toupper(char *);`        |
| 6     | cap_string        | Capitalizes all words of a string                              | `char *cap_string(char *);`            |

## Usage
- Each function can be compiled and tested individually using custom or provided `main.c` files.
- Use the command below to compile (example for task 0):
  ```bash
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
  ./0-strcat

