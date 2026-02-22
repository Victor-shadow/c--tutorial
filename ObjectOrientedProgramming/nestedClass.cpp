//
// Created by victor on 2/21/26.
//
#include <iostream>
using namespace std;

class Enclosing{
public:
  int x = 10;

   class NestedInner{
     public:
       char y = 'A';
       void innerClass(Enclosing *e) const{
       //nested class can access private members of an Enclosing Class
         cout << "This is an outer class: " << e -> x << endl;
         cout << "Value from inner class: " << y << endl;
     }
   }; //NestedInner class ends
// void encloseFunc(innerClass *e){

//results in an error cout << "This is a value in the inner class: " << e -> y << endl;
//}
}; //Enclosing class ends

int main(){
//create an instance of Enclosing class
Enclosing object;
//Instance of nested class
//OuterClass::InnerClass
Enclosing::NestedInner object2;
//invoke the method then pass  address of the outer object
object2.innerClass(&object);
   return 0;
}