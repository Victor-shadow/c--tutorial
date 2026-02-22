//To change the element of an array at a particular index use the assignment operator = with the new value at the right
//array_name[index] = value;
#include <iostream>
using namespace std;

string arr[5] = {"Java", "Kotlin", "Scala", "Swift"};

int main(){
    //update the first element
    arr[0] = "C++";
    cout << "Size of arr: " << sizeof(arr) << arr[0] << endl;
    return 0;

}
