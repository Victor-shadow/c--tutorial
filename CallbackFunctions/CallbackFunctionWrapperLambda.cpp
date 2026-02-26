#include <functional>
#include <iostream>
using namespace std;

//function that takes a function ptr as a parameter
int invoke(const int x, const int y, function<int(int, int)> func){
    return func(x, y);
}

int main(){
    //lambda functions
    int k = invoke(20, 10,
        [](int x, int y) -> int
    {
        return x + y;
    });
    cout << k << endl;
    return 0;

}