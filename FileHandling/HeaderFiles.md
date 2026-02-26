# Header files in C++ are files that contain code for functions, classes
# and objects
# Existing Code can be reused in other places
# They are used in the program as: #include
# A header file contains:
# 1: Function definitions: Actual body of a function
# 2: DataType definitions: Explains kind of data stored
# 3: Macros: Simple text replacements that make code reusable

# Types of header files
# 1: Standard Header files
# These are built-in header files that come with the C++ standard library. They provide commonly
# used functions and classes
# They include:
# 1: <iostream> : It contains declarations for input and output operations using streams: std::cout
#                  std::cin, std::endl;
# 2: <cmath> : It is used to perform mathematical operations like sqrt(), log2(), pow()
# 3: <cstdlib> : Declares functions that involve memory allocation and system related functions, malloc(), exit(), rand()
# 4: <cstring> :It is used to perform various functionalities related to strings like strlen(), strcmp(), strcpy(), size()
# 5: <vector> :It is used to work with container class for dynamic arrays(vectors) functions like begin(), end()
# 6: <string> : Provides the std::string class and functions for string manipulation
# 7: <iomanip> : It is used to access set() and setprecision() functions to limit decimal places in variables
# 8: <ctime> : It is used to perform functions related to date() and time() like setdate() and getdate()
#              It is used to modify the system date/get CPU time

# 2: User-defined header files
# These files are defined by the user and can be imported using #include
# They are used to encapsulate functions, classes or declarations to organize and
# reuse code by separation in different files