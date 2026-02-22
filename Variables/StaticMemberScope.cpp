#include <iostream>
using namespace std;

class A{
    public:
    //static member variable
    static int staticVar;
};

int A::staticVar = 1000;

int main(){
    //Access Static member variable
    cout << A::staticVar; //ACCESS USING CLASS NAME
    return 0;
}