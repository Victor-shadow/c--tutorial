#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

//Same function with different arguments
int add(int a, int b, int c){
    return a + b + c;
}

int a = 10, b = 20, c = 30;
int main(){
    //Add function
    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;
}