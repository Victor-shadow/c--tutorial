using namespace std;
#include <iostream>
#include <vector>

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};
    //By value
    cout << "Iterate by value: " << endl;
    for(auto it: numbers){
        cout << it << " ";
    }
    cout << endl;

    //By reference
    cout << "Iterate by reference: " << endl;
    for(auto &it: numbers){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
