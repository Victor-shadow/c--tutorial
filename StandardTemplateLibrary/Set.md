# A set is a container that stores unique elements in some sorted order
# It is an implementation of the Self-Balancing Binary Search Tree, specifically a Red-Black Tree which ensures:
# 1: Search, delete and insert in O(log n) time
# 2: Does not allow duplicates
# 3: Elements are always sorted in Ascending Order by default. One can choose a way of ordering them using a custom comparator
# Compared to unordered set, the time taken to search, insert and delete are higher, but elements are in sorted order and also support additional functions like upper_bound() and lower_bound()

# The set container is defined as std::set class template inside <set> header file
# set <T> s;
# T - Data type of elements in the set
# s: Name assigned to the set


# Operations performed on the Set
# Inserting Elements
# The insert() operation adds a new element to the set only if it is not already present
# If the element already exists the method does nothing{no duplicates are allowed in the set}

# Searching Elements
# The find() function is used to check whether an element exists. It returns an iterator if an element is found, else returns end() if no element is found
# The count() function is used to check existence, returns 1 if the element is present or returns 0 if the element is not present

# Traverse Elements
# Loop(ranged base for loop or iterators) is used to traverse all elemens in the set
# The traversal visits elements in their sorted order(by default ascending or according to the custom comparator)

# Delete Elements
# To delete elements from the set, use the erase() method it removes if the element exists, else does nothing