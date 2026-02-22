//Deleting a derived class object using a pointer of base class type that has a
//non-virtual destructor results in undefined behaviour
//The base class should be defined with a virtual destructor
#include <iostream>
using namespace std;

class Base{
public: Base(){
        std::cout << " constructor Base: " << std::endl;
    }
    virtual ~Base(){
    std::cout << "destructor Base : " << std::endl;
   }
};

class Derived: public Base{
public: Derived(){
    std::cout << " constructor Derived : " << std::endl;
}
    ~Derived(){
    std::cout << " destructor Derived : " << std::endl;
     }
};
int main(){
    unique_ptr<Base> ptr = make_unique<Derived>();
    cout << ptr.get() << endl;
    return 0;
}


