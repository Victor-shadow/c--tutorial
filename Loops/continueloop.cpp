#include <iostream>
using namespace std;

int main(){
    for(int i =0; i < 5; i++){
        //skip when i = 4
        if(i == 4) continue;
        cout << "Kotlin" << endl;
    }
    return 0;
}