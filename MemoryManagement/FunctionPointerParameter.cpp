#include <iostream>
using namespace  std;

const int a = 100;
const int b = 200;
//Function to perform multiplication
int multiply(){
    return a * b;
}

//function that accepts a pointer as an argument
void print(int(*funcptr)()){
    cout << "The value of the product is: " << funcptr() << endl;
}

int main(){
    print(multiply); //invoke a callback function as a pointer
    return 0;

}