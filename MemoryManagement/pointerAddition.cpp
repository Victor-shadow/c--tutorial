#include <iostream>
using namespace std;

int n = 20;
int main(){
    int* ptr = &n;
    //print the address stored at ptr
    cout << "Address stored at ptr: " << ptr << endl;
    ptr = ptr + 1; //increase the address by 4 bytes(1 x 4 bytes)
    cout << "Add one to ptr: " << ptr << endl;

    ptr = ptr + 2;
    cout << "Add two to ptr: " << ptr << endl;
    return 0;
}