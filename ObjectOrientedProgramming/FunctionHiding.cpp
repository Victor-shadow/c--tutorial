#include <iostream>
#include <memory>
using namespace std;

class A{
public: virtual void method(){
    cout << "Base class method: " << endl;
   }
    virtual ~A(){}
};

class B: public A{
public: void method() override{ //method hiding
    cout << "Derived class method: " << endl;
   }
    virtual ~B(){}
};

int main(){
    std::unique_ptr<A> unique = std::make_unique<B>();
    unique-> method();
    return 0;
}