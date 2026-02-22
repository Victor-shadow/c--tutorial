#include <iostream>
using namespace std;

int square(int x){
    return x * x;

}
int main(){
    //Invoke a function
    int result = square(100);
    cout << " The Square of 100 is: " << result << endl;
    return 0;

}