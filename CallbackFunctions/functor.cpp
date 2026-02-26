#include <bits/stdc++.h>
using namespace std;

//A functor
class increment final{
const int num;
public: increment(const int n) : num(n){}
    //This operator overloading enables calling operator() function on objects of increment
    int operator()(const int arr_num)const{
        return num +arr_num;
    }
};

int main(){
    int arr[] = {1000, 2000, 3000, 4000, 5000};
    constexpr int n = std::size(arr);
    constexpr int to_add = 6000;

    transform(arr, arr + n, arr, increment(to_add));

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

}