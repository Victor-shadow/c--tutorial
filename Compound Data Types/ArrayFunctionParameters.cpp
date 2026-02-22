//Arrays are passed to functions using pointers, as the array name decays to the pointer to the first element

#include <iostream>
using namespace std;
//Function that takes an array as a parameter
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    //pass array
    printArray(arr, n);
    return 0;

}