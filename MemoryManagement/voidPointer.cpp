#include <iostream>
using namespace std;

int a = 100;
int main(){
    //void pointer holds the address of int 'a'
    void *ptr = &a;
    //print the values of 'a' and the address of 'a'
    cout << "The value of a is: "<< a << endl;
    cout << "The Address of a is: " << ptr << endl;
    return 0;

}
