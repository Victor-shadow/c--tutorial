#include <iostream>
using namespace std;

int number = 0;

int main(){
    do{ //executes the body of the loop and then the condition is checked
        cout << " The value of n is: " << number << endl;
        number++;
    } while(number< 6);
    return 0;
}