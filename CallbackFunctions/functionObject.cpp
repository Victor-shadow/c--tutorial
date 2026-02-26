#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//A functor

int increment(const int x){
    return x + 1;
}
int main(){
    int arr[]= {100, 200, 300, 400, 500};
    constexpr int n = std::size(arr);
    //apply increment to all elements of arr[] and store modified elements
    transform(arr, arr + n, arr, increment);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;

}