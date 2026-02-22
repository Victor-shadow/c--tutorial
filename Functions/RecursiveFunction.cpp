#include <iostream>
using namespace std;

void printOutput(int n){
    //Base Case
    if (n == 0) return;

    cout << "C++ Programming Language: " << endl;
    printOutput(n - 1); //the function calls itself where its parameter reduces by 1 for each call until it reaches base case
    //when the recursion stops
}

int main(){
    printOutput(5);
    return 0;
}