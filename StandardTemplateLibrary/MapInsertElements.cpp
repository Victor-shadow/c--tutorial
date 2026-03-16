#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m = {{2, "Tuesday"}, {3, "Wednesday"}};
    //Insert a key-value pair
    m.insert({1, "Saturday"});
    for(auto x : m)
     cout << x.first << " " << x.second << endl;
    return 0;
}