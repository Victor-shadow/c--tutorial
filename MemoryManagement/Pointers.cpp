#include <iostream>
using namespace std;

int var = 100;
int main(){
    //declare a pointer to store the address of another variable x
    const int *ptr = &var;
    //print the value
    cout << "The value of var is: " << var << endl;
    cout << "The address of var is: " << &var << endl;
    cout << "The value stored in the pointer is: " << ptr << endl;
    cout << "The address stored in the pointer is: " << *ptr << endl;

    return 0;

}
