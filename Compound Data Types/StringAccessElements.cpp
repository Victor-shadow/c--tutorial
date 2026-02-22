//Characters of a string can be accessed using the [] operator or .at() function
#include <iostream>
using namespace std;

string str = "Introduction to Python";
int main(){
    //Access using index Operator
    cout << "First Character: " << str[0] << endl;
    cout << "Fifth Character: " << str[4] << endl;
    //Access using at operator
    cout << "Character at index 7: " << str.at(6) << endl;
    return 0;

}