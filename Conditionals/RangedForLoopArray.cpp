#include <iostream>
using namespace std;

int arr[6] = {100, 200, 300, 400, 500, 600};
int main(){

    for (const int i: arr){ //i represents each element
        cout << i << endl;
    }
    return  0; //successful termination of the program

}