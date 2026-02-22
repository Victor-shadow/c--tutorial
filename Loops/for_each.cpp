#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int num){
    cout << num << " ";
}

int main(){
    int nums [] = {100, 200, 300, 400, 500};
    //for_each to print each element in the array
    for_each(begin(nums), end(nums), print);

    return 0;
}