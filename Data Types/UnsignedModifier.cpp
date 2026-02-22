//The unsigned modifier indicates that the given variable can only store non-negative integers
//It is also added at the start of the variable declaration to define that variable as unsigned

//Syntax:
//unsigned type name;
//It can only be used with integer and character types
#include <iostream>
using namespace std;

//Declare unsigned integer with negative integer
unsigned int  unsigned_i = -100;
//Declare normal integer as unsigned
int i = -10;
int main(){
    //print the value and the size
    cout << "unsigned_i: "<< unsigned_i << endl;
    cout << "unsigned int size: " << sizeof(unsigned_i) << "bytes " <<endl;

    cout << "i: " << endl;
    cout << "int size: " <<sizeof(i) << "bytes ";

    return 0;
}