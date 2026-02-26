#include <iostream>
using namespace std;

template <typename t> t multiply(t first, t second){
    return first * second;
}

int main(){
    cout << multiply(55, 66);
    return 0;
}