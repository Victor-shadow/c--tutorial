#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> v = {'a', 'b', 'c'};
    //insert z at the back
    v.push_back('d');
    //insert 'e' at index
    v.insert(v.begin() + 1, 'e');
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    } 
    return 0;
}