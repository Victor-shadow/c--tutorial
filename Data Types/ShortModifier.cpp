//The short keyword decreases the size of the data type in the memory
//It leads to decrease in the range of values that the given data can store
//A variable can be declared as short by adding the short keyword before variable declaration
//Syntax: short type name;
//The short keyword can only be used with integer type

#include <iostream>
using namespace std;

int main(){
    //Print the size of short and normal int
    cout << "Size of Short: " << sizeof(short int) << " bytes: " << endl;
    cout << "int size: " <<sizeof(int) << " bytes: " << endl;
    return 0;
}