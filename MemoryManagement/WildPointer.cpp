#include  <iostream>
using namespace std;

int main(){
    /* wild pointer */
    int *p;
    int a = 10;
    p = &a;
    *p = 12;
    cout << *p << endl; //value stored at the memory address of pointer p
    cout << p << endl; //the memory address stored by the pointer
    return 0;
}
