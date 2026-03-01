#include <iostream>
using namespace std;

//class
class Exception{
    public: Exception(){
        cout << "Object Created: " << endl;
    }
    virtual ~Exception(){
        cout << "Object Destroyed: " << endl;
    }
};

int main(){
    try{
        cout << "Inside try block: " << endl;
        Exception except;
        throw 10;
        cout << "After throw: " << endl;
    }
    catch(int e){
        cout << "Exception caught: " << endl;
    }
    cout << "After caught: " << endl;
    return 0;
}