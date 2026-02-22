#include <iostream>
using namespace std;

int &maxValue(int &a, int &b){
    return (a > b) ? a : b;
}

int x = 10 , y = 20;
int main(){
    //maxValue returns a reference to the larger two integers
    //since getMax is a reference, change getMax also modifies the value of y
   int &getMax = maxValue(x, y);
    getMax = 30;
    cout << "x = " << x << "y = " << y << endl;
    return 0;

}