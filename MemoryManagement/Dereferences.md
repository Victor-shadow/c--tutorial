//-Dereferencing is use of a pointer to access the value whose address is being
//stored
//-The *operator is used to get the value of the variable from its address

//DEREFERENCE
#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int var = 100;
int main(){

    int *ptr;
    ptr = &var;
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

//METHODS OF CHANGING THE VALUE OF THE POINTER
//*Change the address of the stored variable
//*Change the value of the stored variable