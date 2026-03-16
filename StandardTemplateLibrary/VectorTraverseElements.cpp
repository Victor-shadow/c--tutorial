#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <char> v = {'a', 'b', 'c', 'd', 'e'};
    //traverse vector using range based for loop
    for(int i = 0;  i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}