#include <iostream>
using namespace std;

void func(){
    //This variable is local to func() cannot be accessed outside the function
    int y = 10000;
    cout << " Y is: " << y;
}

int main(){
    //Access variable from func
    func(); //access the value of y from func()
   // cout << " Y is: " << y;//This gives an error since y is not accessible in the main function as it is local to func()
    return 0;
}