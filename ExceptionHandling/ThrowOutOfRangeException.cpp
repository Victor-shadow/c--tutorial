#include <iostream>
#include <vector>
using namespace std;

vector<int> v = {1, 2, 3};

int main(){
    try{
        //Access out of bound element
        v.at(10);
    }
    catch(out_of_range e){
        cout << "Caught: " << e.what();
    }
    return 0;
}