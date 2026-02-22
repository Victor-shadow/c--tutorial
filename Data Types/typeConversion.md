//It refers to the conversion of one type of data to another compatible type
//so that it does not lose meaning

//Implicit type conversion
//It is also referred to as coercion, it is the automatic conversion of one type of data
//to another type automatically by the compiler when needed. It automatically happens when:
//1:Operations are performed on values of different data types
//2:An argument passed to a function that expects a different data type
//3:Assigning a value of one data type to a variable of another data type

//Cases of Implicit Type Conversion
//1:Numeric Type
//All the data types for the variables are upgraded to the data type of the variable
//with the largest data type

//bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double

//2: Pointer Conversion
//Pointers to derived classes can be converted to pointers to base classes automatically

//3:Boolean Conversion
//Any Scalar types(integer, floating-point, pointer) is implicitly converted to bool in a context that requires
//a boolean value(if, while conditions)

//EXPLICIT TYPE CONVERSION
//It is also called type casting. It is the conversion of one type of data to another type manually
//by the programmer

//C Type casting
//The conversion is done explicitly defining the required type in front of the expression in parentheses
//Referred to as forceful casting
//(data type) expression

#include <iostream>
using namespace std;
double x = 1.2;
int main(){
    //Explicit conversion
    const int sum = (int)x + 1;
    cout << sum;

    return 0;

}

//C++ Type Casting
//C++ introduced its own typecasting method using cast operators
//The Cast operator is a unary operator which forces one data type to be converted into another data type

//Types of Casting
1: Static cast: Used for standard compile time type conversions
2: Dynamic cast:  Used for runtime type conversions in polymorphism and inheritance
3: Const cast: removes or adds const or volatile qualifiers
4: Reinterpret cast: Used for low level re-interpretation of bits(converting pointers)

//RISKS OF TYPE CONVERSION
//1: Data loss that occurs when converting from a larger type to a smaller type
//2: Undefined behaviour that happens during casting of pointers between unrelated types and dereferencing
//them
//3: Violation of const correctness when removing const with const_cast and modification of the variable leads to undefined behaviour
//4:MemoryManagement misalignment casting pointers to types with stricter alignment can cause crashes