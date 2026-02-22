#include <iostream>
using namespace std;

//enum definition
enum direction{
    EAST,
    NORTH,
    SOUTH,
    WEST,
};

int main(){
    //Create an enum variable
    constexpr direction dir = NORTH;
    cout << dir;
    return 0;

}