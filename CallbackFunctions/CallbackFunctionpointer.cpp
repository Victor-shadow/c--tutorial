#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
int multiply(int a, int b){
    return a * b;
}

//pass a function pointer
int invoke(int val, int output, int(*func) (int, int)){
    return func(val, output);
}
int main(){
    //Pass address
    cout << invoke(20, 10, &add) << '\n';
    cout << invoke(15, 10, &multiply);
    return 0;
}