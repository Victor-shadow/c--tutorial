#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v){
    for (const auto x: v){
        cout << x << " ";
        cout << endl;
    }
}

vector<int> v1, v2;
int main(){
    //capture by reference
    auto byReference = [&](int m){
        v1.push_back(m);
        v2.push_back(m);
    };

    //capture by value
    auto byValue = [=](int m){
        v1.push_back(m);
        v2.push_back(m);
    };
    //capture v1 by reference and v2 by value
    auto byRefVal = [](int m) mutable{
        v1.push_back(m);
        v2.push_back(m);
    };

    byReference(20); //modifies vector v1 and v2
    byValue(100); //modifies copies , originals do not change
    byRefVal(200); //modifies only v1 since v2 is captured by value
    return 0;
}
