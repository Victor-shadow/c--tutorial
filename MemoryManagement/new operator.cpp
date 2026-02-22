#include <iostream>
using namespace std;

int main(){
    //Declare a pointer to store the address of the allocated memory
    //Allocate and initialize memory
    const auto ptr = new(nothrow)int(5);
    if (!ptr){
        cout << "MemoryManagement allocation failed" << endl;
    }
    else{
        //print the value stored in the pointer memory address(dereferencing)
        cout << *ptr << endl;
        //print the address of the memory block
        cout << ptr << endl;
    }
    return 0;
}