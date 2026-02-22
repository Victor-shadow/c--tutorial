-A nested class is a class which is declared inside another enclosing class
It is a member and as such has the same access rights as any other member
Members of an enclosing class has no special access to members of a nested class

SYNTAX
#include <iostream>
using namespace std;

class EnclosingClass{
  //access modifier
  public:
  //Outer class data member
  DataType outerVariable;

  //NESTED CLASS
  class nestedClass{
    public:
    //Inner class data member
    DataType innerVariable;
    //Method that interacts with the enclosing class
    //A nested class does not know automatically which outer object it points to
    void innerMethod(EnclosingClass *pointerToOuter){
      //Access outer class via a pointer
      std::cout << pointerToOuter -> outerVariable;
      //Access its member
      std::cout << innerVariable;
    }
  },

};

int main(){
  //Create an OuterObject
  EnclosingClass outerObj;
  //Create an Inner Object(Inner is not in global space)
  //Syntax: OuterClass::InnerClass innerObject
  EnclosingClass::NestedClass innerObject;
  //Invoke Method
  innerObject.innerMethod(&outerObject);
  return 0;
}

NOTE: To define an inner method outside the class body
void EnclosingClass::NestedClass::innerMethod(EnclosingClass* e){
//logic
}