# Maps are associative containers that store key-value pairs in sorted order using a self balancing Red-Black Tree.
# They ensure O(log n) time for search, insertion and deletion, do not allow duplicate keys, and provide ordered traversal along with functions like upper_bound() and lower_bound()

# SYNTAX
# The map container is defined as std::map class template inside the <map> header file
# map<key_type, value_type> m;
# key_type - Data type of the key
# value_type - Data type of the value
# m : name of the map

# Basic Operations on Map Container
# 1: Inserting Elements
# The insert operation adds a new key-value pair to the map only if the key is not already present
# If the key exists, insert() does not update the value and leaves the map unchanged

# 2: Access Elements
# One can access elements in a map using [] operator which returns the value for a given key and inserts the key with a default value if it doesn't exist
# To check if a key exists without adding it one uses the find() method

# 3: Update Elements
# To update a value, one can simply assign a new value to an existing key using map[key] = newValue; If the Key already exists, the value gets updated

# 4: Finding Elements
# find() function is used to check if a key exists on a map which looks for the key and returns its position if found
# If the key is not present on the map, find() returns a special value called end() meaning it has not been found

# Traverse a Map
# A loop can be used to traverse all key-value pairs on a map, which visits each pair in order sorted by the keys

# Delete Elements
# To delete a key and its value from a map using erase(key) which deletes the part if the key exists, or else does nothing