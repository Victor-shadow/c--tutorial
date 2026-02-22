#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Function overloading with different types of parameters
class FunctionOverloading{
    public: void add(int a, int b){
        cout << "Integer sum: " << a + b << endl;
    }
    //function to add two float values
    public: void add(double a, double b){
        cout << "Doubleclear numbers sum: " << a + b << endl;
    }
};

int main(){
    FunctionOverloading object;  //create an object
    //call add method using object
    object.add(100, 200);
    //add with double value
    object.add(100.5, 200.5);
    return 0;
}