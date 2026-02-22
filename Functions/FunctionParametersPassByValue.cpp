//The value of the variable is copied and then passed to the function. As a result
//any change to the parameter inside the function does not affect the variable original value in the caller
//Not usd in large data structures

#include <iostream>
using namespace std;
//Arguments passed by value
void argumentValue(int a){
    //Modify the argument
    a  = 100;
}
int main(){
    int x = 100; //variable passed by value
    //Pass x by value to change
    argumentValue(x); //when argumentValue is invoked, with x as the argument, a copy of x is created and passed to the function
    //parameter a is modified and only local copy of value is affected

    cout << x;
    return 0;
}