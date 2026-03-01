#include <iostream>
using namespace std;

int main(){
    int num = 10;
    int denominator = 0;
    int res;

    //check division by 0
    try{
        if(!denominator){
            //Pass custom message
            throw runtime_error("Division by Zero.");
        }
        res = num/denominator;
    }
    catch(const runtime_error& e){
        cout << "Caught: " << e.what();
    }
    return 0;
}