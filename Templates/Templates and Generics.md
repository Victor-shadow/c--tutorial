# A C++ template is a tool for creating generic classes or functions. This allows one to write code
# that works for any data type
# It avoids code duplication by allowing one function or class to work with
# multiple data types mainly allowing generic functions and classes
# Provides type safety unlike void* pointers or macros, and can be specified
# for specific data types when needed

# Syntax
# Templates are defined using the template keyword and template parameters declared using
# typename or class
# template<typename A, typenameB> entity_definition
# typename and class are interchangeable in template declarations

# Templates can be used to define:
# 1: function templates - Allow one to write generic code for functions that can be used with different data types

# 2:  class templates - They are used when a class defines something that is independent of the data type(LinkedList, BinaryTree, Stack , Queue, Array)

# 3: variable templates - It is a variable  that can work with any type specified when the variable is used
# SYNTAX: template<typename T> constexpr T template_variable = value; //variable is evaluated at compile time rather than at runtime


# Template Non-Type Arguments
# Templates can take non-type parameters(constant values, not types)
# Non-type parameters must be compile-time constant because the compiler generates template code using those values at compile time
# They are used to fix values like max, min, size for a template

# Default Template arguments
# One can also specify default type arguments to templates

# Template argument deduction
# It automatically deduces the data type of the argument passed to the templates. This allows one to instantiate
# the template without explicitly specifying the data type

# 1: function template Arguments deduction
# One can skip declaring the type of arguments to be passed to the function template and the compiler will automatically deduce
# the type using arguments passed in the function call

# 2: class template Arguments deduction
# It allows one to create class template instances without explicit definition

# Template metaprogramming
# In C++, template metaprogramming refers to template perform computations at compile time
# rather than at runtime
# It involves recursive template structures where template call other templates during compilation 

# --------------------------------------------------------------------------------------------------
# GENERICS
# Generics allow user defined types (Integer, String, ) to be a parameter to methods, classes, interfaces
# Generic programming is implemented to improve efficiency of code, it enables the programmer to write a general algorithm which will work with all data types
# The advantages of generic programming are:
# 1: Code reusability
# 2: Avoid function overloading
# Generics can be implemented in C++ using  Templates where a data type T is passed as a parameter 
