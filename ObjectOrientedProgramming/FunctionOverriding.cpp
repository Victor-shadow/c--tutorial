#include <iostream>
#include <memory>
using namespace std;

class Base{
public : virtual void printResult(){
    cout << "This is the base class: " << endl;
}
    //add a virtual destructor
    virtual ~Base(){}; //release object from memory
};

class Derived : public Base{
public: void printResult() override{
    cout << "This is the derived class: " << endl;
  }
};


int main(){
    //create base class smart pointer manage ownership
    unique_ptr<Base> ptr = make_unique<Derived>();
    ptr->printResult();
    return 0;
}