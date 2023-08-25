When and why using linked lists vs arrays
Linked lists and arrays are both data structures commonly used in programming.

Arrays are useful when you need to store a fixed amount of data and access elements in a specific order. They are typically faster for accessing elements than linked lists. However, arrays are less efficient for inserting and deleting elements in the middle of the array.

Linked lists, on the other hand, are useful when you need to store a variable amount of data and don't need to access elements in a specific order. They are typically better for inserting and deleting elements than arrays. However, linked lists are less efficient when it comes to accessing elements in the middle of the list.

So, the choice between linked lists and arrays depends on the specific use case and the operations that need to be performed on the data structure.

How to build and use linked lists
To build and use linked lists in C, you can create a struct to represent each node in the list. The struct should contain a data element and a pointer to the next node in the list.

Here is an example struct definition for a linked list node:
