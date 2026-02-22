#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec {100, 200, 300, 400};
    for (int &x: vec){
        x = x + 5;
        cout << x << endl;
    }
    for (const int x: vec){
        cout << x << endl;
    }
    return 0;
}