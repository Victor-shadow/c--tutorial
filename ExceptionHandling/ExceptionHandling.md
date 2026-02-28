# Exception handling in C++ is a mechanism to detect and manage runtime errors(errors that occur during program execution) in a structured way
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