# A vector represents a dynamically sized array in the Standard Template Library that automatically grows when elements are added beyond current capacity
# A programmer does not have to worry about allocation of extra space initially and maintaining the capacity
# Vectors support bound checking by using v.at(i) for accessing an element at index i in vector v
# Certain insertions and removals can become slightly costly in terms of time as it internally resizes itself beyond certain predefined limits

# Declaration and Initialization of a Vector
# A vector is defined as the std::vector class template in the <vector> header file
# vector<T> v; where T is the type of data of elements and v is the name assigned to the vector

# Operations in Vectors
# Vectors in C++ support various operations that allow one to add, remove, access and modify elements dynamically

# Insert Elements
# push_back(value) - Inserts elements at the end of the vector efficiently
# insert(position, value) - Inserts elements at any position(beginning, middle, end)
# shifts elements to make space

# Access Elements
# Elements in a vector can be accessed using v[i] for direct access or v.at(i) for bound-check access
# Both return elements at index i, but at(i) throws an exception if i is out of range

# Update Elements
# To update an element, one should simply use its index with the assignment operator v[i] = newValue
# This replaces the old element at index i with the new value

# Find vector size
# One can find the size(number of elements) of a vector using size() function v.size()

# Traverse a vector
# One can use a for loop with an index (v[i]) a range-based for loop for(int item: v) or iterators

# Delete a vector
# Elements can be deleted from a vector using the erase() method which requires an iterator pointing to the element
# To remove the last element efficiently use pop_back()

# Empty vector
# To check if the vector is empty use the empty() function, it returns true if the vector has no elements and false if otherwise

# Multidimensional vectors
# Multidimensional vectors are dynamic arrays that can store data in more than one dimension i.e tables or grids
# They are implemented using a vector inside another vector, allowing flexible row-column(2D) or even higher dimensional structures

# Declaration of a 2D vector
# vector<vector<int>> matrix;

# Initialization of a 2D vector
# vector<vector<int>> matrix = {
# {1, 2, 3}
# {4, 5, 6}
# {7, 8, 9}
# };
# vector<vector<int>> matrix(3, vector<int>(4, 0));

# Access elements of a 2D Vector
# cout << matrix[1][2];