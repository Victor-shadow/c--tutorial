# Pass a Function as an Argument allows the program to change behaviour dynamically at runtime
# Such functions are referred to as callbacks
# It is commonly used to customize operations like searching, sorting and event handling
# 1: Functions can also  be passed using function pointers
# 2: In modern C++ it supports callbacks using function wrappers(std::function)

# Pass Pointers to functions
# A function can also be passed to another function by passing its address to that function
# Syntax: return_type(*pointer_name)(param1, param2);
# return_type: data type of the value that the function returns
# pointer_name: Name of the function pointer
# param1, param2: Parameters that the function accepts

# Function wrappers
# In C++ 11, there is a function template class function<> that allows one
# to pass functions as objects

# Syntax: function<return_type(param1, param2)> function_name

# Lambda functions/wrappers
# Lambda's in C++ provide a way to define inline,one time anonymous function objects
# They can be defined in a place where it is required to pass functions as an argument

# Passing member functions of a class
# Providing a class function as an argument to another function, Non-static member functions
# need an object to be called while static member functions can be passed directly
# use std::bind to associate a non-static member function with an object before passing
# Lambda's can wrap non-static members for easier passing

# Function Pointers                                     std::function
# 1: Not Type-safe. Type must match                     Type safe/correct function signatures
#   exactly between declaration/use                     of callable objects

# 2: Less flexibility                                   Supports function pointers/lambda's
# Supports only function pointers                       functors

# 3: Requires explicit declaration                      Wrap's any callable type
#   function signature

# 4: No built-memory management                         Manages memory automatically/lambda 
#                                                       captures

# 5: Cannot store state                                 Can store state as well as functions

# 6: Simple function calls/callbacks                    When you need to store, pass or return
#                                                       any callable object
