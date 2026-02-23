# In C++ runtime polymorphism is realized using virtual functions. C++ uses Vtable and Vptr to manage virtual functions

# Virtual Table
# The Virtual Table or vtable is a table of function pointers that is created by the compiler to support dynamic polymorphism. Whenever a class contains a virtual function the compiler creates a Vtable for that class. Each object of that class is then provided with a hidden pointer to this table known as vptr
# The VTABLE has one entry for each virtual function accessible by the class. These entries are pointers to the most derived functions that the current object should call

# Virtual Pointers
# The virtual pointer or vptr is a hidden pointer that is added by the compiler as a member of the class to point to th VTable of the class
# For every object of the class containing virtual functions, a vptr is added to point to the vtable of that class

# Virtual Destructor
# Deleting a derived class object using a pointer of Base class type that has a non-virtual destructor results in an undefined behaviour
# The base class should be designed with a virtual destructor