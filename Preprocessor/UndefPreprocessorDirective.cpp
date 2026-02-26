#include <iostream>
using namespace std;

// Define a MACRO
#define MAX_VALUE 100
int main(){
    cout << MAX_VALUE << endl;
// Use Undef to change value
#undef MAX_VALUE
#define MAX_VALUE 500

    cout << MAX_VALUE << endl;
    return 0;
}