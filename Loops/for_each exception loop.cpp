//If a function throws an exception or if any operations on iterators throws an exception
//for_each loop throws an exception and break terminates the loop

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void println(int a){
    cout << a * 2 << " ";
    if (a % 2 == 0)
    {
        /* code */
        throw a;
    }
}

struct  Class2{
    void operator() (int a){
        cout << a * 3 << " ";
        if(a % 2 == 0){
            throw a;
        }
    }
} object1;

int main(){
    //Initialize array
    int arr[5] = {100, 200, 300, 400, 500};
    cout << "Using Array" << endl;

    //print exception  using for_each
    try{
        for_each(arr, arr + 5, println);
    }
    catch(int i){
        cout << "\nThe Exception element is : " << endl;
    }
    cout << endl;

    try{
        for_each(arr, arr + 5, object1);
    }
    catch(int i){
        cout << "\nThe Exception element is: " << endl;
    }

    //Initialize vector
    vector<int> array1 = {1000, 2000, 3000, 4000, 5000};
    cout <<"\nUsing vector: " << endl;

    try{
        for_each(array1.begin(), array1.end(), println);
    }
    catch(int i){
        cout << "\nThe exception element is: " << i;
    }
    cout << endl;

    try{
        for_each(array1.begin(), array1.end(), object1);
    }
    catch(int i){
        cout << "\nThe Exception element is: " << i;
    }
    cout << endl;
}