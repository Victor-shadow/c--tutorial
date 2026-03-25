# The standard template library(STL) provides the built-in implementation of commonly used data structures known as containers
# A container is a holder object that stores a collection of other objects(its elements)
# They are implemented as class templates, which allows great flexibility in the data type supported
# There are mainly four types of containers in C++ STL

# ---------------------------------------------------------------------------------#
# 1: SEQUENCE CONTAINERS
# Sequence containers implement linear data structures in which elements can be accessed sequentially

# Array: A container that wraps a fixed-size static array
# Vector: Automatically resizable dynamic array
# Deque:  Dynamic array of fixed-size array that allow fast insertions and deletions at both ends
# List: Implementation of Doubly linked list data structure
# Forward List: Implementation of a Singly-Linked List data structure
# ---------------------------------------------------------------------------------#

# ---------------------------------------------------------------------------------#
# 2: ASSOCIATIVE CONTAINERS
# Associative containers store data in some sorted order. It provides fast search, insertion and deletion O(log n) time by use of balanced trees like Red-Black Tree

# Set: A collection of unique elements sorted on the basis of their values
# Map: Collection of key, value pairs sorted on the basis of their keys where no two pairs have the same key
# MultiSet: Collection of elements sorted on the basis of their values/ but allows multiple copies of their values
# MultiMap: Collection of key-value pairs sorted on the basis of ther keys where multiple pairs can have the same key

# ---------------------------------------------------------------------------------#
# 3: UNORDERED ASSOCIATIVE CONTAINERS
# Unorderd associative containers implement unsorted hash data structures that can be quickly searched (0(1) amortized , O(n) worst case complexity

# CONTAINER NAME  DESCRIPTION
# Unordered Set:  Collection of unique elements hashed by their values
# Unordered Map:  Collection of key-value pairs that are hashed by their keys where no two pairs have the same key
# Unordered Multiset: Collection of elements hashed by their values and allows multiple copies of values
# Unordered Multimap: Collection of key-value pairs that are hashed by their keys while multiple pairs can have the same keys
# --------------------------------------------------------------------------------#

# ---------------------------------------------------------------------------------#
# 4: CONTAINER ADAPTERS
# They provide a different interface for other containers

# CONTAINER NAME:  DESCRIPTION
# Stack:           Adapts a container to provide STACK(LIFO) data structure
# Queue:           Adapts a container to provide QUEUE(FIFO) data structure
# Priority Queue:  Adapts a container to provide a heap data structure. 