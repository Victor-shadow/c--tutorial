#include <iostream>
using namespace std;

class A{
   public: A(){
      cout << "A's constructor is invoked: " << endl;
   }
};

class B {
public: B()
{
   cout << "B's constructor is invoked: " << endl;
   }
};

class C: public B, public A{
   public: C(){
      cout << "C's constructor is invoked: " << endl;
   }
};

int main(){
   C c;
   return 0;
}