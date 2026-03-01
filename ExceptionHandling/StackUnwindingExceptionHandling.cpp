#include <iostream>
using namespace std;
//If there are local objects in f1() and f2() destructors for these local objects would have been called in the StackUnwinding process

//function f1() that throws an exception and terminates immediately, its stack frame is removed since there is no catch
void f1(){
    cout << "f1() Start\n";
    throw 100;
    cout << "f1() End\n"; //not executed
}
//function f2() that calls f1()
void f2(){ //it is also removed from its stack frame 
    cout << "f2() Start\n";
    f1();
    cout << "f2() End\n"; //not executed
}
//function f3() that handles the exception
void f3(){ //catches exception
    cout << "f3() Start\n";
    try{
        f2();
    }
    catch(int i){
        cout << "Caught Exception: " << i << endl;
    }
    cout << "f3() End\n";
}

int main(){
    f3();
    return 0;
}
