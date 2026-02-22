#include <iostream>

//A Macro that has a value which is another macro
#define ALL_USERS FB_USERS
#define FB_USERS 100

using namespace std;
int main(){
    cout << "The number of users is: " << ALL_USERS << endl;

    return 0;
}