//sort vectors in descending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v = {100, 200, 300, 400, 500}; //numbers are stored in a vector
int main(){
    //sort in descending order
    sort(v.begin(), v.end(), [] (const int& a, const int &b){ //sorts in descending order
        return a > b;
    });

    for (int x : v){
        cout << x << " ";
        return 0;
    }
}