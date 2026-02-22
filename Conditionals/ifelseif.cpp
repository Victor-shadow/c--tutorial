#include <iostream>
using namespace std;

int age = 18;

int main(){
    //If condition is true, child is printed
    if (age < 13){
        cout << "You are underage";
    }
    //In the above if-statement  is not true then check this else-if condition
    // if evaluates to true, print growing age
    else if (age >= 1 && age <= 18){
        cout << "Growing age";
    }
    //If none evaluates to true evaluate this expression
    else{
        cout << "adult";
    }
    return 0;

}