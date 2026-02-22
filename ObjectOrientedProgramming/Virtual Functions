-A virtual function is a member function that is declared within a base class using
virtual keyword and is Overridden in the derived class
-They enable runtime polymorphism, calling the correct function via a base
class pointer or a reference
- Virtual functions are mainly related to inheritance, allowing derived classes
to provide their own implementation of the base class function
- When a derived class object is deleted through a Base class pointer, a virtual destructor
in the base class ensures that both the derived class and base class destructors are called
safely release all resources
- The virtual destructor is declared using the virtual keyword in the base class
- If a class has any virtual functions, the destructor should also be declared virtual
to ensure cleanup of memory in polymorphic behaviour especially when dealing
with dynamic memory allocation

A pure virtual function is a function in the base class with = 0 and no body, which must be overridden
in the derived classes. A class with such a function is abstract and cannot be instantiated
A pure virtual destructor is a destructor in the base class with = 0, it makes the class abstract and ensures that
when a derived class object is deleted through a base pointer, the derived destructor runs first
followed by the base destructor, cleaning up everything properly

Early Binding and late binding
When a function is invoked in code, binding declares which function gets executed based on the context such as the type of
object or the function signature
Binding happens at two levels:
1: Early binding:  It happens when the function call is resolved during program's compilation
2: Late binding: It happens with virtual functions where the exact function to call is decided at runtime
depending on the actual object type. The program has to figure it out when running

Ways in which the compiler performs runtime resolution
1: vtable: A table of function pointers, maintained per class
2: vptr: A pointer to vtable, maintained per object instance
The compiler adds additional code at two places to maintain and use vptr
* code in every constructor - This code sets the vptr of the object being created to point to the
vtable of the class
* Code with polymorphic function call - Whenever a polymorphic call is made, the compiler inserts code at the
first look for vptr using base class pointer or reference since the pointed or referred object is of derived
type, vptr of a derived class is accessed. Once it is fetched, vtable of the derived class can be accessed. Using vptr
the address of the derived class function is accessed and called

RULES FOR USE OF VIRTUAL FUNCTIONS
1: Virtual functions are defined in the base class and can be overridden in the
derived class
2: They must have the same prototype in base and derived classes
3: They are used through a base class pointer or reference to achieve runtime polymorphism
4: A class may have a virtual destructor in case of dynamic memory allocation but never
a virtual constructor
5: Virtual functions cannot be static, but can be friend functions of other classes

LIMITATIONS OF VIRTUAL FUNCTIONS
1:The function call takes slightly longer due to the virtual mechanism that makes it difficult
for the compiler to optimize because it does not know exactly which function is going to be called
at compile time
2:In a complex system, virtual functions are difficult to debug/make it a little difficult to figure out
where a function is being called from

-------------------------------------------------------------------------------------------------------------------------
PURE VIRTUAL FUNCTIONS
------------------------------------------------------------------------------------------------------------------------
-A pure virtual function is one which has no implementation in the base class declared
using = 0
-A class with at least one pure virtual function is an abstract class that cannot be instantiated and
serves as a blueprint for derived classes, which must provide their own implementation
- A class with at least one pure virtual function becomes an abstract class and Objects
of the abstract class cannot be created directly
- Abstract classes are used to define interfaces and ensure common structure among derived classes
* Used in polymorphism where different classes share the same interfaces but have different behaviours
* A pure virtual functions forces derived classes to override it

-----------------------------------------------------------------------------------------------------------------------

VIRTUAL FUNCTIONS AND RUNTIME POLYMORPHISM IN C++
-A virtual function is a member function declared in the base class using the virtual
keyword and overridden using the override keyword
Virtual functions enable runtime polymorphism, where a function call is resolved at runtime based on the actual
object type, not the pointer or reference type
Runtime polymorphism is achieved through late binding, allowing different behaviours for the same function call in an inheritance
hierarchy

1: function calls depend on the type of object, not the pointer type
2: Virtual function calls are not resolved in constructors
3: Objects are constructed base -> derived, so virtual dispatch is disabled during construction
4: Virtual functions are resolved during runtime, not compile time

Virtual destructors are important since:
1: When deleting objects through a base class pointer, destructors must be
virtual, this prevents memory leaks and ensures derived destructors are called

Internal working of Runtime Resolution
1: vtable: A table of function pointers, maintained per class
2: vptr: A pointer to vtable, maintained per object instance

Runtime Process
1: The constructor initializes the vptr(virtual pointer)
2: On a virtual call, the compiler:
      -Fetches the vptr
      -Access the vtable(virtual table)
      -Invoke the correct function address