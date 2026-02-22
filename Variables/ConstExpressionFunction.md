#include <iostream>
using namespace std;
constexpr double pi = 3.14159;

constexpr double ConvertDegreeToRadian(const double& dDegree){
    return (dDegree * (pi /180));
}

int main(){
    auto dDegree = ConvertDegreeToRadian(270);
    cout << "Angle in radian:" << dDegree;
    return 0;
}