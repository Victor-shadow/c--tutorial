#include <iostream>
using namespace std;

#define PI 3.14159

int main(){
    //conditional compilation
#if defined (PI)
    cout << "PI is defined: " << PI << endl;
#elif defined (SQAURE)
    cout << "Square defined: " << end;
#else
#error "Neither PI or square is defined: "
#endif
    return 0;
}