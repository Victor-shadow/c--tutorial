# Macros are placeholders that the preprocessor replaces before the code is
# compiled
# They are defined using the #define and can be used to create constants/code snippets

# SYNTAX: #define MACRO_NAME macro_definition
# macro_definition: It is the code that the preprocessor will substitute whenever the macro
# is used

# TYPES OF MACROS IN C++
# 1: Object-like macros - They are used to define constant values - replace a word with fixed number/text

# 2: Function-like macros - These macros look like functions/ they are just text replacement

# 3: Conditional macros - They are used to control which parts of code should be compiled based on whether
# something is defined or not

# 4: Predefined macros - Are special macros that are already built by the C++ compiler
# *__LINE__ - This macro expands to the current line number in the source code
# *__FILE__ - This macro expands to the name of the current source file
# *__DATE__ - This macro expands to a string that represents date of compilation
# *__TIME__ - This macro expands to a string that represents time of compilation

# Advantages of MACROS
# 1: They let one reuse code without rewriting it
# 2: Macros allow easy update
# 3: Macros can control which code is included during compilation

# DISADVANTAGES OF MACROS
# 1: Macros can cause bugs/do not do type checking
# 2: They can lead to unexpected behaviour
# 3: Increase code complexity