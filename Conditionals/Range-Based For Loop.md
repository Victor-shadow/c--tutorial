//It is a loop that is able to iterate over a range. such as arrays, strings and STL containers

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    //Iterate through the vector
    for (int i : v){ //the vector is iterated using a ranged for loop
        cout << i << " ";
    }
    return 0;
}

//SYNTAX
for (variable type: array/vector/string){
    //statements
}
//Variable type: represents each element in the range

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};

    //Increment each element
    for (auto i: v){
        i++;
    }
    for (auto &i: v){
        i++;
    }
    //Iterate through the vector
    for (auto &i : v)
        cout << i << " ";
    return 0;
}
