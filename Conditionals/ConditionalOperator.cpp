#include <iostream>
using namespace std;

int main(){
    constexpr int x = 10, y = 20;
    //Use a ternary operator
    constexpr int max_value = (x > y) ? x : y;

    cout << "The maximum value is " << max_value;
    return 0;

}