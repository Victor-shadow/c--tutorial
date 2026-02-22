-Polymorphism refers to many forms. In C++ polymorphism is applied to functions
and operators
-A single function name can work differently in different situations

------------------------------------------------------------------------------------------------------------------------
                            POLYMORPHISM
------------------------------------------------------------------------------------------------------------------------                            -
Compile Time                                      RunTime
A)Function Overloading                            A)Function Overriding(Implemented using virtual functions)
B)Operator Overloading

COMPILE TIME POLYMORPHISM
It is also known as early binding or static polymorphism
In Compile time polymorphism,the compiler determines how the function or operator will work
depending on the context
*It is achieved by function overloading or operator overloading

STATIC BINDING
#include <iostream>
using namespace std;

//Base class definition
class BaseClassName{
//accessible by derived classes
 protected: DataType variable1, variable2;
 public: BaseClassName(DataType param1, DataType param2) :variable1(param1), variable2(param2) {}
 //static binding
 ReturnType functionName(){
   cout << "Base function logic" << endl;
   return default_value;
 }
};

//derived class
class DerivedClassName: public BaseClassName{
public: DerivedClassName(DataType param1, DataType param2): BaseClassName(param1, param2){}
//Method Hiding
ReturnType functionName(){
  cout << "Derived function logic" << endl;
  return calculated_value;
    }
}

int main(){
 //BaseClass pointer
 BaseClassName* ptr;
 //Instantiate an object of the derived class
 DerivedClassName object(value1, value2);
 //point the Base pointer to derived class object
 ptr = &object;
 //call the Base version object
 ptr-> functionName();
 return 0;
}
Function Overloading
-It is a feature of object oriented programming where two or more functions can have the same name
but behave differently for different parameters. Such functions are said to be overloaded
Functions can be overloaded either by changing the number of arguments or changing the type of arguments

Operator Overloading
C++ has the ability to provide the operators with a special meaning for a particular data type, this is referred to as
operator overloading
* The addition operator can be used for:
i: string concatenation
ii: Addition of two integers
* The insertion operator (<<) and extraction operator(>>) is used with input
and output streams

------------------------------------------------------------------------------------------------------------------------
RUNTIME POLYMORPHISM
It is also known as late binding and dynamic polymorphism, the function call in
runtime polymorphism is resolved at runtime in contrast with compile time polymorphism
where the compiler determines which function call to bind at compile time
It is implemented using function overriding with virtual functions

FUNCTION OVERRIDING
-It occurs when a derived class defines one or more member functions of the base class
That base function is said to be overridden
The base class function must be declared as a virtual function for runtime polymorphism

RUNTIME POLYMORPHISM                                              COMPILE TIME POLYMORPHISM
1: Referred to as static                                          Also called dynamic binding
binding

2: Achieved using function and                                    Achieved using virtual functions
operator overloading                                              and function overriding

3:Decision made by the compiler                                   Decision made at runtime using vtables
at compile time

4: Faster due to early                                            More flexible but slightly slower
binding