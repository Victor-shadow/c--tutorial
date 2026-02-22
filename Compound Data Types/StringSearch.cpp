//The find() function is used to search for a substring inside a string, if found
//the position/index where the substring starts is returned, if not a special value is returned(npos)

#include <iostream>
using namespace std;
string str = "Java Programming Language";

int main(){
size_t pos = str.find("Java");
    if (pos <str.size()){
        cout << "\"Java\" found at index: " << pos << endl;
    }
    return 0;
}