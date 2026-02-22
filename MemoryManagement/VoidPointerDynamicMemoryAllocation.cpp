#include <iostream>
using namespace std;

int main(){
    //Allocate memory for integer using new
    void *p = new(nothrow) int;
    //Type cast the void pointer to int*
    int* intPtr = static_cast<int*>(p);
    //Assign value to allocated memory
    *intPtr = 100;
    //print the value from the allocated memory
    cout << "Value from the allocated memory: " << *intPtr <<  endl;
    //deallocate memory
    delete intPtr;
    return 0;
}