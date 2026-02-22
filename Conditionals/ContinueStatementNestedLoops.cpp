//The current iteration of the inner loop is skipped when the program is executed
#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 0; j <= 4; j++){
            if (j == 2){
                continue;
            }
            else{
                cout << j << "*" << endl;
            }
        }
    }
    return 0;
}
