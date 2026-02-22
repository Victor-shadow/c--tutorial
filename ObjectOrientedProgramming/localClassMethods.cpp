#include <iostream>
using namespace std;

void fun(){
    //local class
    class Local
    {
    public:
        //A local class cannot have static variables: static int i;
        //fine
        //method defined inside local class
        void localMethod(){
            cout << "This is a method defined inside a local class" << endl;
        }
    };
    //Error as method is defined outside local class
    //void Local::localMethod(){ cout << "Local class method()" << endl;
    Local t; //fine
    t.localMethod();
}

int main()
{
    fun();
    return 0;
}