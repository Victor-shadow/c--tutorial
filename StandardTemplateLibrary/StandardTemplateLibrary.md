# It is a collection of pre-built classes and functions that are used to handle and manage data using data structures like vectors, arrays, queue, stacks and maps

# COMPONENTS OF A STANDARD TEMPLATE LIBRARY
# They are the features provided by STL in C++ that can be classified into three types:
# 1:  Containers - hold and organize the data
# 2: Algorithms - perform actions such as sort or search on data
# 3: Iterators - help go through data in containers one by one

# CONTAINERS
# Containers are data structures that are used to store objects and data based on requirements.Each container is implemented as a template class that contains methods to perform basic operations on it. Every STL container is defined inside its own header files.
# Containers can be classified into four types:
# 1: Sequence containers: Vectors, Deque, Lists, Forward Lists, Array
# 2: Container Adapters: Stack, Queue, PriorityQueue
# 3: Associative Containers: Set, Maps, Multiset, Multimap
# 4: Unordered Associative Containers: Unordered Set, Unordered Multiset, Unordered Map, Unordered Multimap

# ALGORITHMS
# STL Algorithms offer a wide range of functions to perform common operations on data mainly containers
# These functions implement the most efficient version of the algorithm  for tasks such as sorting, searching, modifying and manipulating data in containers
# All STL Algorithms are defined inside the <algorithm> and <numeric> header files

# sort: Arrange elements in ascending order by default
# Binary Search: Checks whether an element/value exists in a sorted range
# Find: Searches for the first occurrence of a given value
# Count: Counts how many times a value appears in a given range
# Reverse: Reverses the order of elements in a given range
# Accumulate: Computes the sum of all elements in the range
# Unique: Removes consecutive duplicate elements in a range
# Lower bound: Returns the iterator to the first element ≥ value in a sorted range
# Upper bound: Returns the iterator to the first element > value in a sorted range
# Replace: Replaces all occurrences of old value with a new value in the given range

# ITERATORS
# They are pointer like objects that are used to point to memory addresses of STL Containers
# Iterators are defined inside the <iterator> header file

# BENEFITS OF THE C++ Standard Template LibraryS
# Saves time and effort
# Reliable and Tested
# Fast and Efficient
# Reusablity
# Built-in Algorithms