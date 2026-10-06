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

### What to notice

- **Sorting:** Bubble sort repeatedly swaps neighboring values that are out of order. Selection sort finds the smallest remaining value and puts it in place. Insertion sort grows a sorted section by inserting each new value into its correct position. These are useful first algorithms to trace by hand; they typically take **O(n²)** time as the input grows.

- **Quicksort and merge sort:** Quicksort partitions values around a pivot and recursively sorts each side; merge sort splits the array, sorts each half, then merges the halves. They illustrate divide-and-conquer. Their typical time is **O(n log n)**, though quicksort can degrade to **O(n²)** with unfavorable pivots. The current quicksort chooses the last element as pivot.

- **Heap sort:** A max heap keeps the largest value at the root. Heap sort repeatedly moves that value to the end and restores the heap; its time complexity is **O(n log n)**.

- **Searching:** Linear search checks values one by one and works on unsorted data (**O(n)**). Binary search discards half the remaining range each step (**O(log n)**), but only works correctly when the data is sorted.

- **Stack:** A stack follows **last in, first out (LIFO)**. `push` adds to the top, `pop` removes from the top, and `peek` should inspect the top without removing it. For an array implementation, the top is tracked by `top`.

- **Queue:** A queue follows **first in, first out (FIFO)**. `enqueue` adds at the rear and `dequeue` removes from the front. This example uses a simple linear array, so removed slots at the front are not reused; a circular queue is a useful next improvement.

- **Graph traversal:** DFS explores a path deeply before backtracking; BFS visits neighbors level by level using a queue. The example uses an adjacency matrix and a fixed graph of five vertices. Try changing the matrix and start vertex to see how traversal order changes.

- **Tree traversal:** Inorder visits left subtree, node, then right subtree; preorder visits node before its children; postorder visits children before the node. These orders are easiest to understand by drawing the sample tree and writing the visit sequence.

- **Array operations:** Inserting or deleting at the beginning or middle requires shifting later elements. This is generally **O(n)**; accessing an element by index is **O(1)**.

### Practice ideas

1. Trace each sorting program with a short input such as `[4, 2, 5, 1]`. Write down the array after every pass or partition.

1. Add a counter for comparisons and swaps, then compare the sorting algorithms on the same input. Try already-sorted, reverse-sorted, and duplicate-heavy arrays.

1. In `SEARCHING.c`, separate the two example `main()` functions so the file compiles, then test a value at the beginning, middle, end, and one that is absent.

1. Fix `peek()` to display `stack[top]`, and test the stack when empty, when it has one item, and when it is full.

1. Improve the queue by implementing it as a circular queue, so freed positions at the front can be reused.

1. Change the graph's edges and compare DFS and BFS. Explain why their visit orders can differ even when they visit the same reachable vertices.

1. Draw the example binary tree and manually calculate its inorder, preorder, and postorder sequences before checking the program output.

1. Add checks for invalid input and boundary cases, such as an empty array, a full stack, an invalid array position, or a search value that is not present.

**Complexity reminder:** `n` means the number of input elements (or vertices, for graph algorithms). Big-O describes how work grows as the input grows, not the exact running time on one small example. For example, doubling `n` makes an **O(n)** algorithm do about twice the work, while an **O(n²)** algorithm may do about four times the work.

## Contributing

For practice, you can add comments, test edge cases, improve input validation, or add new DSA examples. Keep each standalone program in its own `.c` file and include a short description of its purpose.

## License

No license is currently specified in the repository. Unless a license is added, reuse and redistribution permissions are not explicitly granted. Add a `LICENSE` file if you want to define how others may use these examples.
