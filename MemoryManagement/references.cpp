#include <iostream>
using namespace std;

int x = 10;
int main(){
    int &ref = x; //ref refers to variable x
    cout << " The initial value of x: " << ref << endl;

    ref = 100; //when the value of ref is modified it changes directly the original value since they refer to the same memomry location
    cout << "The final value of x is: " << ref << endl;
    return 0;
}
