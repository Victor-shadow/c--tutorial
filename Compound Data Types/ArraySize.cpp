#include <iostream>
using namespace std;

char arr[] = {'a', 'b', 'c', 'd', 'e'};

int main(){
    //size of one element of the array
    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;
    //size of arr
    cout << "Size of arr: " << sizeof(arr) << endl;
    //Length of an array
    const int n = std::size(arr);

    cout << "Length of array: " << n << endl;
    return 0;


}