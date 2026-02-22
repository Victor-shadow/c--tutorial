#include <iostream>
using namespace std;

//default arguments should be specified in a function declaration(header)
void defaultArgument(int a = 10){ //function has a default argument
    cout << a << endl;
}

int main(){
    defaultArgument(); //a defaults to 10
    defaultArgument(100);
    return 0;

}