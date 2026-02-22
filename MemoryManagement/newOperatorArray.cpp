#include <iostream>
#include <memory>
using namespace std;

int main(){
    //declare a pointer to store the address of the allocated memory
    //Initialize an array of 5 integers and allocate memory
    const auto ptr = new(nothrow) int[5] {1, 2, 3, 4, 5};
    if (!ptr){
        cout << "memory allocation failed" << endl;
    } else{
        cout << *ptr << endl;
    }
    for (int i = 0; i < 5; i++){
        cout << ptr[i] << endl;
    }
    return 0;
}