#include <bits/stdc++.h>
using namespace std;

int val = 100;
int main(){
    int *ptr = &val;
    int **ptr2 = &ptr;

    cout << "Size of the normal pointer: " << sizeof(ptr) << "\n";
    cout << "Size of double pointer: " << sizeof(ptr2) << "\n";

    return 0;
}