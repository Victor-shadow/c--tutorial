#include <iostream>
using namespace std;

//base class
//The Base class has three virtual functions: function(), func(), func2()
//The virtual table of the base class has three elements ie function pointer to base::function()
class Base{
    //_vptr
    public: virtual void function(){
        cout << "Base Function: " << endl;
    }
    virtual void func(){
        cout << "Base Function 2(): " << endl;
    }
    virtual void func2(){
        cout<<"Base Function 3(): " << endl;
    }
     
    virtual ~Base() = default; //destroy objects in memory as soon they are out of scope using destructor
};
//vtable ~ BaseClass
//Base::function()
//Base::func()
//Base::func2()


//class Derived from base class
//The Derived class inherits three virtual functions from the Base class class but overrides only function from the Base class
//so all the other functions will be the same in the Base class 
class Derived: public Base{
    //_vptr
 public: 
 //overriding function
 void function(){
    cout << "Overriding function" << endl;
    }
    virtual ~Derived() = default;
};
//vTable ~ Base Class
//Derived::function()
//Base::func()
//Base::func2()

//The DerivedB class inherits from Derived class so it inherits the function from the derived class
//and func2 and func from the Base class
//This class only overrides func from the Base class


class DerivedB: public Derived{
    //_vptr
    public:
    void func(){
        cout << "Derived function: " << endl;
    }
    virtual ~DerivedB() = default;
};

//vTable ~ BaseClass
//Derived::function()
//DerivedB::func()
//Base::func2()

int main(){
    //Define base class pointers
    Base* ptr = new Base();
    Base* ptr2 =new Derived();
    Base* ptr3 = new DerivedB();

    //invoke functions
    ptr-> function();
    ptr-> func2();
    ptr->func();
    ptr2-> function();
    ptr2-> func();
    ptr2->func2();
    ptr3->func();
    ptr3->func2();
    ptr3->function();
    //delete objects
    delete ptr;
    delete ptr2;
    delete ptr3;

    return 0;
}

