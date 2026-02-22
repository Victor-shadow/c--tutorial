#include <iostream>
using namespace std;

int multiply(const int a ,const int b){
    return a * b;
}

int main(){
    int (*func)(int, int) = multiply; //function pointer to store the address for multiply
    const int product = func(1000, 2000);
    cout << "The value of the product is: " << product << "\n";
    return 0;
}