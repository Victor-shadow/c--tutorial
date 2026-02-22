#include <iostream>
using namespace std;

int a = 100;
int b = 200;
int main(){
    const int *ptr = &a;
    cout << *ptr << endl;
    //change the address stored
    int *ptr = &b;
    cout << *ptr << endl;
    return 0;
}