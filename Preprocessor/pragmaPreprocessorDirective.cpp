#include <iostream>
using namespace std;


//Define PI to trigger pragma message during compilation
#define PI 3.14159
//set aggressive optimization level
#pragma GCC optimize("03")
int main(){
  #ifdef PI
   #pragma message "PI is defined"
#endif
    cout << "In main function: " << endl;
    return 0;
}