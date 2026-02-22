#include <iostream>
using namespace std;
int main(){
    //Outer loop - Iterates over rows four times
    for(int i = 0; i < 4; i++){
        //Inner loop - Iterates over columns four times
        for(int j = 0; j < 4; j++){
            cout << "*" << " " <<endl;
        }
    }
    return 0;
}