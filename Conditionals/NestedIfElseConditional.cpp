#include <iostream>
using namespace std;

int year = 2023;
int main(){
    //Outer if-else statement to check divisibility with 0
    if (year % 4 == 0){
        //First nested if-else statement
        if (year % 100 == 0){
            //Second nested if-else statement to check if divisible by 400
            if (year% 400 == 0){
                cout << year<< "\n Is a leap year";
            }
             else{
                 cout << year << "\n Is not a leap year";
             }
        }
        else{
            cout << year << "\n Is a leap year";
        }
    }
    else{
        cout << year << "\n Is not a leap year";
    }
    return 0;
}