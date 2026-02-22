//This loop accepts a function which executes over each element in a data set
//It is defined in the header file algorithm
#include <algorithm>
//It has to be included to use for_each loop
//1: It is versatile and Can work over each container
//2: It reduces chances of error one can commit with a general loop
//3: It makes code more readable
//4: It improves overall performance of the code

//Syntax
//for_each(start_iterator, end_iterator, function);
//start_iterator: Start position of the loop
//end_iterator: End position of the loop
//function: Object Function /operation to be executed after each iteration

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//helper function
void print1(int x){
    cout << x * 2 << " ";
}

//Object function
struct Class2{
    void operator() (int x){
        cout << x * 3 << " ";
    }
} obj;

int main(){
    //Initialize an array
    int arr[5] = {100, 200, 300, 400, 500};

    cout << "Using a helper function: ";
    //print array using for_each
    cout << "Multiple of 2 of elements are: ";
    for_each(arr, arr + 5, print1);

    cout << endl;


    cout << "Multiple of 3 of elements are: ";
    for_each(arr, arr + 5, obj);

    cout << endl;

    //Initialize a vector
    vector<int> arr1 = {500, 1000, 1500, 2000, 2500};

    cout << "Using Vectors: " << endl;

    cout << "Multiple of 2 of elements are: ";
    for_each(arr1.begin(), arr1.end(), print1);

    cout << endl;

    cout <<"Multiple of 3 of elements are: ";
    for_each(arr1.begin(), arr1.end(),print1);

    cout << endl;
}