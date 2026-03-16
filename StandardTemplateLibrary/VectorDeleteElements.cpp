#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<char> v = {'a', 'b', 'c', 'd', 'e'};
    //delete the last element 'e'
    v.pop_back();
    //delete element 'f'
    v.erase(find(v.begin(), v.end(), 'f'));

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}

