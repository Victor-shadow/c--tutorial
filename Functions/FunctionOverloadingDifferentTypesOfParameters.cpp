#include <iostream>
using namespace std;

int add(double a, double b){
    return a + b;
}

int add(int a, int b){
    return a + b;
}

int a = 100.0, b = 200.0;
int main(){
    cout << add(a, b) << endl;
    return 0;
}