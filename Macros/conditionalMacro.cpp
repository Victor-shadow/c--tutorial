#include <iostream>
//Define a MACRO named debug
#define DEBUG

int x = 10, y = 20;
int main(){
    const int sum = x + y;
    //this block only gets compiled if DEBUG exists
    #ifdef DEBUG
    std::cout << "[DEBUG] X = " << x << std::endl;
    std::cout << "[DEBUG] Y = " << y << std::endl;
    std::cout << "[DEBUG] Sum = " << sum << std::endl;
    #endif

    //Always compiled
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}