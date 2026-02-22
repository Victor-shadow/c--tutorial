#include <iostream>
using namespace std;

class Parent{
   private: int private_variable;
   protected: int protected_variable;
   public: Parent(){
      private_variable = 10;
      protected_variable = 20;
   }
   //declare friend class
   friend class Host;
};

class Host{
public: void displayOutput(Parent& p){
   cout << "The value of the private variable: " <<p.private_variable << endl;
   cout << "The value of the protected variable: " <<p.protected_variable << endl;
    }
};

int main(){
   Parent object;
   Host host;
   host.displayOutput(object);
   return 0;

}