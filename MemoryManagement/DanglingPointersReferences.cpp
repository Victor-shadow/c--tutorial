#include <iostream>
using namespace std;

int &getReference(){
    //static keyword extends lifetime of a variable
    static int localVal = 100;
    return localVal;
}

int main(){
    const int& ref = getReference();
    cout << "Value: " << ref << endl;
    return 0;


}