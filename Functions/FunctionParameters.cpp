#include <iostream>
using namespace  std;

void printNum(int n){ //function printNum of void return type takes one parameter of integer type n, prints/accepts only one integer value
    cout << n<< endl;
}
int num1 = 10;
int num2 = 20;

int main(){

    printNum(num1); //function printNum is invoked twice, prints each value twice
    //The passed value is accessed using parameter n due to variable scope
    printNum(num2);
    return 0;

}