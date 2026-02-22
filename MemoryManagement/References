-A reference is an alternative name for an existing variable
-It allows one to work with original data directly

SYNTAX
-& is used to create a reference to a variable
T &ref = var;
-ref refers to the variable named var which is of type T

* It is necessary to initialize references at the time of creation
* A reference cannot refer to another variable once it is created

*Arguments passed by reference to a function
-References are commonly used in function arguments to allow modification of
original variables passed to the function
-They are more efficient for large data structures since no copies are made

*Return references from functions
- In C++, functions can return references to variables
* It is useful for modification to a variable inside a function and return
of large data structures
* References to local variables should not be returned as they are destroyed once
a function returns a value

*Limitations of References
1: Once a reference is created, it cannot be later made to reference another object/cannot be reset
This is often done with pointers
2: References cannot be NULL. Pointers are often made NULL(They do not point to any valid memory address)
3: A reference must be initialized when declared

*References in C++ cannot be used to implement Data Structures unlike Java(Reason why java does not require pointers)

*Advantages of using references
1: Safer: Since references must be initialized, wild references like wild pointers
are unlikely to exist
2: Easier to use: Since references do not need a dereferencing operator to access the value
Members of an object reference can be accessed using a . operator