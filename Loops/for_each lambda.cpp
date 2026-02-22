#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    vector<int> vec{1, 2, 3, 4, 5};
    //increment values in the vector
    for_each(vec.begin(), vec.end(), [](int &a) {
        a++;
    });

    for_each(vec.begin(), vec.end(), [](int a){
        cout << a << " " << endl;
    });

    return 0;
}