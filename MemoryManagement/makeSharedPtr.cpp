#include <iostream>
#include <memory>
using namespace std;

int main(){
    //Create shared_ptr using std::make_shared library
    shared_ptr<int> shr_ptr1 = make_shared<int>(10);
    shared_ptr<int> shr_ptr2 = make_shared<int>(20);
    //Access values using a dereference operator
    cout << "Value stored in shr_ptr1: " << *shr_ptr1 << endl;
    cout << "Value stored in shr_ptr2: " << *shr_ptr2 << endl;
    //assignment operator to share ownership
    shared_ptr<int> shr_ptr3 = shr_ptr1;

    if (shr_ptr1 == shr_ptr3){
        cout << "shared pointer 1 and shared pointer 3 point the same object." << endl;
    }
    //Swapping the contents of shared_pointer 2 with pointer3
    shr_ptr2.swap((shr_ptr3));
    //check values after swap
    cout << "Value of shared Pointer 2: " << *shr_ptr2 << endl;
    cout << "Value of Shared Pointer 3: " << *shr_ptr3 << endl;
    //check if values are valid
    if (shr_ptr1 && shr_ptr2){
        cout << "Both shared pointer 1 and shared pointer 2 are valid" << endl;
    }

    //reset a shared ptr
    shr_ptr1.reset();

    return 0;
}
