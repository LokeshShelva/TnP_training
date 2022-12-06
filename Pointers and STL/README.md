# Pointers and STL
This folder contains all the code related to pointers and the STL (Standard Template Library).

You can learn more about pointer [here](https://www.geeksforgeeks.org/cpp-pointers/) and about STL [here](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/).

You can see the STL reference [here](https://cplusplus.com/reference/stl/).

## Pointer

![memory layout with pointers](../assests/pointer_memory_layout.png)
![memory layout with pointers when mutiple memory is allocated](../assests/pointer_multiple_memory_allocation.png)
![pointers use case: call by value and call by reference](../assests/pointer_usecase.png)

## STL
The Standard Template Library ([STL](https://cplusplus.com/reference/stl/)) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized.

STL has 4 components:

- Algorithms
- Containers
- Functions
- Iterators
### STL components
![stl components](../assests/stl_components.png)

#### Standard containers
A container is a holder object that stores a collection of other objects (its elements). They are implemented as class templates, which allows a great flexibility in the types supported as elements.

The container manages the storage space for its elements and provides member functions to access them, either directly or through iterators (reference objects with similar properties to pointers).

Containers replicate structures very commonly used in programming: dynamic arrays ([vector](https://cplusplus.com/vector)), queues ([queue](https://cplusplus.com/queue)), stacks ([stack](https://cplusplus.com/stack)), heaps ([priority_queue](https://cplusplus.com/reference/queue/priority_queue/)), linked lists ([list](https://cplusplus.com/list)), trees ([set](https://cplusplus.com/set)), associative arrays ([map](https://cplusplus.com/map)).

Many containers have several member functions in common, and share functionalities. The decision of which type of container to use for a specific need does not generally depend only on the functionality offered by the container, but also on the efficiency of some of its members (complexity). This is especially true for sequence containers, which offer different trade-offs in complexity between inserting/removing elements and accessing them.

[Stack](https://cplusplus.com/stack), [queue](https://cplusplus.com/queue) and [priority_queue](https://cplusplus.com/reference/queue/priority_queue/) are implemented as container adaptors. Container adaptors are not full container classes, but classes that provide a specific interface relying on an object of one of the container classes (such as deque or list) to handle the elements. The underlying container is encapsulated in such a way that its elements are accessed by the members of the container adaptor independently of the underlying container class used.


### Sequential containers
![Sequential containers](../assests/sequential_containers.png)

| Container    |  Description |
|--------------|--------------|
| [Vector](https://cplusplus.com/reference/vector/vector/)       |Vectors are sequence containers representing arrays that can change in size. |
|[Deque](https://cplusplus.com/reference/deque/deque/)| Double-ended queues are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back).|
| [Forward List](https://cplusplus.com/reference/forward_list/forward_list/) |Forward lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence.Forward lists are implemented as singly-linked lists.|
| [List](https://cplusplus.com/reference/list/list/) | Lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence, and iteration in both directions. List containers are implemented as doubly-linked lists.|

### Container adapters
![Container adapters](../assests/container_adapters.png)

| Container | Description |
|-----------|-------------|
| [Stack](https://cplusplus.com/reference/stack/stack/) | Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container. |
| [Queue](https://cplusplus.com/reference/queue/queue/) | Queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out), where elements are inserted into one end of the container and extracted from the other. |
| [Priority Queue](https://cplusplus.com/reference/queue/priority_queue/) | Priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest of the elements it contains, according to some strict weak ordering criterion. |

### Associative containers
![Associative containers](../assests/associative_containers.png)

| Container | Description |
|-----------|-------------|
| [Set](https://cplusplus.com/reference/set/set/) | Sets are containers that store unique elements following a specific order. In a set, the value of an element also identifies it (the value is itself the key, of type T), and each value must be unique. |
| [MultiSet](https://cplusplus.com/reference/set/multiset/) | Multisets are containers that store elements following a specific order, and where multiple elements can have equivalent values. In a multiset, the value of an element also identifies it (the value is itself the key, of type T). |
| [Map](https://cplusplus.com/reference/map/map/) | Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order. In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. The types of key and mapped value may differ, and are grouped together. |
| [MultiMap](https://cplusplus.com/reference/map/multimap/) | Multimaps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order, and where multiple elements can have equivalent keys. |

### Unordered associative containers

| Container | Description |
|-----------|-------------|
| [Unordered set](https://cplusplus.com/reference/unordered_set/unordered_set/) | Unordered sets are containers that store unique elements in no particular order, and which allow for fast retrieval of individual elements based on their value. |
| [Unordered multiSet](https://cplusplus.com/reference/unordered_set/unordered_multiset/) | Unordered multisets are containers that store elements in no particular order, allowing fast retrieval of individual elements based on their value, much like unordered_set containers, but allowing different elements to have equivalent values. |
| [Unordered map](https://cplusplus.com/reference/unordered_map/unordered_map/) | Unordered maps are associative containers that store elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys. |
| [Unordered multiMap](https://cplusplus.com/reference/unordered_map/unordered_multimap/) | Unordered multimaps are associative containers that store elements formed by the combination of a key value and a mapped value, much like unordered_map containers, but allowing different elements to have equivalent keys. |