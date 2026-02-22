//Characters in a string can be added using .push_back() removed with .pop_back()
//or altered with .insert() and .erase()

#include <iostream>
#include <string>
using namespace std;

string str = "Introduction to C++";
int main(){
    //Add a character at the end of a string
    str.push_back('!');
    cout << "After push_back: " << str << endl;
    //Remove the last character
    str.pop_back();
    cout << "After pop_back: " <<str << endl;
    //Insert a substring
    str.insert(5, "Kotlin");
    cout << "After insert: " << str << endl;
    //Erase a part of a string
    str.erase(5, 4);
    cout << "After erase: " << str << endl;

    return 0;
}