# argc, argv - Holberton School Project

## Author  
Valentin Dardenne

## Description  
This project helps you understand and use command-line arguments passed to a C program via the `argc` and `argv` parameters.  
The exercises cover displaying the program name, counting and printing arguments, and performing simple operations on them.

## Learning Objectives  
- Understand how to use arguments passed to your program.  
- Know the two standard prototypes of the `main` function and when to use each.  
- Learn how to use `__attribute__((unused))` or `(void)` to avoid compiler warnings for unused variables.  
- Follow good coding practices according to the Betty style guide.

## Technical Requirements  
- Compilation on Ubuntu 20.04 LTS using gcc with strict flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- Betty style compliance (checked with `betty-style.pl` and `betty-doc.pl`).  
- No global variables allowed.  
- Maximum of 5 functions per file.  
- Function prototypes, including `_putchar`, must be included in the header file `main.h`.  
- Use of the standard C library is allowed.  
- All files must end with a newline character.  
- A `README.md` file is mandatory at the project root.

## Project Files  

| File             | Description                                                            |
|------------------|------------------------------------------------------------------------|
| `0-whatsmyname.c` | Prints the name of the program as called, including its path.         |
| `1-args.c`        | Prints the number of arguments passed to the program (excluding the program name). |
| `2-args.c`        | Prints all arguments passed to the program, one per line, including the program name. |
| `3-mul.c`         | Multiplies two numbers passed as arguments and prints the result.     |
| `4-add.c`         | Adds positive numbers passed as arguments and prints the sum. Handles errors for invalid input. |

## How to Compile and Run  

Example for `0-whatsmyname.c`:  
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis

