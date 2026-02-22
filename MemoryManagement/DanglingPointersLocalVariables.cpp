#include <iostream>
using namespace std;

const int* getPointer(){
    //Allocate on the heap
    const int* localVar = new int(100);
    return localVar;
}

int main(){
    //get the pointer to the variable
    const int* ptr = getPointer();
    cout << "Value: " <<*ptr << endl;
    //deallocate
    delete ptr;
    //set ptr to null
    ptr = nullptr;
    return 0;
}