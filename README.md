# DSA-CODES

A collection of beginner-friendly C programs for practicing **Data Structures and Algorithms (DSA)**. The examples cover common sorting and searching algorithms, array operations, stacks, queues, graph traversal, and binary-tree traversal.

## Repository contents

| File | Topic |
| --- | --- |
| `ArrayOperations.c` | Insert and delete values in an array; display the result |
| `BubbleSort.c` | Bubble sort example |
| `HeapSort.c` | Heap sort using a max heap |
| `InsertionSort.c` | Insertion sort example |
| `QuickSort.c` | Quicksort with the last element chosen as the pivot; reads values from the user |
| `SelectionSort.c` | Selection sort example |
| `merge.c` | Merge sort |
| `SEARCHING.c` | Linear search and binary search examples |
| `STACKS_W_ARRAYS.c` | Menu-driven, fixed-size array stack with push, pop, display, and peek operations |
| `QUEUES.c` | Menu-driven, fixed-size array queue with enqueue, dequeue, and display operations |
| `GRAPH_TRAVERSAL.c` | Depth-first search (DFS) and breadth-first search (BFS) on a small example graph |
| `TREE_TRAVERSAL.c` | Inorder, preorder, and postorder traversal of a binary tree |

These are small learning examples rather than a single application. Most programs use sample values in the source; `QuickSort.c`, `STACKS_W_ARRAYS.c`, and `QUEUES.c` take input while running.

## Requirements

- A C compiler, such as GCC or Clang

- A terminal or command prompt

No external libraries are required beyond the standard C library.

## Compile and run

Clone the repository:

```bash
git clone https://github.com/Puffydoik/DSA-CODES.git
cd DSA-CODES
```

Compile **one source file at a time**. For example, with GCC:

```bash
gcc -std=c99 BubbleSort.c -o BubbleSort
```

Run it on Windows:

```
.\BubbleSort.exe
```

Or on macOS/Linux:

```bash
./BubbleSort
```

Replace `BubbleSort.c` and `BubbleSort` with the source filename and desired executable name. For example:

```bash
gcc -std=c99 QuickSort.c -o QuickSort
```

Each program has its own `main( )` function, so the source files are not intended to be linked together into one executable.

## Important note before compiling

`SEARCHING.c` currently contains **two ****`main()`**** functions**—one for linear search and one for binary search. A C program can have only one entry point, so this file will fail to compile as-is. To run either example, keep the corresponding `main()` and remove or temporarily comment out the other one. Binary search also requires the input array to be sorted.

## Learning notes

- The stack and queue examples use fixed-size arrays with a capacity of five elements.

- The queue is a simple linear queue, not a circular queue.

- In `STACKS_W_ARRAYS.c`, the `peek()` function currently reads `stack[0]`; for a conventional stack, the top value is at `stack[top]`. Review or correct this before relying on the peek result.

- Try changing the sample inputs and tracing each algorithm to understand how the array or data structure changes step by step.

## Contributing

For practice, you can add comments, test edge cases, improve input validation, or add new DSA examples. Keep each standalone program in its own `.c` file and include a short description of its purpose.
