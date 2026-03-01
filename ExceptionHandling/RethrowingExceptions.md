# Exception handling plays a role in developing robust software in C++

# Rethrowing an Exception in C++
# It involves catching an Exception within a try block and instead of dealing with it locally throwing it again to be caught by the outer catch block. One preserves the types and details of the Exception ensuring that it can be handled at the appropriate level within a program

# Advantages of rethrowing Exceptions in C++
# 1: Exception type Preservation
# The preservation of exception handling in C++ is a feature. It enables catch blocks at levels to efficiently handle specific types of exceptions allowing for more precise error management
# 2: Additional Processing
# Additionally rethrowing Exceptions provides the opportunity to perform operations or log extra information about the exception before it is caught again further up the call stack
# *add debugging details offer context or encapsulate the original exception with another exception to provide more helpful information to higher level catch blocks

# try {
#  // ...
# }
# catch(const exception& e){
#    //Perform additional operations/wrap original exception
#  throw runtime_error("Additional information: " + string(e.what()));
# }

# Catch Exceptions by Reference
# When rethrowing an exception, it is crucial to catch it by reference(const std::exception&) rather than by value. This ensures that the exception object remains valid after being caught and rethrown multiple times during exception handling cases

# Nested Exceptions
# C++ also allows for nested exceptions where one exception is raised inside the catch block of another exception. If a nested exception is rethrown, it becomes part of the exception as std::nested_exception
# This feature enables handling of the outer and nested exceptions if necessary

# try{
#  try{
#   throw runtime_error("Nested exception)
# }
# catch(const exception& nested){
#  throw_with_nested(logic_error("Outer exception));
#   }
# }
#  catch(const exception& outer){
# //Handle the outer exception and potentially access the nested exception
# try{
#   rethrow_if_nested(outer);
# }
# catch(const exception& nested){
# //handle the nested exception
# }
# }

# Rethrowing exceptions allows them to propagate up the call stack until they are eventually caught and handled by the catch block. Any function  in the call stack can halt the propagation of an exception by catching it and rethrowing it. These mechanism ensures that exceptions are handled based on the context in which they arise