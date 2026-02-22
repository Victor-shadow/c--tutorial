//The raw address of the argument is passed as the parameter to the function
#include <iostream>
using namespace std;

void argumentPointer(int *a){
    *a = 100;
    cout << "The value of a is: " << a << endl;
}

int main(){
    int x = 100;
    argumentPointer(&x); //pass the memory address of variable x

    cout << x;
    return 0;
}
//The original value is modified