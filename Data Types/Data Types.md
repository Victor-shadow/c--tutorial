//They specify the type of data a variable can store
//Whenever a variable is defined in C++, the compiler allocates memory for that
//variable based on the data type with which it is declared

//BASIC DATA TYPES         Derived Data Types           User-defined Data Types
//1: int                   array                        class
//2:float                  pointer                      structure
//3: double                reference                    union
//4: char                  functions                    typedef
//5: bool                                               using
//6: void

//Primitive data types
//1. Character Data Type
//It is used to store a single character. The keyword used to define a character is
char.
//Its size is 1 byte, and characters stored are enclosed in single quotes('')
//It can generally store upto 256 characters based on ASCII Codes

//2. Integer Data Type
//It denotes that the given variable can store integer numbers
//The keyword used to define integers is int
//Its size is 4 bytes(64-bit systems) and can store numbers for binary, octal, decimal and hexadecimal base systems in the range
-2,147,483,648 to 2,147,483,647

//3. Boolean Data Type
//The boolean data type is used to store logical values: true(1) or false(0)
//The keyword is used to define a boolean variable is a bool
//Its size is 1byte

//4: Float Data Type
//Floating point data type is used to store numbers with decimal points
//The keyword used to define floating-point numbers is float
//Its size is 4 bytes(64 bits system) and can store values in the range of
1.2e-38 to  3.4e+38

//5. Double Data Type
//The double data type is used to store decimal numbers with higher precision
//The keyword used to define double-precision floating point numbers is double
//Its size is 8bytes(64-bit systems) and can store values in the range from 1.7e-308 to 1.7e+308

//6. Void Data Type
//The void data type represents the absence of a value
//A variable of void type cannot be created
//It is used for pointers and functions that do not return any values using
//the void keyword

//7.TYPE SAFETY IN C++
//C++ is a strongly typed language. It means that all variables data type should be specified at declaration
//and it does not change throughout the program
//Values can only be assigned that are of the same type as that of the variable

#include <iostream>
using namespace std;

bool a = 10.248f;
int main(){
    cout << a;
    return 0;
}

//8:Data Type Conversion
//Type conversion refers to the process of changing one data type into another compatible one
//without losing the original meaning

//9. Size of Data type
//The size of a data type can be found using sizeof operator

//10: Data Type Modifier
//Are the keywords used to change or give extra meaning to already existing data types
//It is added to primitive data types as a prefix to modify their size or range of data they can store
//There are four types of modifiers in C++:
//They affect the range/size of the data type
//unsigned
//signed
//short
//long
//long double
//long long int
//unsigned it

//int var1; /4 bytes
//long int var2; //8 bytes