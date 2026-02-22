#include <iostream>
using namespace std;
//Instead of passing the value of the argument, the reference to the argument is passed to the function
//The value of the original argument is changed
void argumentReference(int &a){
    a = 100;
    cout << "The value of a is: " << endl;
}

int main(){
    int x = 100;
    argumentReference(x);
    cout << x << "Value of function passed as reference";

}