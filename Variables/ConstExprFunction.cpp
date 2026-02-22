#include <iostream>

//A function to evaluate the product of two numbers of an array at compile time
constexpr int product(int a, int b){
    return a * b;
}

int main(){
    int arr[product(2, 4)] = {10, 20, 30, 40, 50, 60 ,70};
    std::cout << arr[5];
    return 0;
}