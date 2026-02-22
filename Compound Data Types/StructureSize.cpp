//The Size of a structure is determined by the sum of the sizes of its individual
//data members
//Additional padding is done by the compiler memory to ensure alignment

#include <iostream>
using namespace std;

struct Size{
    char c;
    int x, y;
};

int main(){
    //Find the Size
    cout << sizeof(Size);
    return 0;
}