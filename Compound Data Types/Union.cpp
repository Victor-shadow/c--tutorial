#include <iostream>
using namespace std;

union A{
    int a;
    char b;
};

union B{
    int arr[10];
    bool c;
    double d;
};

int main(){
    //Use size of operator
    cout << "Size of: " << sizeof(A) << endl;
    cout << "Size of: " << sizeof(B) << endl;
    return 0;
}

