#include <iostream>
using namespace  std;

int multiply(int a , int b,  int c){
    return a * b * c;
}

int multiply(int a, int b){
    return a * b;
}

int a = 100, b = 200, c = 300;

int main(){
    cout << multiply(a, b, c)<< endl;
    cout << multiply(a, b) << endl;
    return 0;
}