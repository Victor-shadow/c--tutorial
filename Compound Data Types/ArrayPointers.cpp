#include <iostream>
using namespace std;

int arr [] = {100, 200, 300, 400, 500};
int main(){
    //Define a pointer to the first element
    const int *pointer = arr;

    for (int i = 0; i < 5; i++)
    cout << *(pointer + i) << " ";
    return 0;

}