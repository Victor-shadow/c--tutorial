#include <iostream>
#include  <map>
using namespace std;

int main(){
    map<int, string> m = {{1, "January"}, {2, "February"}, {3, "March"}, {4, "April"}};
    //update value
    m[2] = "Decemeber";
    m.at(1) = "November";

    cout << m[0] << endl;
    cout << m.at(2) << endl;
    return 0;
}