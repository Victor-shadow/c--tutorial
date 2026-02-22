#include <iostream>
using namespace std;

int x = 100;
int main(){
    //void pointer holds the address of int
    void *ptr = &x;
    //cannot dereference void pointer
    //cout<< *ptr << endl;
    //Type cast the pointer
   cout << "The value pointed by the pointer: "<< *(static_cast<int*>(ptr)) << endl;
    return 0;
}