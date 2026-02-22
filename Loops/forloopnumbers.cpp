#include <iostream>
using namespace std;

int main(){
    //Initial value of a number
    int number = 10;
    //Initialize loop variable
    int i;
    for(i = number; i > 0; i--)
        cout << i << endl;
    return 0;
}
//The loop variable is iterated from number 10 to 1 and in each test condition is checked(is i > 0)
//if true the value is printed / decremented
//When condition is false loop terminates