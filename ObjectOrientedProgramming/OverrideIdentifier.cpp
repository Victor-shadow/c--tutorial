//The override identifier is used by the compiler to understand that it is an overridden version
//of a base class function. It makes a compiler check on the base class to see if there is a virtual function with its exact signature, if
//not the compiler shows an error
//The override identifier helps to check if:
//There is a method with the same name in the parent class
//The method declared in the parent class is virtual and has the same signature with the subclass method
#include <iostream>
using namespace std;

class Base{
public: virtual void func(){
    cout << "Method in base class: " << endl;
  }
    virtual ~Base(){}
};

class Derived: public Base{
public: //mistake
    void func(int a) {
        cout << "Derived class method: "<< endl;
    }
    virtual ~Derived(){}
};

int main(){
    Base b;
    Derived d;
    cout << "Compiled successfully! " << endl;
    return 0;
}