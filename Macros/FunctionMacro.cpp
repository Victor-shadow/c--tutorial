#include <iostream>

//Define a macro to print a value
#define PRINT(x) std::cout << x << std::endl;

int value = 100;
int main(){
    PRINT(value);
    return 0;
}