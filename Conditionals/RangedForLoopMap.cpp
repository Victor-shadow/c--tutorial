#include <iostream>
#include <bits/stdc++.h>
using namespace  std;

map<int, char>  intNum ={{1, 'A'}, {2, 'B'}, {3, 'C'}, {4, 'D'}, {5, 'E'}};
map<int, char>  keys ={{1, 'F'}, {2, 'G'}, {3, 'H'}, {4, 'I'}, {5, 'J'}};


int main(){
    //Each element in the map is the pair of the same type
    for (auto i: intNum){
        cout << i.first << ": " << i.second<< endl;
    }

    for (auto [k, v]: keys){
        cout << k << ": " << v << endl;
    }
    return 0;
}
