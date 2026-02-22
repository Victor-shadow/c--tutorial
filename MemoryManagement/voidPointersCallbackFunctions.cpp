#include <iostream>
using namespace std;

//Callback functions
void callbackFunction(void *data, char dataType){
    switch (dataType){
    case 'i':
        cout << "Callback for Integer: " << *(int*)data << endl;
        break;
    case 'd':
        cout << "Callback for double: " << *(double*)data << endl;
        break;
    default:
        cout << "Unsupported data type" << endl;
    }
}
//function that takes a callback
void performOperation(void *data, char dataType, void(*callback)(void*, char)){
    //Invoke the callback function
    callback(data, dataType);
}

int main(){
    int intValue = 07;
    double doubleValue = 10.5;
    //perform operation with Integer and callback
    performOperation(&intValue, 'i', callbackFunction);
    performOperation(&doubleValue, 'd', callbackFunction);
    return 0;

}

