#include <iostream>
#include <memory>
using namespace std;

//Function that returns a smart pointer
shared_ptr<int> getSharedPointer(){
    return make_shared<int>(40);
}

int main(){
    //Call the function, store returned smart pointer
    const shared_ptr<int> ptr = getSharedPointer();
    //automatic memory deallocation
    cout << "Value: " << *ptr << endl;
    return 0;
}
