#include <iostream>
using namespace  std;

int n = 6;
int main(){
    //Outer if statement
    if (n % 2 == 0){
        //Inner If statement
        if (n % 3 == 0){
            cout << "Divisible by 2 and 3";
        }
        else{
            cout << "Divisible by 2 but not 3";
        }
    }
    else{
        cout << "Not divisible by 2";
    }
    return 0;
}