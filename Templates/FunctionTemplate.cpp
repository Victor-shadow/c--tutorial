#include <iostream>
using namespace std;

template<typename T> T maxFunc(T x, T y){
    return (x > y)  ? x : y;
}

int main(){
    cout << maxFunc<int>(10, 20) << endl;
    cout << maxFunc<double>(50.5, 70.5) << endl;
    cout << maxFunc<char>('a', 'b')<< endl;
    return 0;
}