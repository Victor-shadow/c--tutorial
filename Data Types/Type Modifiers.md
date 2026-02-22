//In C++, type modifiers are the keywords used to change or give extra meaning
//to already existing data types
//It is added to primitive data types as a prefix to modify their size or range of data
//they can store

//SIGNED MODIFIER
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

//2:UNSIGNED MODIFIER
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

//SHORT MODIFIER
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

//LONG MODIFIER
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


DATA TYPE                                           SIZE
1)signed char                                       1 byte
  unsigned char                                     1 byte

2)signed short int                                  2 bytes
  unsigned short int                                2 bytes

3)signed int                                        4 bytes
  unsigned int                                      4 bytes

4)signed long int                                   8 bytes
  unsigned long int                                 8 bytes

5)signed long long int                              8 bytes
  unsigned long long int                            8 bytes

6)double                                            8 bytes

7)long double                                       8 bytes
