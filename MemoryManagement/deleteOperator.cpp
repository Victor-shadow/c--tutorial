#include <iostream>
using namespace std;

int main(){
    int *ptr = nullptr;
    //Request memory for an integer variable
    ptr = new int(10);

    cout << "value of *ptr: " << *ptr << endl;
    //free the value once it is used
    delete ptr;
    //Allocate an array
    ptr = new int[5];
    ptr[2] = 11;
    ptr[3] = 22;
    ptr[4] = 33;

    cout << "Array: " << endl;
    for (int i = 0; i < 5; i++){
        cout << ptr[i] << " ";
        //deallocate when done
    }
    delete [] ptr;
    return 0;
}