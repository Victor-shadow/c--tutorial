#include <iostream>
using namespace std;
//function with default argument
double calculateArea(double l, double h = 10){
    return l * h;
}

int main(){
    cout << "Area 1 is: " << calculateArea(5) << endl;
    cout << "Area 2 is: " << calculateArea(100, 200);
    return 0;

}