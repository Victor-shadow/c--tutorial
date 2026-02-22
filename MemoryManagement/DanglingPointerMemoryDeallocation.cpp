#include <iostream>
using namespace std;

int main(){
    //allocate memory
    const int *ptr = new int(5);
    //deallocate memory
    delete ptr;
    // now ptr is a dangling pointer
    cout << "It is a dangling pointer: " << endl;
    return 0;

}