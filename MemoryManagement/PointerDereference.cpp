#include <iostream>
using namespace std;

int var = 10;
int main(){
    //store the address of var
    const int *ptr = &var;
    //Access the value at the memory address
    cout << *ptr << endl;
    //Access the address stored at the pointer
    cout << ptr << endl;
    return 0;
}