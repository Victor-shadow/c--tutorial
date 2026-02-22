//The long keyword increases the size of data type in memory
//It leads to an increase in range of values that the given data type can store
//Syntax: long type name;
//The long modifier can be used with integer and double data types

#include <iostream>
using namespace std;

int main(){
    //print size of long and normal int
    cout << "int size: " <<sizeof(int) << " bytes" << endl;
    cout << "long int size: " <<sizeof(long int) << " bytes" << endl;
    cout << "double size: " << sizeof(double) << " bytes" << endl;
    cout << "long double size: " << sizeof(long double) << " bytes" << endl;
    return 0;

}