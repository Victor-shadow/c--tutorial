#include <iostream>
using namespace std;

int n = 100;
int main(){
    const int* ptr = &n;
    cout << "The size of int: " << sizeof(int) << endl;
    cout << "Before increment: " <<  ptr << endl;

    ptr++;
    cout << "After increment: " << ptr << endl;
    cout << "Before decrement: " << ptr << endl;

    ptr--;
    cout << "After decrement: " << ptr << endl;
    return 0;
}