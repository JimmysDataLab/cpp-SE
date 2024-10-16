# ADTs and Their Implementations in C++

| **ADT**            | **Description**                                          | **Implementations in C++**                                  | **Examples in Code**                  |
|--------------------|----------------------------------------------------------|------------------------------------------------------------|---------------------------------------|
| **List**           | Ordered collection of elements (allows duplicates).      | 1. **Array-based List** (Static) <br> 2. **Dynamic Array** <br> 3. **Singly Linked List** <br> 4. **Doubly Linked List** | - `std::array` <br> - `std::vector` <br> - `std::list` |
| **Stack**          | LIFO: Last In, First Out.                                | 1. **Array-based Stack** <br> 2. **Linked List-based Stack** | - `std::stack` (built-in) <br> - Array/Linked List-based custom stack |
| **Queue**          | FIFO: First In, First Out.                               | 1. **Array-based Queue** <br> 2. **Linked List-based Queue** <br> 3. **Circular Queue** | - `std::queue` <br> - Circular buffer |
| **Deque**          | Double-ended queue: elements can be added/removed from both ends. | 1. **Doubly Linked List** <br> 2. **Array-based Deque** | - `std::deque` |
| **Set**            | Unordered collection of unique elements.                 | 1. **Hash Table-based Set** <br> 2. **Binary Search Tree (BST) Set** | - `std::unordered_set` <br> - `std::set` |
| **Map** (or Dictionary) | Key-value pairs where each key is unique.            | 1. **Hash Table-based Map** <br> 2. **Binary Search Tree Map** | - `std::unordered_map` <br> - `std::map` |
| **Priority Queue** | Elements are dequeued based on priority.                 | 1. **Heap-based Priority Queue** <br> 2. **Binary Tree-based Implementation** | - `std::priority_queue` |
| **Graph**          | Set of nodes connected by edges.                         | 1. **Adjacency Matrix** <br> 2. **Adjacency List** | - Custom classes <br> - Graph libraries |
| **Hash Table**     | Data structure for fast key-value lookups.               | 1. **Separate Chaining (with Linked List)** <br> 2. **Open Addressing (with Probing)** | - `std::unordered_map` |
