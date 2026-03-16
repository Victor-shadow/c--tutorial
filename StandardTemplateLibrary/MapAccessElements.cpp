#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m = {{1, "Orange"}, {2, "Banana"}, {3, "Apple"}};
    //Access elements
    cout << m[1] << endl;
    cout << m.at(2) << endl;
    return 0;
}