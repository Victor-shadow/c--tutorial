#include <iostream>
using namespace std;

int arr[5] = {100, 200, 300, 400, 500};
int main(){
    int* ptr = &arr[100];
    int* ptr2 = &arr[200];

    cout << ptr2 - ptr << endl;
    return 0;
}