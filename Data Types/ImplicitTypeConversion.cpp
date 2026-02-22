#include <iostream>
using namespace std;

int i = 10;
char c = 'a';

int main(){
    //c automatically converted to int
    i = i + c;
    //x implicitly converted to float
    float f = i + 1.0;

    cout <<"i = " << i << endl;
    cout <<"c = " << c << endl;
    cout <<"f = " << f << endl;
    return 0;
}
