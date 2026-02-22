#include <iostream>
using namespace std;

int a = 10, b =20;
int main(){
    //boolean variables
    const bool isEqual = (a == b);
    const bool isSmaller = (a < b);

    cout << "Is a = b? " << isEqual <<endl;
    cout << "Is a < b? " << isSmaller << endl;

    //boolean in if statement
    if (isSmaller)
        cout << "a is smaller than b" << endl;
        else
        cout << "a is larger than b" << endl;
   return 0;
}