#include <iostream>
using namespace std;

void mainMethod(){
    //local class
    class localClass{
    public:
        void function(){
            cout << "This is a method defined inside a local class" << endl;
        }
       static void methodA(){
      cout << "Local class static method invoked" << endl;
      }
    }; //end of class
//fine  localClass t;
    // localClass *t;

   localClass::methodA(); //use scope resolution operator for static method

    localClass t;
    t.function();
}//end of function

int main(){
    mainMethod();
    //error localClass t;
    //error localClass *t;
    return 0;
}