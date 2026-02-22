#include <iostream>
#include <string>
using namespace std;

string str = "C++ is a general purpose programming language";

int main(){
    //Traverse a string using Index
    cout << "Using Index: ";
    for (int i = 0; i < str.size(); i++){
        cout << str[i]<< endl;
    }
    //Traverse use a ranged for loop
    cout << "Using range-based for loop: ";
    for (const char ch: str){
        cout << ch << endl;
    }
    //Traverse using an iterator
    cout << "Using iterator";
    for (auto it = str.begin(); it != str.end(); ++it){
        cout << *it << endl;;
    }
    return 0;

}