#include <iostream>
using namespace  std;

int n = 45;
int main(){
    //Check if n is positive
    if (n > 0){
        //check if positive n is even or odd
        if (n % 2 == 0){
            cout << "Positive even number";
        } else{
            cout << "Positive odd number";
        }
    }
    //Check if n = 0
    else if (n == 0){
        cout << "The number is 0";
    }
    //check if n is negative
    else{
        cout << "The number is negative";
    }
    return 0;



}