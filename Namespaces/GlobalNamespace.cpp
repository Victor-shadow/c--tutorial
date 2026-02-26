#include <iostream>
using namespace std;

int n = 100;
int main(){
    constexpr int n = 200;
    //access global namespace
    cout << ::n << endl;
    cout << n << endl;
    return 0;
}