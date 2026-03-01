# In C++ Exceptions are not limited to built-in data types. One can also define their own exception types using classes and throw objects of those classes
# This allows developers to represent application-specific error conditions in a structured and type safe way
# A user-defined exception is thrown using:
# throw ClassName();

# -----------------------------------------------------------------------------------------------#
# User-Defined Exception Class
# include <iostream>
# using namespace std;

# class Name{
#  
# };

# int main(){
# try {
# throw Name();
#   }
# catch(Name e){
#  cout << "Caught Exception Class\n" << endl;
#    }
# return 0;
# }
# -----------------------------------------------------------------------------------------------#


# When exception classes are related through inheritance, the order of the catch block becomes important
# C++ allows throwing objects of user defined classes as exceptions
# Exception-handling is type-based, enabling fine-grained control
# In inheritance based exceptions, catch order matters
# Constructors can throw and handle exceptions for input validations
# User-defined exceptions improve clarity, maintainability and robustness 