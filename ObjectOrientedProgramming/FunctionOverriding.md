-A function is a block of code that performs a specific task. It takes input, processes it
and returns output
Function overriding in C++ is a runtime polymorphism where a derived class
redefines a method/function from its base class using the same name, return type and parameters
(A similar function signature)

Conditions
1: The base class must be virtual
2: The derived class must have the same function signature

*If a function is called using a base class object, the base class version gets executed
*If invoked with a derived class object, the derived class version gets executed

Override keyword is mostly used in virtual keyword that was introduced by C++
If the signature does not match any base class function, the compiler gives an error

Syntax:
#include <iostream>
using namespace std;

class BaseClass{
 public: virtual void Display(){
   cout << " This is a Display method() of the Base class: " << endl;
 }
 void output(){
   cout << " This is show() method of Base class: " << endl;
   }
};

class DerivedClass : public BaseClass{
  public: void Display(){
    cout << " Display method in DerivedClass: " << endl;
   }
};

int main(){
  DerivedClass object;
  BaseClass &base = object;
  base.Display();
  object.Show();
}

FUNCTION OVERRIDE WITH POINTERS
-In C++, when a base class has a virtual function, and a derived class overrides it, the function call is resolved at runtime
based on the type of object being pointed to, not pointer type

NOTE: If the base function is not virtual, the derived function has the same name it just
hides the base function

ADVANTAGES OF FUNCTION OVERRIDING
1:Dynamic behaviour at runtime
2: Promotes code reuse through inheritance
3: Changes in base class can affect derived classes easily
4: Enable design patterns like Strategy, Command
5: Encourage loose coupling by coding to base class interfaces

DISADVANTAGES OF FUNCTION OVERRIDING
1:Slightly slower than normal function calls
2:Adds memory overhead(vtable, vptr)
3:Complexity increases in large inheritance hierarchies
4:Mistakes in overriding can cause significant bugs if signatures do not match
5:Requires careful design to avoid maintenance issues

final in C++
The final keyword is used to prevent further overriding of methods or inheritance:
1: Classes - to stop them from being inherited
2: Virtual functions - to stop them from being overridden in derived classes

FINAL WITH FUNCTIONS
Stops a derived class from overriding a virtual function
class Base {
 public: virtual void method() final{
    cout << "Show Base method: " << endl;
    }
};

class Derived: public Base{
  public: void method() override{ //cannot override final function
   cout << "Show Derived method: " << endl;
   }
};

FINAL WITH CLASSES
class FinalClass final{
   public: void display(){
     cout << "This is a final class: " << endl;
     }
 }
class subclass : public FinalClass{ //cannot inherit from final class

};


FUNCTION OVERLOADING                                              FUNCTION OVERRIDING
1: Function Overloading provides multiple                            Function Overriding is redefinition of a base
definitions of the function by changing                              class function in derived class with the same signature
the signature

2: Compile Time polymorphism                                         Runtime polymorphism

3: Same function signatures                                          Different function signatures

4: Overloaded functions are in the same                              Overridden functions are in different
scope                                                                scopes

5: Inheritance is not needed                                         Inheritance is necessary

6: A function has an ability to load                                 A function can be overridden a single time
multiple times

7: Early compile time binding                                        Late compile time binding




