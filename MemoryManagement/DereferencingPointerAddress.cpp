#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a = 10, b = 20;
int main(){
    //A reference to the pointer for variable a
    int *ptr = &a;
    cout << "The address of where 'a' is stored is: " << ptr << endl;
    //Dereference the pointer
    cout << "The value stored at the address by dereferencing the pointer of the variable a is: " << *ptr << endl;


    //A reference to the pointer for variable b
    ptr = &b;
    cout << "The address of where 'b' is stored is: " << ptr << endl;
    //Dereference the pointer
    cout << "The value stored at the address by dereference of the pointer of variable 'b' is : " << *ptr << endl;

    return 0;
}