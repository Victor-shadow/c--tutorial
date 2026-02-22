#include <iostream>
using namespace std;

int n = 1000;
int main(){
    const int* ptr = &n;
    cout << "Address stored at ptr: " << ptr<< endl;
    ptr = ptr - 1;
    cout << "New address at ptr is: " << ptr << endl;
    return 0;
}