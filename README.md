# Sorting Algorithms Project

## Description

This project involves implementing several sorting algorithms in C, following strict style and optimization constraints. The goal is to understand how different sorting algorithms work, their complexity, and how to choose the most suitable one depending on the context.

---

## Implemented Algorithms

| Algorithm       | File                     | Data Structure           | Description                                                                             |
|-----------------|--------------------------|--------------------------|-----------------------------------------------------------------------------------------|
| Bubble Sort     | `0-bubble_sort.c`        | Array                    | Bubble sort, simple stable sort, prints the array after each swap                      |
| Insertion Sort  | `1-insertion_sort_list.c`| Doubly linked list       | Insertion sort on a list, swapping nodes (not just values)                             |
| Selection Sort  | `2-selection_sort.c`     | Array                    | Selection sort, prints the array after each swap                                       |
| Quick Sort      | `3-quick_sort.c`         | Array                    | Quick sort using Lomuto partition scheme with last element as pivot                    |

---

## Installation & Compilation

Use `gcc` on Ubuntu 20.04 LTS to compile the files. For example, to compile bubble sort with a test main file:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble_sort
```
---

## Usage Examples

Bubble Sort

```bash
./bubble_sort
```
Prints the array after each swap.

Insertion Sort

```bash
./insertion_sort
```
Prints the doubly linked list after each node swap.

---

## Complexity (Big O)

Files 0-O, 1-O, 2-O, 3-O contain the Big O notations for each algorithm (best, average, worst cases).

---

## Rules and Constraints

- No global variables

- Maximum 5 functions per file

- No standard library functions like printf inside sorting  functions (except allowed debugging output)

- Code must comply with gnu89 standard

- Betty style enforced (checked with betty-style.pl and     betty-doc.pl)

- Every function must be declared in sort.h

- Include guards in header files

- Compilation on Ubuntu 20.04 LTS with gcc and strict flags

---

## Data Structures

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
---

## Project Files
| File                      | Description                            |
| ------------------------- | -------------------------------------- |
| `sort.h`                  | Header with prototypes and definitions |
| `0-bubble_sort.c`         | Bubble sort implementation             |
| `1-insertion_sort_list.c` | Insertion sort on doubly linked list   |
| `2-selection_sort.c`      | Selection sort implementation          |
| `3-quick_sort.c`          | Quick sort implementation              |
| `print_array.c`           | Function to print an array             |
| `print_list.c`            | Function to print a list               |
| `README.md`               | This file                              |

---

Author
Loïc Le Guen