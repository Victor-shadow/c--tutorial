#include <iostream>
using namespace std;
#define Square(X) (side * side)

int main(){
    constexpr double side = 15.0;
    //calculate area of square
    constexpr int result = Square(X);
    cout << " The area of a square: " << X << result << std::endl;
    return 0;


}