//A pure virtual destructor can be declared in C++
//After a destructor has been created as a pure virtual object(instance of a class)
//where the destructor body is declared. This is due to the fact that destructors are not overridden in derived classes
//but instead are called in reverse order
//For a pure virtual destructor the body has to be defined
//When destroying instances of a derived class using a base class pointer object, a virtual destructor is used
//to free up memory space allocated by the derived class object
//NOTE: Only destructors can be virtual/Constructors cannot be declared virtual
//The derived class destructor will be invoked first, then the base class destructor will be called
#include <iostream>
#include <memory>
using namespace std;

class Base{
public:
//pure virtual destructor
  virtual ~Base() = 0;
};

Base::~Base(){
std::cout << "~Base() " << std::endl; //explicit call
}
class Derived: public Base{
  public: ~Derived(){
  cout << "~Derived() function executed: " << endl;
}
};

int main(){
   unique_ptr<Base> ptr = make_unique<Derived>();
  cout << ptr.get() << endl;
  return 0;
};
//Destructors are called recursively bottom to up if and only if the value is
//passed in the virtual destructor
//Vtable is a table that contains pointers of all virtual functions that the class defines and the compiler
//provides  vptr to the class as a 'hidden pointer' that points to the ideal vtable, so the compiler makes use of an accurate
//or correct index, calculated at compile time, to the vtable which will dispatch the  correct virtual function
//at runtime