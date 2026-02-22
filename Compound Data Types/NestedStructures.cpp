//It refers to a structure that is defined inside another structure
#include <iostream>
using namespace std;

//Inner structure
struct inner{
    int a, b;
};

//Define the Outer structure
struct outer{
    inner in;
    int x, y;
};

int main(){
    outer object = {{1, 2}, 10, 20};
    cout << "Inner: " << object.in.a << " " << object.in.b << endl;
    cout << "Outer: " <<object.x << " " << object.y;
    return 0;
};