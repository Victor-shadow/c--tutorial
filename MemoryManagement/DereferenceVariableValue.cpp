#include <iostream>
using namespace std;

int a = 5, b = 10;
int main()
{
    //declare a pointer
    int* ptr = &a;

    cout << "The address where 'a' is stored is: " << ptr << endl;
    cout << "The value stored at the address by dereference of the pointer is: " << *ptr << endl;

    //change the value of 'b';
    *ptr = b;
    cout << "The Pointer points at: "<< ptr << endl;
    cout << "The new value stored at the address by dereferencing the pointer is: "<< *ptr << endl;
    cout << "The value of a is: " << a << endl;

    return 0;
}
