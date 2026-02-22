#include <iostream>
using namespace std;

//To convert a character to ASCII value it is typecast  using int(character) to obtain the corresponding numeric value

char c = 'a';
int main(){
    cout << "The Corresponding ASCII value of 'a' : ";
    cout << int(c) << endl;

    c = 'A';
    cout << "The Corresponding ASCII value of 'A' : ";
    cout << int(c) << endl;
    return 0;
}