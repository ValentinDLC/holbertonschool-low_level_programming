# 🔧 Project Module: C - File I/O (Low-Level System Programming)

## 📁 Directory

holbertonschool-low_level_programming/file_io

---

## 📚 Overview

Welcome to the **File I/O** module. This component is part of our internal training track on **systems-level development in C**, with a focus on **UNIX/Linux I/O system calls**.

You will work directly with POSIX-compliant system calls to manipulate files at a low level—**without the standard I/O library abstractions**. This is foundational knowledge for systems engineers working on real-time, embedded, or operating system-level code.

---

## 🎯 Objectives

Upon successful completion of this module, you will be able to:

- Differentiate between **standard C functions** and **system calls**
- Properly use `open`, `read`, `write`, and `close` syscalls
- Understand and manipulate **file descriptors** and their permissions
- Handle **edge cases** and write **robust error handling logic**
- Develop compliant, testable, and readable C code following our internal style guide (Betty-style)

---

## 🔍 Core Concepts

| Concept                   | Description                                                  |
| ------------------------- | ------------------------------------------------------------ |
| File Descriptors          | Integer handles used by the kernel to identify open files    |
| POSIX System Calls        | Direct interfaces to kernel-level functionality              |
| Permissions               | Set via `mode_t`, e.g. `0600` (`rw-------`)                  |
| Standard File Descriptors | `STDIN_FILENO (0)`, `STDOUT_FILENO (1)`, `STDERR_FILENO (2)` |
| Symbolic Flags            | Use constants like `O_RDONLY` instead of hardcoded numbers   |
| System Call Errors        | Always validate return values of I/O syscalls                |

---

## ⚙️ Technical Requirements

- **Compiler:** `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- **OS:** Ubuntu 20.04 LTS
- **Coding Style:** [Betty](https://github.com/holbertonschool/Betty)
- **Allowed Libraries:** `malloc`, `free`, `exit`, `_putchar`
- **Allowed Syscalls:** `open`, `read`, `write`, `close`, `dprintf`
- **Prohibited Functions:** `printf`, `puts`, `calloc`, `realloc`, `fopen`, etc.
- **Constraints:**
  - No global variables
  - Max 5 functions per `.c` file
  - Header file: `main.h`, with include guards

---

## 📦 File Structure

file_io/
├── 0-read_textfile.c # Task 0
├── 1-create_file.c # Task 1
├── 2-append_text_to_file.c # Task 2
├── 3-cp.c # Task 3
├── main.h # Function prototypes
└── README.md
