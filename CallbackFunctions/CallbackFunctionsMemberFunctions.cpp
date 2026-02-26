#include <bits/stdc++.h>
using namespace std;

class C{
public: int f(const int a, const int b){
    return a * b;
    }
};

void invoke(function<int(int, int)> calc){
    //call the member function
    cout << calc(100, 200);
}

int main(){
    C c;
    //wrap member function
    auto calc = bind(&C::f, &c, placeholders::_1, placeholders::_2);
    //pass as an argument
    invoke(calc);
    return 0;
}