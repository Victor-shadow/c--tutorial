#include <iostream>
using namespace std;

int age = -25;

int main(){
    //check if number is positive
    if ( age >= 0)
        cout << "Positive";
    //check if number is negative
    else if (age<0)
        cout << "Negative";
    else
        cout << "Zero";
    return  0;
}