//The .substr(pos, len) is used to extract part of a string, where pos is the starting position
//and len is how many characters to copy
//The function creates a new string with the selected portion, starting at pos and
//copying len characters

#include <iostream>
using namespace std;

string str = "Javascript Language";
int main(){
    //Extract Javascript
    string sub1 = str.substr(0, 10);
    cout << "Substring 1: " << sub1 << endl;

    //Extract Language
    string sub2 = str.substr(6, 5);
    cout << "Substring 2: " << sub2 << endl;

    return 0;

}