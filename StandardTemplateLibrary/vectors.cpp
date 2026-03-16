#include <vector>
#include <iostream>
using namespace std;

int main(){
    //declare an empty vector
    vector<int> v;
    //declare vector with a given size and fill it with a value
    vector<int> vec(3, 5);
    //print items of vec
    for(int i: vec){
        cout << i << " ";
    }
    cout << endl;
    //Initialize the vector
    vector<int> vect = {100, 200, 300};
    //print items of v3
    for(int x: vect){
        cout << x << endl;
    }
    return 0;
}


