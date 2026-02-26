#include <iostream>
using namespace std;

//DEFINE MACROS
#define PI  3.14159
#define findSquare(x)(x * x)

double radius = 15.0;

int main(){

    //Macro name PI and findSquare substituted by the preprocessor
    const double area = PI * findSquare(radius);
    cout << area;
    return 0;

}