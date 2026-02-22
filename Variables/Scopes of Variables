//The scope of a variable is the region of a program where the variable is accessible using the name
//it was declared with

//There are two main types of scopes of Variables
// 1. Global Scope
// 2. Local Scope

//GLOBAL SCOPE
//It refers to the region outside any function or a block
//Variables declared in the scope are accessible throughout the program and are referred to as
//Global variables

//LOCAL SCOPE
//It is the region inside a block or {} curly braces
//Variables defined within a function or a block are called local variables to that function
//They do not exist outside the function or block in which they are declared

//When a local variable is declared with the same name as a global variable, The global variable is shadowed and still can be accessed
//using the scope resolution operator ::

//VARIABLE SHADOWING
//It occurs when a local variable has the same name as a global variable
#include <iostream>
using namespace std;
//Global variable
int x = 1000; //variable outside a function

int main(){
    //Local variable with the same name as the global variable
    int x = 2000;
    //access x
    cout << x;
    return 0;
}

//Whenever a local variable is declared with the same name as a global variable. , precedence is given to the local variable

//ACCESS GLOBAL VARIABLES IN VARIABLE SHADOWING
//Users can access the global variables with the same name as local variable using scope resolution operator

#include <iostream>
using namespace std;
//Global variable
int x = 1000;

int main(){
    //Local variable with the same name as a global variable
    int x = 200;
    //Access global x
    cout<<::x; //Use of scope resolution operator
    return 0;
}

//Variations of scopes in C++
//They divide the declared variables based on accessibility and visibility
//1. Instance Scope - A region inside a class but outside any member function of the class
//Variables declared are instance variables and are accessible to the whole class/ objects of the class

//2. Static Member Scope - Applies to variables and functions  declared with the static keyword within the class
//Shared across all instances of the class and can be accessed using the class name

//3. Namespace Scope
//A namespace in C++ is a container that allows users to create a separate scope where the given variables are defined
//It is used to avoid name conflicts and grouping related code together
//Variables can be accessed using their namespace / scope resolution