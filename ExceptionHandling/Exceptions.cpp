#include <iostream>
using namespace std;

int main(){
    try{
        //Try allocate a huge block of memory
        int* bigArray = new int[1000000000];
    } catch(const bad_alloc& e){
        cout << "Caught bad alloc: " << e.what() << endl;
    }
    return 0;
}