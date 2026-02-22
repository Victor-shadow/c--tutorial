#include <iostream>
using namespace std;

class A{
    public:
    //Instance variable with instance scope
    int instanceVar;
    A(int value){ //Constructor 
        instanceVar = value; 
    }

    void display(){
        cout << instanceVar << endl;
    }
};

int main(){
    //Create an object of Class A
    A obj(1000);
    //Access instance variable using the object
    obj.display();
    A obj2(2000);
    obj2.display();

    return 0;
}