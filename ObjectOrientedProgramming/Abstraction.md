-Abstraction refers to the methods that do not have a body and only expose essential features of an object
while hiding internal implementation details
*It improves code maintainability as internal changes can be made without affecting other parts of code used
*Abstract classes may have methods without implementation/ must be implemented by
subclasses

Abstract Classes in C++
Abstraction is mainly achieved using abstract classes and pure virtual functions
They define a common interface for derived classes leaving actual implementation
*Objects of an Abstract class cannot be instantiated
*Derived classes must implement pure virtual functions
*Abstraction provides a common interfaces for derived classes
*An abstract class contains at least one pure virtual function

SYNTAX
class AbstractClassName{
 protected:
 DataType dataMember; //accessible by child classes

 public:
 //constructor to initialize base data
 AbstractClassName(DataType placeholder){
   this->dataMember = placeholder;
   }
   //PURE VIRTUAL FUNCTION
   //"The suffix of an virtual function "= 0" makes this class abstract
   virtual returnType pureVirtualMethod() = 0;
   //concrete Method
   ReturnType concreteMethod(){
    return dataMember;
   }
   //Virtual destructor // cleanup memory
   virtual ~AbstractClassName(){
   }
};


//Derived class
class derivedClassName : public AbstractClassName{
  private:
  DataType specificMember;

  public:
  //Constructor calls Base constructor
  DerivedClassName(DataType baseVal, DataType specificVal)
  : AbstractClassName(baseVal){
    this -> specificMember = specificVal;
}
//Implement the method
ReturnType pureVirtualMethod()override{
  return specificMember * calculations;
  }
}

NOTE: A base class Pointer is used to point to a DerivedClass Object
int main(){
  BasePointer = new derivedObject
  AbstractClassName* pointerName = new derivedClassName(val1, val2);
  //call methods using an arrow operator
  pointerName -> concreteMethod();
  pointerName -> pureVirtualMethod();
  //cleanup
  delete pointerName;
  return 0;
 }

FULL ABSTRACT INTERFACES
- In C++, a class can behave as an interface if it contains only pure virtual functions and no data members
or implemented methods
This enforces that all derived classes must implement every function/full abstract