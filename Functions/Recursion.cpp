#include <iostream>
using namespace std;

void f(int n){ //prints a message when a new recursive call is made
    cout << "F(" << n << ")'s Stack Frame Pushed\n"; //new recursive call is made
    if (n  > 1){ //The call stack grows(Descending phase)
        //the function keeps calling itself with n - 1 as long n > 1
        //Each call pushes a new stack frame and pauses until a recursive call complete
        f(n - 1);
        f(n - 1);
    }
    cout << "F(" << n << ")'s Stack Frame Popped\n";
    //The function begins to return if base case is reached
    //recursive call terminated
}

int main(){
    f(3);
    return 0;

}