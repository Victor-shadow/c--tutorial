#include <iostream>
using namespace std;

//Global variables
int x = 100;
//Access the variable from within a function
void display(){
    cout << x << endl;
}

int main(){
    display(); //Access the variable from the main function
    //change the value of the global variable
    x = 200;
    display();
    return 0;
}