#include <iostream>
#include <memory>
using namespace std;

struct A{
    static void printValue(){
        cout << "Struct A... " << endl;
    }
};

int main(){
  unique_ptr<A> ptr = make_unique<A>();
    //the arrow operator allows one to access the member functions of a class, struct ,union
    ptr-> printValue();
    //display the address stored
    cout << ptr.get() << endl;
    //copy the address to p2
    const unique_ptr<A> ptr2 = std::move(ptr);
    ptr2-> printValue();
    cout << ptr.get() << endl;
    cout <<ptr2.get();
    return 0;
}