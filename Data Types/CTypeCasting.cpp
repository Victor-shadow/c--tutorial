#include <iostream>
using namespace std;
double x = 1.2;
int main(){
    //Explicit conversion
    const int sum = static_cast<int>(x + 1);
    cout << sum;

    return 0;

}