#include <iostream>
using namespace std;

void findNum(const int n){
    for (int i = 0; i <= 100; i++){
        if (i == n){
            cout << "Number in Range[0, 100]";
            //The function is terminated
            return;
        }
    }
    cout << "Number not in Range[0, 100]";
    //final return
}
int main(){
    constexpr int n = 100;
    //Invoke the function
    findNum(n);
    return 0;
}