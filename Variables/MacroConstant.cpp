using namespace std;
#include <iostream>

#define PI 3.14159

int main(){
    float radius = 5.0, area;
    cout << "Enter the radius of a circle: ";
    cin >> radius;
    
    area = PI * radius * radius;

    cout << " The Area of the circle is: " << area << endl;

    return 0;

}