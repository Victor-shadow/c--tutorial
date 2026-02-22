#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int var = 100;
int main(){
    int* ptr = &var;
    //memory address of var
    cout << "The Address of var is: " << ptr << endl;
    //The value of the memory address of variable var/dereferencing
    cout << "The value stored at the address of var is: " << *ptr << endl;
    //Update the value by dereference
    *ptr = 200;
    cout << "The updated value in the memory address is: " << var << endl;

    var = 30;
    //Access the updated value
    cout << "The updated value is: " << *ptr << endl;

    return 0;

}