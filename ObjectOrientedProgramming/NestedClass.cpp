#include <iostream>
using namespace std;

class Outer{
public:
    class Inner{
    public:
        void printOutput(){
            cout << "The value from an Inner class" << endl;
        }
    };
    void printInnerValue()
    {
        cout << "The value from an Outer class" << endl;
    }
};

int main(){
    //Create an object of the outer class
    Outer object;
    object.printInnerValue();
    //Create an Object of the Inner class using Outer
    Outer::Inner innerObject;
    innerObject.printOutput();

    return 0;
}