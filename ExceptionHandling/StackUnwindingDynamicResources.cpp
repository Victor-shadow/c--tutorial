#include <iostream>
#include <memory>
#include <stdexcept>
using namespace std;

void func(){
    //create a unique pointer that manages dynamic memory allocation
    unique_ptr<int> data(new int(10));
    cout << "Resource allocated: " << *data << endl;
    //throw the exception, stack unwinding destroys unique_ptr
    //The destructor of unique_ptr automatically frees allocated memory preventing memory leaks
    throw runtime_error("An error occurred");
}
int main(){
    try{
        func(); //invoke a function that can throw the exception
    }
    catch(const exception &str){
        cout << str.what();
    }
    return 0;
}