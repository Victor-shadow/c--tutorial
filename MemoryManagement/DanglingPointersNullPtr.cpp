#include <iostream>
using namespace std;

int main(){
    int* value = new int(11);
    //free it
    delete value;
    //assign nullptr
    value = nullptr;
    //check null before access value
    if (value == nullptr)
        cout << "MemoryManagement is deallocated" << endl;
    else{
        cout << "No deallocation" << endl;
    }
    return 0;

}