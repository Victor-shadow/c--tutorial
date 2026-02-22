// # -A constant variable is one whose value cannot be changed once
// it is initialized
// # -The const keyword is used to declare a variable as a constant

// Constants can be defined in three ways as:
// 1: Using const keyword
// 2: Using constexpr keyword
// 3: Using #define Preprocessor 

//  USING CONST KEYWORD
//  The const keyword is added in the variable definition
// Syntax: const DATATYPE variable_name = value;
//  The Constant variable is initialized at the time of declaration, the value cannot be modified later
// in the program(Initialized at compile time and runtime)

// #include <iostream>
// using namespace std;

// int main(){
//   int var = 100;

//   //Declare a constant variable
//   const int c = 200;
//   //Change the value of the constant
//   c = 0;

//   cout << c;
//   return 0;
// }

// USING CONSTEXPR KEYWORD
//It specifies that the value of an object or a function can be evaluated at compile time / can be used in constant expressions
// - The constexpr keyword is used to declare a variable as a constant expression which are initialized
// at compile time and their value cannot be changed at runtime

// Syntax: constexpr DATATYPE variable_name = value;

//A function can be declared as constexpr if:
//1: It should contain only a single return statement
//2: It should not contain any loops or conditional statements(invoke only constexpr functions)
//3: The function should not return void

//Constexpr                                          Inline Functions
// 1: It removes function calls                      It hardly removes any function call performs  
//as code/expression is evaluated at compile time    execution at runtime

// 2: Possible to assess the value of the variable   It is not possible to assess the values of the variable
//at compile time                                    at compile time

// 3: Does not imply external linkage                Implies external linkage

//constepr using constructors : Used to make constructors and objects
//Constructors that use constexpr :
//1: Have no virtual base class
//2: Each parameter is literal
//3: It is not a try-block function

// C++ program to demonstrate constexpr function for product
// of two numbers. By specifying constexpr, we suggest
// compiler to evaluate value at compile time
#include <iostream>

constexpr int product(int x, int y) { return (x * y); }

int main()
{
    constexpr int x = product(10, 20);
    std::cout << x;
    return 0;
}
//Performance optimization
// C++ program to demonstrate constexpr function for product
// of two numbers. By specifying constexpr, we suggest
// compiler to evaluate value at compile time
#include <iostream>

constexpr int product(int x, int y) { return (x * y); }

int main()
{
    constexpr int x = product(10, 20);
    std::cout << x;
    return 0;
}

// USING #define Preprocessor
// - They are referred to as macro constants, they work as an alias for their value
// - which is substituted during preprocessing

#define MACRO_NAME replacement_value// Lacks type safety

// CONSTANT VARIABLES                                        LITERALS
// 1: Constants are variables that                           Literals are fixed values
// cannot be modified once changed                           that are directly used in code

// 2: The address of constants                               The address of a literal cannot    
//    can be determined                                      be determined

// 3:They are left values                                    They are right values
  