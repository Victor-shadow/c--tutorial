#include <iostream>
using namespace std;

const int x = 10;
int main(){
    try{
        if (x % 2 != 0){
            //Throw int
            throw -1;
        }
    }
    //catch int
    catch(const int e){
        cout << "Exception caught: ";
    }
   return 0;
}