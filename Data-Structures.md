Data Structures - container that stores data in a specific layout in an organized form

Commonly used Data Structures : Arrays, Stacks, Queues, Linked Lists, Trees, Graphs, Hash Tables

1) Array - collection of items of same data type stored at contiguous memory locations

Basic Operations

    Insert — Inserts an element at a given index
    Get — Returns the element at a given index
    Delete — Deletes an element at a given index
    Size — Gets the total number of elements in an array
2. Stack - linear data structure where the insertion of a new element and removal of an existing element takes place at the stack top, following last In First Out (LIFO) order 

Basic Operations

    Push — Inserts an element at the top
    Pop — Returns the top element after removing from the stack
    isEmpty — Returns true if the stack is empty
    Top — Returns the top element without removing from the stack
3. Queue - linear data structure open at both ends where the operations are performed in First In First Out (FIFO) order

Basic Operations

    Enqueue() — Inserts an element to the end of the queue
    Dequeue() — Removes an element from the start of the queue
    isEmpty() — Returns true if the queue is empty
    Top() — Returns the first element of the queue
4. Linked List - linear data structure where elements are not stored at a contiguous location but linked using pointers. It forms a series of connected nodes, where each node stores the data and the address of the next node.

Basic Operations

    InsertAtEnd — Inserts a given element at the end of the linked list
    InsertAtHead — Inserts a given element at the start/head of the linked list
    Delete — Deletes a given element from the linked list
    DeleteAtHead — Deletes the first element of the linked list
    Search — Returns the given element from a linked list
    isEmpty — Returns true if the linked list is empty
4. Graph - set of nodes (vertices) that are connected to each other in the form of a network through edges

  Types -> Undirected Graph, Directed Graph

  Represented as - Adjacency Matrix, Adjacency List

  Common graph traversing algorithms:

    Breadth First Search (BFS)
    Depth First Search (DFS)

6. Tree - hierarchical data structure consisting of vertices (nodes) and edges that connect them. Trees are similar to graphs, but the key point that differentiates a tree from the graph is that a cycle cannot exist in a tree.

Types of Trees

    N-ary Tree
    Balanced Tree
    Binary Tree
    Binary Search Tree
    AVL Tree
    Red Black Tree
    2–3 Tree
7. Hash Table - store each object at some pre-calculated unique index called its 'key' in the form of a “key-value” pairs to uniquely identify objects using hash functions
