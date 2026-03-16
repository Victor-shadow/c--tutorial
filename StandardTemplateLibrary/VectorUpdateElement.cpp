#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {100, 200, 300, 400, 500};
    cout << "Original value at index 1 is: "<<v[1]<< endl;
    //update element
    v[1] = 50;
    cout << "Updated value at index 1: "<< v[1]<< endl;
    return 0;
}