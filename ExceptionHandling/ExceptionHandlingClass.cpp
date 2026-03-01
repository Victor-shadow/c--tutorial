#include <iostream>
using namespace std;

class ExceptionClass{ //Empty user-defined class

};
int main(){
    try{
        throw ExceptionClass(); //an object is thrown
    }
    catch(ExceptionClass e){ //catches the exception
        cout << "Caught Exception of the class";
    }
    return 0;
}