#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    try{
        //code that throws an Exception
        int x = 10;
        int y = 0;
        if(y == 0)
        throw runtime_error("Divide by zero_exception");
        int result = x / y;
    }
    catch(const runtime_error& e){
        cout << "Exception: " << e.what() << endl;
    }
    catch(...){
        cout << "An unknown error occurred: "<< endl;
    }
    return 0;
}