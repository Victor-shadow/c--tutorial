#include <iostream>
using namespace std;

template<typename T> T maxFunc(T x, T y){
    return (x > y) ? x : y;
}

int main(){
    cout <<"Max of 10 and 30: " << maxFunc<int>(10, 40) << endl;
    cout << "Max of 5.5  and 10.5: " << maxFunc<double>(5.5, 10.5) << endl;
    cout <<"Max of 'e' and 'g': " << maxFunc<char>('e', 'g');
    return 0;
}