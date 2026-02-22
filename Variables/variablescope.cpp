using namespace std;
#include <iostream>

int x = 100; //First variable declared
int main(){
    //Declare the second variable
    int y = 200;
    //Access x and y variables in their scope
    cout << x << " " << y; //both variables are accessible in the main function
    return 0;
}