#include <iostream>
#include <set>
using namespace std;

int main(){
    //Initialize set with values
    set<int> s = {10, 20, 30, 40, 50};
    //Insert an elemet
    s.insert(60);
    //Traverse the element
    for(auto x: s){
        cout << x << endl;
    }
    return 0;
}