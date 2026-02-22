#include <iostream>
#include <memory>
using namespace std;

struct A{
    static void printA(){
        cout << "struct A..." << endl;
    }
};

int main(){
    const unique_ptr<A> ptr = make_unique<A>(); //unique pointer points to structA
    A::printA();

    //display the address of a pointer
    cout << ptr.get();

    //gives a compile-time error
    //unique_ptr<A> ptr2 = ptr;
    //ptr2->printA();
    return 0;
}

