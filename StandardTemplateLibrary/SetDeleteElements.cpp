#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s = {100, 200, 300, 400};
    //delete by value
    s.erase(200);
    //delete by iterator
    s.erase(s.begin());
    //Traverse the set
    for(auto i: s){
        cout << i << " ";
        cout << endl;
    }
    return 0;
}