#include <iostream>
using namespace std;

int n = 100;
int main(){
    int* ptr = &n;
    int** ptr2 = &ptr;

    //compare equality
    if (const int* ptr3 = *ptr2; ptr == ptr3){
        cout << "Point to the same memory location" << endl;
    }
    else{
        cout << "Pointer1 points to" <<ptr << endl;
        cout << "Pointer3 points to: " <<ptr3<< endl;
    }
    return 0;
}