#include <iostream>

//define a constant
#define PI 3.14159

int main(){
    constexpr double radius = 4.0;
    //calculate the area of circle
    constexpr double area = PI * radius * radius;
    std::cout << "Area of a circle with radius is: " << radius << area << std::endl;
    return 0;
}