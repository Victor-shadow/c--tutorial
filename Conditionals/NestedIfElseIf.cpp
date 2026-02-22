#include <iostream>
using namespace std;
int day = 4;
int main(){

    //Determine the day using if-else-if ladder
    if (day == 1){
        cout << "Monday";
    } else if (day == 2){
        cout << "Tuesday";
    } else if ( day == 3){
        cout << "Wednesday";
    } else if (day == 4){
        cout << "Thursday";
    }
    else{
        cout << "It is not a day of the week";
    }
    return 0;
}