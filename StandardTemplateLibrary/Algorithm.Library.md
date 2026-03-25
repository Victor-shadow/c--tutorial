# STL ALGORITHM LIBRARY
# Algorithms are ready-made functions that help one perform common operations such as searching, sorting, counting and comparing containers like arrays, vectors and sets
# These algorithms are defined in the <algorithm> and <numeric> header files

# TYPES OF ALGORITHMS
# 1: Searching Algorithms
# Searching algorithms are methods used to find a specific element or information in a data structure such as an array, vector, list
# They help locate elements efficiently without manual checks on items

# --------------------------------------------------------------------------------#
# SEARCH ALGORITHMS
# find(): Searches for an element and returns its iterator if present
# find_if(): Finds the first element that satisfies a given condition
# binary_search(): Checks if an element exists in a sorted container
# lower_bound(): Returns an iterator to the first element not less than a given value
# upper_bound(): Returns an iterator to the first element greater than a given value
# count(): Counts occurrence of a specific value in a range
# count_if(): Counts elements that satisfy a given condition in range
# find_end(): Finds the last occurrence of a subsequence in a range
# ---------------------------------------------------------------------------------#


# 2: Sorting and Rearranging Algorithms
# These algorithms change the order or position of elements

# ---------------------------------------------------------------------------------#
# SORTING ALGORITHMS
# sort(): Arranges elements in a given range into ascending order by default
# stable_sort(): Sorts elements while preserving the relative order of equal elements
# partial_sort(): Sorts only the first N elements in order, leaving the rest unsorted
# nth_element(): Rearranges elements so that the Nth position has the correct element as in the sorted order with smaller ones before it and larger ones after it(but unordered)
# is_sorted(): Checks if the given range is already sorted in ascending order(or by a custom comparator)
# is_sorted_until(): Returns an iterator to the first element where the sorted order breaks
 # ----------------------------------------------------------------------------------#

# 3: Manipulation Algorithms
# These change or update values in the container without necessary sort or search on them

# copy(): Copies elements from one range into another range, preserving their order
# copy_if(): Copies only elements that satisfy a given condition to another range
# copy_n(): Copies exactly n elements from a source range to a destination range
# copy_backward(): Copies elements from a source range to a destination range in reverse order, starting from the end
# move(): Transfers elements from a source range to a destination range, leaving the source elements in a valid but unspecified state
# swap(): Exchange the value of two elements
# replace(): Replaces all occurrences of a specific value in a range with a new value
# replace_if(): Replaces all elements that satisfy a given condition with a new value
# remove(): moves all elements not equal to a given value to the front of the range and returns an iterator to the new logical end(does not actually reduce container size)
# fill(): Assigns a specific value to every element in a given range
# transform(): Applies a function to each element in a range and stores the result in another range
# generate(): Assigns a value to a range by repeatedly calling a given function or a generator
# shuffle(): Randomly rearranges the given elements in a given range

# ------------------------------------------------------------------------------------#

# 4: Count & Comparing Algorithms
# These check or count elements based on conditions
# count(): Returns the number of elements in a range that are equal to a specified value 
# count_if(): Returns the number of elements in a range that satisfy a given condition
# equal(): Checks if two ranges have the same elements in the same order
# mismatch(): Finds the first position where the two ranges differ and returns iterators to mismatched objects/elements
# lexicographical_compare(): Checks if one range is lexicographically less than another
# is_permutation(): Checks if one range is a permutation of another * contains the same elements in any order