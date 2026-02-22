#include <iostream>
using namespace std;

int n = 100;
int main(){
    int* ptr = nullptr;
    ptr = &n;

    if (ptr == nullptr){
        cout << "No value is counted: " << endl;
    }
    else{
        cout << *ptr << endl;
    }
    return 0;
}