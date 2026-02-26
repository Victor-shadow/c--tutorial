# The preprocessor in C++ is a tool that processes the code before it is compiled
# by the compiler.
# It includes the header files, conditional compilation, text substitution, removing comments
# The preprocessor allows developers to select which portion of code to be included or excluded
# The portion of code processed by the preprocessor is called expanded code and it is generally
# saved with an .i file extension

#                       Source File

#                       Preprocessor(Preprocessed file .i file)

#                       Compiler(Assembly code .s file)

#                       Assembler(Object code .o file)

#                       Linker(Executable)

# PREPROCESSOR DIRECTIVES IN C++
# They are special instructions given to the preprocessor, which is part of the compilation
# process that runs before the actual code is compiled
# They start with # symbol and used to prepare code by including files, defining constants, deciding which parts of code
# should be handled by the compiler
# They are not regular C++ statements

# include -Links header files to the source code
# define - creates a symbolic or macro constant
# undef - Deletes a macro that has already been defined
# if, elif, else, endif - Compilation that is conditional based on some expression
# ifdef, ifndef - Compilation that is conditional on the presence or absence of a macro
# error - Halts the compilation process/ produces the error notice
# warning - During compilation, a warning notice is shown
# pragma- Provides compiler specific instructions

# ----------------------------------------------------------------------------------------------------------------------#
# 1: include
# The #include preprocessor directive is used to include the contents of one file into the current one
# use the #include directive. Header files are often included using this directive

# Syntax:
# include <file_name> //files from the system directory
# include "file_name" //file present in the current directory
# ----------------------------------------------------------------------------------------------------------------------#

# ----------------------------------------------------------------------------------------------------------------------#
# 2: define
# The #define preprocessor directive is used to define macros. Macro names are symbolic and may be used to represent constant
# values or short bits of code
# One can replace numbers and code snippets using a name

# Syntax
# define macro_name value
# ----------------------------------------------------------------------------------------------------------------------#

# ----------------------------------------------------------------------------------------------------------------------#
# 3. undef
# The #undef preprocessor directive is used to undefine a previously defined macro(#define)
# Used when one wants to redefine an existing macro/eliminate macro definition associated with it from the code

# undef macro_name
# ----------------------------------------------------------------------------------------------------------------------#

# ----------------------------------------------------------------------------------------------------------------------#
# 4. pragma
# The #pragma directive is a compiler-specific instruction. Special instructions to the compiler are provided
# using pragma. It may be used to alter compiler parameters, silence warning behaviours
# Supported pragmas can vary between different compilers/compiler-specific

# Syntax: #pragma directive

# Pragma flags
# 1: #pragma once - Used to include guard for header files
# 2: #pragma message - Used to print custom messages at the time of compilation
# 3: #pragma warning - Used to control warning behaviour(enable/disable warnings)
# 4: #pragma optimize - Used to control optimization settings(manage optimization level)
# 5: #pragma comment - Used to include some additional information in the object file/linker options
# ---------------------------------------------------------------------------------------------------------------------#

# ---------------------------------------------------------------------------------------------------------------------#
# 5. warning
# The #warning preprocessor directive is used to generate a warning message during compilation
# Used for any information/debugging purpose

# Syntax: #warning message //custom message to print as an alert

# ---------------------------------------------------------------------------------------------------------------------#

# ---------------------------------------------------------------------------------------------------------------------#
# 6. error
# The #error directive is a preprocessor directive that is used to print a custom error message for compilation error
# If any condition is not met or any particular requirement is not satisfied, one can stop the compilation
# process using #error

# Syntax: #error error_message //custom error message
# --------------------------------------------------------------------------------------------------------------------#

# ---------------------------------------------------------------------------------------------------------------------#
# 7. #if, #elif, #else, #endIf, #error
# They are conditional preprocessor directives that are used for conditional compilation
# They are used to include/exclude code based on some conditions specified

# Syntax:
# if constant_exprA
# //Code to be executed if constant_exprA is true
# elif const_exprB
# //Code to be executed if constant_exprB is true
# else
# //Code to be executed if none of the conditions are true
# endif
# --------------------------------------------------------------------------------------------------------------------#

# ---------------------------------------------------------------------------------------------------------------------#
# 8. #ifdef, #ifndef
# They are preprocessor directives that are used for conditional compilation
# ifndef verifies that a macro is not defined unlike #ifdef

# Syntax:
# ifdef macro_name
# //Code to be executed if macro_name is defined
# ifndef macro_name
# //Code to be executed if macro_name is not defined
# endif
# ifdef and ifndef are often used with #endif directive to include or exclude portions of code based on whether a certain
# macro is defined or not
# ---------------------------------------------------------------------------------------------------------------------#
