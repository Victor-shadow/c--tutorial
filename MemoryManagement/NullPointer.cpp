#include <iostream>
using namespace std;

int main(){
    int* ptr = nullptr;
    if (ptr == nullptr){
        cout << "The pointer is currently null" << endl;
    }

    //*ptr = 10 to avoid runtime error
    //Assign a valid memory address to the pointer
    int value = 10;
    ptr = &value;
    //check if the pointer is null after assigning a valid address
    if (ptr == nullptr){
        cout << "The pointer is still null" << endl;
    } else{
        cout << "The pointer is not null. " << endl;
        cout << "The value pointed at the memory location pointed to by the pointer: " << *ptr << endl;
    }
    return 0;
}