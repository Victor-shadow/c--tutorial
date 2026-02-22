#include <iostream>
using namespace std;

int i = 10;
char c = 'A';
int main(){
    //Two variables
    cout << (int)c << endl; //conversion of c to ASCII Integer
    //Add i and c
    int sum = i + c; //automatic type conversion
    //print sum
    cout << sum;
    return 0;
}