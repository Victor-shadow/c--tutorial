//The Signed modifier indicates that the given variable can store both negative
//and positive values
//To specify any variable as signed, just add the signed keyword at the start of the variable declaration
//Syntax: signed type name;

#include <iostream>
using namespace std;

int main(){
    //Print the size of normal and signed int
    cout << "signed int size: " << sizeof(signed int) << " bytes" << endl;
    cout << "int size: " << sizeof(int) << endl;
    return 0;
}
//int data type is signed by default