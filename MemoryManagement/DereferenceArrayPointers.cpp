#include <iostream>
using namespace std;

int arr[] = {100, 200, 300, 400, 500, 600};
int main(){
    //A reference to the array
    const int *ptr = arr;
    //dereferencing to print elements of the array
    cout << "Elements of the array: " << endl;
    for (int i = 0; i < 6; i++)
        cout << *(ptr + i) << endl << " ";
    return 0;
}