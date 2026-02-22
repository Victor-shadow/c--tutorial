#include <iostream>
#include <memory>
using namespace std;

class PureVirtualFunction{
public: virtual void baseFunction() = 0; //pure virtual function
    virtual ~PureVirtualFunction() = default;
};

class derivedClass : public PureVirtualFunction{
public: void baseFunction() override{
    cout << "Drawing Circle\n";
   }
};

int main(){
    //cannot create an object directly from the abstract class
    //PureVirtualFunction object;
    unique_ptr<PureVirtualFunction> ptr = make_unique<derivedClass>();
    ptr->baseFunction();
    std::cout << ptr.get() << std::endl;
    return 0;
}