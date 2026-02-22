#include <iostream>
using namespace std;

inline int getSum(int a , int b){
    return a + b;
}

int num = 10, num2 = 20;
int main(){
    int result = getSum(num, num2);
    cout << "The sum of the two values a and b are: " << result << endl;
}