#include <iostream>
using namespace std;

struct Point{
    int x, y;

    //Member function 
    int Sum(){
        return x + y;
    }
};

int main(){
    Point p = {1, 2};
    cout << p.Sum() << endl;

    return 0;
};