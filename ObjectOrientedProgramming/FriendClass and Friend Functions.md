- In C++ friend functions and friend classes allow certain functions or classes to access the private and protected members of another class

FRIEND CLASS IN C++
- A friend class can access private and protected members of other classes in which it is declared as a friend
- A friend class can be declared in C++ using the friend keyword
- NOTE: One can declare a friend class or function anywhere in the base class body whether
it is private, public or protected

FRIEND FUNCTION IN C++
- A friend function can be granted special access to private and protected members of a class in C++
- They are not member functions of the class but can access and modify/manipulate the private and protected members of that class for they are declared as friends
- A friend function can be:
- i: A global function
- ii: A member function of another class

NOTE: Any global function can be declared as a friend function, the keyword friend is only placed in the function declaration of the friend function and not in the function call or definition

- Member function of Another class as a Friend function
- One can also declare a member function of another class as a friend function in C++
- forward declaration of the class is needed, if one wants to make a member function of another class a friend inside that class

- The Order in which the friend function is defined of another class is important and should be taken care of
- One has to define both the classes before function definition

- SYNTAX
------------------------------------------------------------------------------------------
1: Global Friend Function(Access Multiple classes)
  # include <iostream>
  using namespace std;
  //forward declaration of class B
  class ClassB;

  class ClassA{
    private: DataType private_variable_A;

    public: void setData(DataType value){
        private_var_A = value;
    
    }
    //friend function declaration
    friend ReturnType FriendFunction(ClassA, ClassB);
  };

  class ClassB{
    private: DataType private_var_B;
    public: void setData(DataType value){
        private_var_B = value;
    }

    friend ReturnType FriendFunction(ClassA, ClassB);
  };

  //Define the friend function
  ReturnType FriendFunction(ClassA objA, ClassB objB){
    //access private members directly
    if(objA.private_var_A > objB.private_var_B){
        cout <<objA.private_var_A << endl;
    } else {
        cout <<objB.private_var_B << endl;
    }
  }

  int main(){
    ClassA object;
    ClassB object2;
    object.SetData(Value1);
    object2.SetData(Value2);

    FriendFunction(object, object2);
    return 0;
  }
------------------------------------------------------------------------------------------

2: MEMBER FUNCTION
  #include <iostream>
  using namespace std;

  class TargetClass;

  class FriendClass{
    public: ReturnType MemberFunction(TargetClass& obj);
  }

  class TargetClass{
    private: DataType private_member;
    protected: DataType protected_member;

    public: TargetClass(){/* Initialize variables */}
    //Grant access to only specific member function
    friend ReturnType FriendClass::MemberFunction(TargetClass&);
  };

  void FriendClass::MemberFunction(TargetClass& obj){
    cout <<" Access Private members: " <<obj.private_member << endl;
    cout <<"Access Protected members:"<<obj.protected_member << endl;
  };

  int main(){
    TargetClass targetObj;
    FriendClass friendObj;
    friendObj.MemberFunction(targetObj);
    return 0;
  }
-----------------------------------------------------------------------------------------

3: GLOBAL FRIEND FUNCTION
#include <iostream>
using namespace std;

class ClassName{
    private: DataType private_data;
    public: ClassName(){ private_data = InitialValue;
    }
    //Friend declaration
    Friend ReturnType GlobalFunction(ClassName &obj);
};

returnType GlobalFriend(ClassName &obj){
    cout << "Value: " <<obj.private_data << endl;
}

int main(){
    ClassName object;
    GlobalFriend(object);
    return 0;
}

------------------------------------------------------------------------------------------

4: FRIEND CLASS FULL ACCESS
#include <iostream>
using namespace std;

class HostClass{
    private: DataType private_var;
    protected: DataType protected_var;

    public: HostClass(){}
    //friend class GuestClass;
};


class GuestClass{
    public: void display(HostClass &obj){
        cout << obj.private_var << " " << obj.protected_var << endl;
    }
};

int main(){
    HostClass h;
    GuestClass g;
    g.display(h);

    return 0;
}
------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------
- FRIEND FUNCTIONS
------------------------------------------------------------------------------------------
- ADVANTAGES                                       DISADVANTAGES
1: Access private and protected                       Violates data hiding by exposing
   members without inheritance                        private members

2: Enables controlled data sharing                    Breaks encapsulation when overused
   between classes

3: Useful for operator overloading                    Does not support runtime
   flexibility                                        polymorphism

4: Can be declared in any access                      Friendship is not inherited
   section of a class                                 in derived classes

------------------------------------------------------------------------------------------