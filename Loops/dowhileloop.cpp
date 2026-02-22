#include <iostream>
using namespace std;

int main(){
    //initialization
    int i = 1;
    //The do-while loop then starts with i = 1 and ends when i is greater than 5
    do{
        cout << i <<endl;
        //Update the value
        i++;
    }while(i <= 5);
    return 0;
}