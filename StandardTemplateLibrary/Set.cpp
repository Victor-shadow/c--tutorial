#include <iostream>
#include <set>
using namespace std;

int main(){
    //create an empty set
    set<int> s;
    //Initialize the set with list
    set<int> s2 = {1, 2, 3, 4, 5};
    //traverse the set
    for(auto &it: s2){
        cout << "Elements in the set are: " << it << endl;
    }
    return 0;
}