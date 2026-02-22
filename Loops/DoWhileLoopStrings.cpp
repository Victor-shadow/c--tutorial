#include <iostream>
using namespace std;

int i = 0;
int main(){
    //Outer do-while Loop
    do{
        int j = 0;
        //Inner do-while loop to print each character
        do{
            cout << " *";
            j++;
        } while (j < 4);
        cout << endl;
        i++;
    } while (i < 4);
    return 0;
}