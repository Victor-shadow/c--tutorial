#include <iostream>
using namespace  std;

int n =4; //size of the square matrix
int main(){
    for (int i = 1; i <= n; i++){ //rows of the matrix
        for (int j = 1; j<= n; j++){ //columns of each row of the matrix
            if (i == j) //prints 1 on the diagonal and 0 in other positions
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;

}