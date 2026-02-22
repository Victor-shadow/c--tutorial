#include  <iostream>
#include <memory>
using namespace std;

class sharedPtr{
    public:
    static void show(){ //function belongs to the class
        cout << "A::show()" << endl;
    };
};

int main(){
    //create a shared pointer to keep track of reference_count
    shared_ptr<sharedPtr> pointer(new sharedPtr);
    //print the address of the managed object
    cout << pointer.get() << endl;
    pointer -> show();
    //a pointer that shares ownership
    const shared_ptr<sharedPtr> pointer2(pointer);
    pointer2 -> show();

    //print the address of pointer, pointer2
    cout << pointer.get() << endl;
    cout << pointer2.get() << endl;
    //return the number of shared_ptr objects
    cout << pointer.use_count() << endl;
    cout << pointer2.use_count() << endl;
    //relinquish ownership for pointer
    pointer.reset();
    cout << pointer.get() << endl; //print nullptr
    cout << pointer2.use_count() << endl;
    cout << pointer2.get() << endl;

    return 0;
}