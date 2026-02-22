//A function is a reusable block of code that performs a specific task
//It divides the program into smaller logical units for readability and maintainability
//of code
//A function can accept parameters, execute statements, and optionally return a value

//Advantages of functions in a block of code
1: Avoid repetition(A function can be written once, and used many times)
2: Allows for easy debugging
3: Readable code - Break logic into clear steps
4: Allows for Modular design - Divides big problems into small parts

//FUNCTION SYNTAX
return_type function_name(type of parameter list){
//function body
  return expression;
}

PARTS OF A FUNCTION
//1: Return type: Specifies what type of value the function returns. Use void if there is no return value
//2: The name of the function
//3: Parameter list: Input that the function accepts. It can be empty if the function has no input
//4: Function body: The block of code that runs when the function is called

//A function declaration introduces the function to the compiler by specifying its return type, name and
//its parameters without the body, and is used if the function is defined later or another file

//DECLARATION
int function_name(int variable);

//function definition contains the actual code that specifies what the function does when it is called
//DEFINITION
int function_name(int a, int b){
 return a + b;
}

//A function must be declared before it is used so that the compiler knows its name, return type and
//its parameters even if its definition appears later or in another file
//This allows the compiler to correctly recognize and validate function calls in larger and multi-file programs

//FUNCTION CALLS
//They allow one to reuse code. A function can be called multiple times with different inputs to perform repeated tasks
//in a structured and clean way

//PARAMETERS AND ARGUMENTS
//A function can accept input values called arguments, which are passed during function calls and received through typed parameters
defined inside function's parentheses

//SYNTAX
return_type name(type1 name1, type2 name2){
  //function body
  return val;
}


#include <iostream>
using namespace  std;

void printNum(int n){
    cout << n<< endl;
}
int num1 = 10;
int num2 = 20;

int main(){

    printNum(num1);
    printNum(num2);
    return 0;

}

//A function can only take as many arguments as specified in the function definition, and one should pass them of the same type when calling it

//TYPES OF FUNCTIONS IN C++
1. Based on Origin
//Library Functions: These are in built functions provided by C++ standard library i.e cout, sqr(), abs() getline()
//They are used by including appropriate headers like <iostream> <cmath> <string>

//User-Defined functions: They are created by the programmer to perform specific tasks in the program

2. Based on Input and Return type
// No parameters and no return value - The function performs a task but does not take input

//Parameters and no return value - The function takes input but does not return a result

//No parameters and return value - The function returns a result but does not take any input

//Parameters and return value - The function takes input and returns a value