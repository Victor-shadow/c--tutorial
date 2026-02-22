#include <iostream>
using namespace std;


int main(){
    auto res = [] (int x){ //the lambda expression takes integer x and returns the square of x
        return x * x;
    };
    cout << res (1000) << endl;
    return 0;
}