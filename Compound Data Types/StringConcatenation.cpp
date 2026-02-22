//Strings can be joined using the + operator or the append() function
//Addition operator creates a new string, while append modifies the existing string

#include <iostream>
using namespace std;
#include <string>

string s = "Java";
string t = "Kotlin Coroutines";

//Using + operator
string result = s + t;

int main(){
    cout << "Concatenation using + : " << result << endl;

    //Use append function
    string result2 = s;
    result2.append(t);
    cout << "Concatenation using append: " << result2 << endl;
    return 0;

}