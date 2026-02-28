#include <iostream>
using namespace std;
//callback function
int square(int x){
    return x * x;
}

//A function that takes  a function pointer -stores memory address of a func
void FunctionPointer(const int value, int(*func) (int)){
    cout << "Result: " << func(value) << endl;
}
int main(){
    FunctionPointer(5, square);
    return 0;

}
