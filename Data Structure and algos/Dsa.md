
# Linked Lists in C: A Summary 

## Concept

Linear data structure where elements (nodes) are not stored contiguously in memory.
Each node contains data and a pointer to the next node in the sequence.
Dynamic resizing is possible, as elements can be added or removed without the need to shift other elements in memory.
## Node Structure

## Node Structure: For single linked list 

```c
struct Node {
    int data;
    struct Node* next;
};
``````
## Basic Operations

Traversal: Iterating through the list and accessing each node's data.
Length: Counting the number of nodes in the list.

Search: Checking if a specific value exists in the list.

Insertion: Adding a new node at a specific position (e.g., beginning, end).

Deletion: Removing a node from the list.