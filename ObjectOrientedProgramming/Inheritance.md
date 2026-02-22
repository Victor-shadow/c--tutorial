-Inheritance in Object Oriented Programming is a mechanism by which one class is allowed
to inherit methods and fields of another class
-It refers to the creation of new classes based on existing ones
A class that inherits from another class can reuse methods and fields in that class

Syntax:
class ChildClass: public ParentClass{
 //fields and methods
}

The : with an access specifier is used for inheritance in C++, It allows the derived class(child class) to inherit
the data members(fields) and member functions(methods) of the base class(parent class)
When a class inherits another class, it gets all the accessible members of the parent class as a child class
can redefine/override or add new functionality

-------------------------------------------------------------------------------------------------------------------------
                                 TYPES OF INHERITANCE
                                 Single Inheritance

                Hierarchical      Inheritance            Multiple
                Inheritance                              Inheritance


                Multilevel                               Hybrid Inheritance
                Inheritance
-------------------------------------------------------------------------------------------------------------------------

1: Single Inheritance
-In Single Inheritance, a subclass is derived from only one super class
It inherits the properties and behaviour of a single parent class

2: Multiple Inheritance
-It is a feature of C++, where a class can inherit from more than one class
The constructors of the inherited class are called in the same order in which they are inherited
A class can be derived from more than one base class:
1: A child class is derived from the FATHER and MOTHER class

SYNTAX:
class A{
};
class B{
};
class C: public A, public B{
};
-The destructors are called in reverse order of the constructors

NOTE: The diamond problem occurs when two superclasses of a class have a common
base class
*In general, it is not allowed to call the grandparent's constructor directly, it has to be called through the parent class
It is allowed only when the virtual keyword is used

-In Multiple inheritance, a class can have more than one superclass and inherit features from all parent classes

3: Multi-level Inheritance
-Multi-level inheritance in C++ means a class is derived from another derived class, forming a chain of inheritance

4: Hierarchical Inheritance
-In hierarchical inheritance, more than one subclass is inherited from a single base class
*More than one derived class is created from a single base class

5: Hybrid Inheritance
When two or more types of Inheritance are combined in one program

------------------------------------------------------------------------------------------------------------------------


ADVANTAGES OF INHERITANCE
1: Code reusability: Derived classes can directly reuse data members and methods
in base class avoiding code duplication
2: Abstraction: Supports abstract classes(pure virtual functions) that define a common interface
3: Class Hierarchy(base -> derived -> further derived) to model real-world relationships
4: Polymorphism - fully supports runtime polymorphism through virtual functions, and compile-time polymorphism through
templates and function overloading

DISADVANTAGES OF INHERITANCE
1: Tight coupling: The child class becomes dependent on the parent class, Any changes in the base class
may force changes in derived classes
2: Reduced Flexibility:  Sometimes inheritance is misused where composition(has a relationship)
would be better hence less flexible code
3: Deep inheritance hierarchies(multilevel or hybrid) can make code hard to understand, debug and
maintain
4: Diamond problem:With hybrid or multiple inheritance ambiguity can occur
if the same base class is inherited multiple times
5: Overhead or virtual functions: If polymorphism is used, there is a small runtime overhead due to virtual table lookup