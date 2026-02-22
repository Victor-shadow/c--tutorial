#include <iostream>
using namespace std;

void printValue(int &x){
    x = 20;
    cout << "The value of x is: " << x;
}
int main(){
    int a = 10;
    printValue((a)); //pass 'a' as a reference to printValue function(modifies the value of a directly by using a reference)
    cout << "The value of 'a' is " << a;
    return 0;
}
