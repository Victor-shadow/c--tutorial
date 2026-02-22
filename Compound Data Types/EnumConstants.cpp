#include <iostream>
using namespace std;

//Define enum
enum fruit{
    APPLE,
    BANANA = 5,
    ORANGE,
};

int main(){
    //Create enum variable
    fruit f = BANANA;
    cout << f << endl;
    //Change the value
    f = ORANGE;
    cout << f;
    return 0;

}