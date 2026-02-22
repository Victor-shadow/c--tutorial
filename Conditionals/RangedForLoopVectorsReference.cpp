#include <iostream>
using namespace std;
#include <bits/stdc++.h>

//by default the variable that represents each element is a copy of the element
//Changes cannot be made in actual range using that variable
vector v = {100, 200, 300, 400, 500};
int main(){
    for (const auto &it: v){ //iteration by reference
        cout << it << " " << endl;
    }
    return 0;
}