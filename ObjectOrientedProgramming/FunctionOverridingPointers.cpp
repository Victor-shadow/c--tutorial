#include <iostream>
using namespace std;
class Base{
  public: virtual void display(){
    cout << "Display from the Base class: " << endl;
  }
    virtual ~Base(){}
};

class Derived: public Base{
    public: void display() override{ //correct override
        cout << "Display from Derived class: " << endl;
   }
    virtual ~Derived(){}
};

int main(){
    Base* basePtr;
    Derived deriveObj;
    basePtr = &deriveObj;
    basePtr->display();
    return 0;
}