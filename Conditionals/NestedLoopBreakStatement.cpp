#include <iostream>
using namespace std;

//Break statements can also be used with nested loops
//If used in the innermost loop, control comes out only from inner loop
int main(){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (j > 3) break;
            else
                cout <<"*";
        }
        cout << endl;
    }
    return 0;
}