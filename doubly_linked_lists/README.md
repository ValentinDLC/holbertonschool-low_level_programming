# C - Doubly Linked Lists

**Level:** Amateur  
**Author:** Valentin DARDENNE
**Weight:** 1

---

## Project Description

This project focuses on the implementation and manipulation of doubly linked lists in C. You will learn how to create, traverse, add, and free nodes in a doubly linked list.

---

## What is a Doubly Linked List?

A doubly linked list is a data structure consisting of nodes, where each node contains an integer value and two pointers: one to the previous node and one to the next node. This allows traversal in both directions (forward and backward).

---

## Learning Objectives

By the end of this project, you should be able to:

- Explain what a doubly linked list is.
- Use doubly linked lists to store and manage data.
- Find reliable sources to learn more about doubly linked lists independently.

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Code compiled on Ubuntu 20.04 LTS using `gcc` with `-std=gnu89`
- All files must end with a newline
- Must include a `README.md` file at the root of the project folder
- Code must follow the Betty style guide (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum 5 functions per file
- Allowed C standard library functions: `malloc`, `free`, `printf`, `exit`
- Function prototypes should be included in a header file named `lists.h`
- Header files must be protected against multiple inclusions with include guards

---

## Data Structure

Use the following struct for the doubly linked list nodes:

```c
/**
 * struct dlistint_s - doubly linked list node
 * @n: integer data
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: node structure for a doubly linked list
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
