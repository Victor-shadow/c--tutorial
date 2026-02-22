//A function is used by calling its name followed by parentheses, passing required arguments if any
//which executes the code inside the function
#include <iostream>
using namespace std;

void invoke_function(){
    cout << "Introduction to C++ programming";
}

int multiply_function(int a, int b){ //a function that takes two integers, returns their product
    //invoked in the main function
    return a * b;
}

int main(){
    invoke_function();
    const int result = multiply_function(100, 200);
    cout << "Multiplication result" << result << endl;
    return 0;
}