C - Singly Linked Lists

📚 Description

This project focuses on the implementation and manipulation of singly linked lists in C. You will learn how to build dynamic data structures, traverse nodes, manage memory, and understand when linked lists are more appropriate than arrays.

🎯 Learning Objectives

At the end of this project, you should be able to explain the following concepts without external help:

When and why to use linked lists instead of arrays
How to build and manipulate a singly linked list in C
The structure and purpose of each node in a linked list
🧠 Concepts Covered

Data structures (linked lists)
Memory allocation (using malloc and free)
Pointers and dynamic memory management
Structures and typedefs
Header files and include guards
📝 Requirements

Language: C (compliant with -std=gnu89)
Code style: Betty (checked with betty-style.pl and betty-doc.pl)
Editors: vi, vim, or emacs only
Allowed functions: malloc, free, exit, strdup
Forbidden: printf, puts, calloc, realloc, and global variables
Max 5 functions per file
A README.md and header file (lists.h) are mandatory
All header files must be include guarded
\_putchar is allowed (optional to include your own)
📁 Data Structure Used

/\*\*

- struct list_s - singly linked list
- @str: string - (malloc'ed string)
- @len: length of the string
- @next: points to the next node
-
- Description: singly linked list node structure
  */
  typedef struct list_s
  {
  char *str;
  unsigned int len;
  struct list_s \*next;
  } list_t;
  📌 Tasks

File Task Description
0-print_list.c 0. Print list Print all elements of a list_t list
1-list_len.c 1. List length Return the number of elements in a linked list
2-add_node.c 2. Add node Add a new node at the beginning of the list
3-add_node_end.c 3. Add node at the end Add a new node at the end of the list
4-free_list.c 4. Free list Free a linked list
