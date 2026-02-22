//Lambda expressions in C++ are anonymous inline functions that allow writing of small piece of logic directly
//at the place of use
//They improve code readability by keeping behaviour closely to where it is applied and remove the need
//for separate named functions

//It is used in callback, Event Handling for asynchronous tasks and events
//Used in custom logic to algorithms like Search, Sort, for_each and find_if in C++ STL

//SYNTAX
[](type of variable) {
  return variable type expression
}
[] // lambda/anonymous function
//Parameters: They are similar to the function parameters
//The return type in lambda expressions is determined by the compiler itself

//CAPTURE CLAUSE
//A lambda expression can have more power than an ordinary function by having access to variables from the enclosing scope
//External variables can be captured from the enclosed scope
//[&] - captures external variables by reference
//[=] - captures external variables by value
//[a, &b] - capture a by value and b by reference

//A lambda with an empty capture clause[] can only access variables which are local to it
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v){
    for (auto x: v){
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
    auto byRefVal = [&v1, v2](int m) mutable{
        v1.push_back(m);
        v2.push_back(m);
    };

    byReference(20); //modifies vector v1 and v2
    byValue(100); //modifies copies , originals do not change
    byRefVal(200); //modifies only v1 since v2 is captured by value
    return 0;
}
