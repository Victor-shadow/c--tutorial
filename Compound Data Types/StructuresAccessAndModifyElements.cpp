#include <iostream>
using namespace std;

struct Point{
    int x, y;
};


int main(){

Point p = {100, 200};
    //Access members
    cout <<p.x << "";
    cout <<p.y;

    //update members
    p.x = 300;
    //Access members
    cout << p.x << " ";
    cout << p.y;

     return 0;
}