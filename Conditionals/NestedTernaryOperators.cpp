#include <iostream>
using namespace std;
int main(){
    int A = 40, B = 50, C = 20;
    //Evaluate the largest of the three
    int res = (A < B) ? ((A < C) ? A : C) :
         ((B > C) ? B : C);

    cout << " The maximum value is: " << res;
    return 0;


}