//The inner structure can also be defined directly inside the outer structure by creation of a variable name
#include <iostream>
using namespace std;
//Outer structure
struct outer{
    //Nested structure
    struct inner {
        int a, b;
    } in;
    int x, y;
};

int main(){
    outer object = {{1, 2}, 10, 20};
    cout << "Inner: " << object.in.a << " " << object.in.b << endl;
    cout << "Outer: " << object.x << " " << object.y;
    return 0;
};