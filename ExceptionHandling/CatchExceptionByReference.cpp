#include <iostream>
using namespace std;

int main(){
    try{
        throw runtime_error("This is a runtime error");
    }
    catch(runtime_error &e){
        cout << "Caught: " << e.what();
    }
    return 0;
}