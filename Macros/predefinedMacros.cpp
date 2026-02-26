#include <iostream>
using namespace std;

int main(){
    //display the current line number and the source file
    cout << " This is line: "<< __LINE__<< " In file " <<__FILE__ << endl;
    //display the compilation date
    cout << "Compiled on: " <<__DATE__<< endl;
    return 0;
}