//They are substitute for long if statements that compare a variable to integral values
//Dispatches execution to different parts of code based on the value of expression

#include <iostream>
using namespace std;

int x = 1, y = 2;
int main(){
    //outer switch
    switch (x){
        //if x == 1
    case 1:
        //Nested Switch
        switch (y){
            //if y == 2
    case 2:
            cout << "Choice is 2";
            break;
    case 3:
            cout << "Choice is 3";
            break;
        default:
            cout << "Choice is Invalid";
        }
        break;

    case 4:
        cout << "Choice is 4";
        break;

    case 5:
        cout << "Choice is 5";
        break;

    case 6:
        cout << "Choice is 6";
        break;

    default:
        cout << "Choice is other than 1,2,3,4,5 or 6";
    }
    return 0;
}