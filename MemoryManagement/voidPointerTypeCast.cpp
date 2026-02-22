#include <iostream>
using namespace std;

//Initialize multiple variables of different data types
int n = 10;
float f = 25.25;
char c = '$';

int main(){
//initialize a void pointer to change the memory addresses for different data types
    void* ptr;

    ptr = &n;
    cout << "The value of n is: " << n << endl;
    cout << "The Address of n is: " << ptr << endl;

    ptr = &f;
    cout << "The value of f is: " << f << endl;
    cout << "The Address of f is: " << ptr << endl;

    ptr = &c;
    cout << "The value of c is: " << c << endl;
    cout << "The Address of c is: " << ptr << endl;

    return 0;
}