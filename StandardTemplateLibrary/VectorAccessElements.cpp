#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    //Accessing Elements using [] operator
    cout << "Element at index 2 is: " << v[2] << endl;
    //Access elements using .at() method
    cout << "Elements at index 3 using at(): "<< v.at(3) << endl;
    //out of range exception
    // cout << v.at(10) << endl;
    return 0;
}