#include <iostream>
using namespace std;

int main(){
    //Define two variables
    int m, n;
    //Loops with multiple variables which are updated
    for (m = 1; n = 1; m <= 3, m += 1, n+= 2)
    {
        cout << "Iteration " << m << endl;
        cout << "m is: " << m << endl;
        cout << "n is: " << n << endl;
    }
    return 0;
    
}