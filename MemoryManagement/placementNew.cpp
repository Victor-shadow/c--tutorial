#include <iostream>
#include <new>
using namespace std;

int x = 10;
int main(){
    cout << "Before placement new: " << endl;
    cout << "X: " << x << endl;
    cout << "&X: " << &x << endl;
    //placement new changes the value of x to 100
    const int *ptr = new(&x) int(100);
    cout << "\nAfter placement new: " << endl;
    cout << "X: " <<x << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&X: " << &x << endl;
    return 0;
}