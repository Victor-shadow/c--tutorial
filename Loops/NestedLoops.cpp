#include <iostream>
using namespace std;

int main(){
    int i = 1;

    do{ //outer do-while loop runs 2 times
        int j = 1; //Initialize inner loop variable
        while (j <= 2){ //Inner while loop - runs fully for each outer loop iteration
            for (int k = 1; k <= 3; k++){ //Inside for loop(prints  numbers 3 times in each while loop)
                cout << i << j << k << "" << endl ;
            }
            cout << endl;
            j++;
        }
        i++;
    } while (i <= 2);
    return 0;

}