# Exception handling in C++ is a mechanism to detect and manage runtime errors(errors that occur during program execution) in a structured way
# In C++, exceptions are objects that indicate that one has errors in a program, they are handled by the try-catch block
# Examples of runtime errors:
# 1: Division by zero
# 2: Accessing invalid memory
# 3: File I/O failures

# Instead of terminating the program abruptly  when an error occurs C++ allows one to throw exceptions and catch them for graceful handling
# 1: Throwing an Exception: When an error or an unexpected error occurs, the program uses throw keyword to signal an exception
# 2: Catching an Exception: The program searches for a matching catch block to intercept and handle the thrown exception
# 3: Handling the Exception: The catch block contains the logic to respond to the error, allows the program to recover and terminate gracefully

# 1: try-catch Block
# C++ provides an inbuilt-feature for handling exceptions using try and catch block. It is an exception handling mechanism where the code that may cause an exception is placed inside a try block and the code that handles the exception is placed inside the catch block

#  try{
#  //Code that might throw an Exception
# }
# catch(Exception e){
#  //exception handler code
# }

# When an exception occurs in a try-block, the execution stops and control goes to the matching catch block for handling

# Throwing Exception
# Throwing exception means returning some kind of value that represents an exception from the try block. The matching catch block is found using the type of thrown value. The throw keyword is used to throw the exception

# try {
#   throw val
# }
# catch(Exception e){
#
# }

# There are three types of values that can be thrown as an exception
# 1: Built-in Types
# 2: Standard Exception
# 3: Custom Exceptions

# Throwing Standard Exceptions
# Standard Exceptions are the set of classes that represent different types of common exceptions. All these classes are defined inside <stdexcept> header file and mainly derived from the std::exception class which acts as the base class for the inbuilt exceptions

#                                    C++ Exception Hierarchy
#          Logic error                                        Runtime Errors
#          Invalid argument                                   range_error
#          domain_error              Exception                overflow_error
#          length_error                                       underflow_error
#          out_of_range

#          bad_alloc                                          bad_function_call
#                                   bad_cast

#                            Throwing custom exceptions
# When the standard exceptions cannot satisfy the requirements, one can create the custom exception class

# 3: Catching Exceptions
# The catch block is used to catch exceptions thrown in the try block
# The catch block takes one argument,which should be of the same type as the exception
# catch(exceptionType e){

# }
# e is the name of the exception. Statements inside the catch block will be executed if the exception of the ExceptionType is thrown in the try block

# Catching multiple exceptions
# There can be multiple catch blocks associated with a single try block to handle multiple types of exceptions
# try {
#    //Code that might throw an Exception
# }
# catch(type1 e){
#    //executed if exception is of type1
# }
# catch(type2 e){
#    //exception if exception is of type2
# }
# catch(...){
# //execute if no matching catch is found
# }

# Catch by Value or Reference
# Catching exceptions by value creates a new copy of the thrown object in the catch block. Generally, exception objects are not very large/no overhead in creation of large copies

# Catch by reference method just passes the reference to the exception thrown instead of creation of a copy/catches polymorphic exception types and reduces copy overhead

# Handle Uncaught Exception
# If the exception is not caught by any of the catch block(in case catch all is not present), then by default the exception handling subsystem aborts the execution of the program. But this behaviour can be changed by creating a custom terminate handler and setting it as default using set_terminate() function

# Exception Propagation
# When an exception is thrown, execution of the current block is immediately terminated and all the resources automatically are deallocated(except dynamic resources allocated using new)
# The stack unwinding occurs as the thrown exception propagates through the call stack to look for the matching catch block
# When the corresponding catch block is found, exception is caught and handled, if not caught the program terminates

# Nested Try-Catch block
# A nested try block refers to the try block nested inside another try or catch block.
# It is used to handle exceptions where different exceptions occur in different parts of code
# In C++, try-catch blocks can be defined inside other try-catch blocks
# try{
#  //code throw e2 //exception in the outer block
#   try{
#   //code throw e1 //exception in the inner block
# } 
#  catch(eType1 e1){
#  //handle exception
#    }
# }
# catch(eType2 e2){
#  //handle exception
# }
# If the exception thrown in the inner block is of type eType2 instead of eType1, then it will be handled by the outer exception block

# Rethrowing an exception in C++ involves catching an exception within a try block and instead of dealing with it locally throwing it again to be caught by an outer catch block. One preserves the type and details of the exception ensuring that it can be handled at appropriate levels within the program. This approach is generally used when handling exceptions at multiple levels

# Exception Specification
# C++ provides exception specifications to specify that the given function may or may not throw an exception. In modern C++, there are two types of exception specifications:
# 1: no except - Tells that the given function is guaranteed to not throw an exception
# 2: no except(false) - Tells that the given function may throw an exception. It s the default behaviour in case no exception specification is used

# void func(int a) noexcept{

# }
# void func2(int b) noexcept(false){

# }

# NEED FOR EXCEPTION HANDLING
# 1: Separation of concerns - try-catch blocks keep error handling logic separate from normal program flow, improving readability and maintainability
# 2: Selective handling: A function can handle only the exceptions it chooses and propagates others to the caller, enabling flexible and layered error handling
# 3: Explicit exception specifications: Functions can throw exceptions using throw allowing callers to handle or further propagate them
# 4: Structured error grouping:  C++ allows throwing basic types or objects, making it possible to organize and categorize errors using exception class hierarchies

# BEST PRACTICES FOR EXCEPTION HANDLING
# 1: Don't use exceptions for regular control flow/ use them only for exception situations
# 2: Catch exceptions by reference whenever possible to avoid copying overhead / enable polymorphic selection
# 3: Always catch exceptions by reference to a constant to avoid accidental modifications
# 4: Catching generic exceptions using catch (...) does not provide information about exception, so better  to catch specific exceptions to handle errors appropriately
# 5: Failure to catch exceptions can cause the program to terminate unexpectedly. Always ensure exceptions are caught and handled properly to maintain stability
# 6: Not releasing resources('e.g' memory, file handles) after an exception can lead to resource leaks. Use proper cleanup mechanisms such as RAII or final blocks 