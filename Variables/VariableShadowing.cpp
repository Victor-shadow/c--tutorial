#include <iostream>
using namespace std;
//Global variable declaration
int x = 1000;

void function(){
    //Local variable with the same name
    int x = 2000;
    cout << "Local variable x (hides global) = " << x << endl;
    cout << "Accessing global variable x using scope resolution = "<< ::x << endl;
}

int main(){
    function();
    return 0;
}