-Strings in C++ are objects of the std::string class.
They are used to represent and manipulate sequences of characters
* (char[], std::string) handles memory management automatically and provides
a wide range of inbuilt functions
* A string can automatically grow and shrink as characters are added or removed

* The string container is defined as std::string class inside the <string> header file
  string str;

where:
string: It is a class provided by the Standard template library to handle a sequence of characters
str: name assigned to the string object

STRING FUNCTIONS
1: length() - The function returns the length of the string
2: swap() - The function is used to swap the value of 2 strings
3: size() - used to find the size of the string
4: resize() - The function resizes the length of the string upto a given number of characters
5: find() - used to find the string which is passed in parameters
6: push_back() - It pushes the passed character at the end of the string
7: pop_back() - It pops the last character from the string
8: clear() - The function removes all elements of the string
9: strcmp() - This function compares at most the first num bytes of both passed strings
10:strncpy() - Most n bytes or src are copied
11: strrchr() - This function locates the last occurrence of character in the string
12: strcat() - The function appends a copy of the source string at the end of the destination string
13: find() - The function is used to search a certain substring inside the string and returns the
position of the first character of the substring
14: replace() - The function replaces each element at the range[first, last]that is equal to the old value
with the new value
15: substr() - This function creates a substring from the given string
16: compare() - The function is used to compare two strings and return the result in form of an integer
17: erase() - The function removes a certain part of a string
18: rfind() - The function finds the string last's occurrence