#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m = {{1, "Windows"}, {2, "Linux"}, {3, "MacOS"}, {4, "Unix"}};
    //delete a key
    m.erase(2);
    //delete by iterator
    m.erase(m.begin());

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}