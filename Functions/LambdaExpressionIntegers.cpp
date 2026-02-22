#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v = {100, 200, 300, 400, 500, 600, 700, 800 ,900}; //Integers are stored in a vector
int main(){
    //Find first element divisible by 3 a specific value is searched using find_if
    auto it = find_if(v.begin(), v.end(), [] (const int&a)
    {
        return a % 3 == 0;
        //lambda function [] (const int &a){
        //return a % 3 == 0;
    //}

    });
    if (it != v.end()) cout << *it;
    else cout << "No such element";
    return 0;

}