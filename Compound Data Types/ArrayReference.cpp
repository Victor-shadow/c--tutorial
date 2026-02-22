//Array operators are performed using pointer arithmetic
//The array name can be treated as a constant pointer that stores the memory address of the
//first element of the array

#include <iostream>
using namespace std;

int main(){
    int arr[5];
    //Print arr name
    cout << arr << endl;
    //print address of the first element
   cout << &arr[0];

    return 0;
}