//Type cast using char(int) to get the corresponding character value

#include <iostream>
using namespace std;
int x = 53;
int main(){
    cout << "The corresponding character value of x is : ";
    cout << char(x) << endl;

    x = 65;
    cout << "The corresponding character value of x is : ";
    cout << char(x) << endl;

    x = 97;
    cout << "The corresponding character value of x is : ";
    cout << char(x) << endl;
    return 0;
}
