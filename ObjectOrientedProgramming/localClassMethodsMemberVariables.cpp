#include <iostream>
using namespace std;

int x = 100; //global variables
void function()
{
    static int var = 10; //static variables
    enum
    {
        i = 10,
        j = 20,
    };
    class Local{
    public:
        void method()
        {
            cout << "Global x= " << x << endl; //correct as x is global
            cout << "Static var= " << var << endl;
            cout << "Enum i= " << i << endl; //correct as i is enum
        }
    };
    Local object;
    object.method();
}

int main(){
    function();
    return 0;
}