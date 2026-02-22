#include <iostream>
using namespace std;

int i = 0;
int main(){
    //Outer while loop
    while (i < 4){
        int j = 0;
        //Inner while loop
        while (j  < 4){
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;

}