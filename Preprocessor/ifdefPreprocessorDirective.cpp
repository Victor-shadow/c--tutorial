#include <iostream>
using namespace std;

//DEFINE two macros
#define MAX_VALUE 100
#define debug
#define PI 3.14159

int main(){
    //check if DEBUG AND MAX VALUE ARE DEFINED
   #ifdef debug
    cout << "Debug mode and Max Value on: " << endl;
   #else
    cout << "Debug mode and Max Value off: " << endl;
#endif

    //check if PI is defined
#ifndef PI
    cout << "PI is defined: " << endl;
#else
    cout << "PI is undefined: " << endl;
#endif
    return 0;
}