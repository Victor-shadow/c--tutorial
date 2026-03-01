#include <iostream>
using namespace std;

int main(){
    try{
        throw runtime_error("This is runtime exception.");
    }
    //catch by value
    catch(runtime_error e){
        cout << "Caught: " << e.what();
    }
    return 0;
}
