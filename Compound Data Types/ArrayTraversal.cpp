//Elements of an array can be traversed using a for loop that has a loop variable that runs from size 0 to -1.
//It serves as the index of the array and each element is accessed subsequentially
#include <iostream>
using namespace std;

int arr[5] = {100, 200, 300, 400, 500};
int main(){
    //Traverse and print arr
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
