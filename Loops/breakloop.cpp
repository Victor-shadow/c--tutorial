#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i <5; i++){
        //Terminate before i = 4
        if(i == 2) break;
        cout << "C++" << endl;
    }
    return 0;
}