#include <iostream>
using namespace std;

//#define PI 3.14159
#ifndef PI
#warning "PI not defined!"
#endif

int main(){
    cout <<"WarningPreprocessorDirective"<< endl;
    return 0;
}