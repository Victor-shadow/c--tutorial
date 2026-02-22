#include <iostream>
using namespace std;


int x;
void mainFunc(){
    //First local class
    class LocalClassA
    {
    public:
        LocalClassA()
        {
            cout << "localClassA::localClassA()" << endl;
        }
    };

    class LocalClassB
    {
        //A local class can use other local variables
        LocalClassA objectB;

    public:
        void method()
        {
            //Local class member methods can access global variables
            cout << "x= " << x << endl;
        }
    };
LocalClassB obj;
    obj.method();
}

int main()
{
    mainFunc();
    return 0;
}