# In C++, unexpected cases/errors may occur during program execution such as attempting to divide by zero, accessing a non-existent file or using invalid data
# This issues are called exceptions. These exceptions must be handled to avoid abnormal termination of the program
# C++ provides try-catch block to handle these exceptions. A value that represents an Exception is thrown in the try block and it is caught and handled in the catch block
# These values are generally objects of a class that represent the type of exceptions

# In-Built Exception Classes
# C++ provides some built-in classes to represent some of the common exceptions like overflow, out_of_range
# The std::exception class is the base class for all the other exception classes

# class exception{
#  public: exception() noexcept;
#  exception(const exception&) noexcept;
#  exception& operator = (const exception&) noexcept;
#  virtual ~exception();
#  virtual const char* what() noexcept;
# };

# The what() method returns the string describing the type of exception. Some methods are virtual methods so that inheriting classes can redefine the functions according to their requirements

# -------------------------------------------------------------------------------------------------#
# Create a Custom Exception Class
# 1: Inheriting from the std::exception
# This allows a custom exception to work seamlessly with the standard exception handling mechanisms in C++ 

# include <bits/stdc++.h>
# using namespace std;
# class CustomExcept: public exception{
# public: 
# //Override what() function
# const char* what() const noexcept override {
#  return "This is a custom exception: ";
#      }
# };
# int main(){
#  try {
#  //Throw custom Exception
#  throw CustomExcept();
# }
# catch(const CustomExcept& e){
#  cout << "Caught an Exception:  << e.what();
# }
# return 0;
# }

# -------------------------------------------------------------------------------------------------#

# --------------------------------------------------------------------------------------------------#
# Inheriting from other methods
# One can also inherit other exception classes such as runtime error or logical_error to specifically represent errors that arise during program execution such as runtime errors
# One can use the custom message passing of these exceptions in the Exception class

# include <bits/stdc++.h>
# using namespace std;
# class CustomExcept: public runtime_error{
#  public:
#  //using Constructor for passing custom message
#  CustomExcept(const string& message){
#  : runtime_error(message) {}
#  };

# int main(){
# try {
#   throw CustomExcept(
#   "This is a custom runtim exception: "
#    );
#  }
#  catch(const CustomExcept &e){
#   cout << e.what();
#   } 
#  return 0;
#  }
# }
# -------------------------------------------------------------------------------------------------#

# Create a non-standard Exception
# One can also create custom exceptions without directly inheriting from built-in exceptions

# -------------------------------------------------------------------------------------------------#
# Exception class               Description
# 1: logical_errors
# invalid_argument             -indicates invalid arguments passed to functions 
# out_of_range                 -indicates an out_of_range error
# domain_error                 -indicates a mathematical domain error


# 2: runtime errors
# overflow_error              - Indicates mathematical overflow errors(arithmetic overflow)
# underflow_error             - Indicates mathematical underflow error(floating-point underflow)
# ios_base::failure           - Indicates Input/Output failure

# bad_cast                    - Indicates dynamic_cast  to a reference fails
# bad_alloc                   - Indicates failure in memory allocations




