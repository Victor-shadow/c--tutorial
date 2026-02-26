#include <iostream>
using namespace std;
//#define PI 3.14159
int main(){
#if defined (PI)
    cout << "PI is defined: " << endl;
#else
#error "Neither PI nor Square is defined: "
#endif
    return 0;
}