- A class declared inside a function becomes local to that function and it
is referred to as a Local class in C++
Local class - A class defined inside a function block
-Local variables are usually stored on the stack and destroyed once a function returns a value
hence C++ restricts local classes from access to non-static variables due to lifetime of objects
in memory


NOTE
1: A local class type name can only be used in the enclosing function
* A local class name can only be used locally; inside the function and not outside it
* The methods of a local class must be defined inside it only
* A local class can have static functions but not static data members
* Member methods of the local class can only access static and enum variables of the enclosing
function. Non static variables of the enclosing functions are not accessible inside local classes

SYNTAX OF LOCAL CLASSES
I)returnType Function(){
  //Local class definition
  class LocalClassName{
  public:
    returnType methodName(){
    //Logic inside the class
    }
    };
    //create the object
    LocalClassName objectName;
    objectName.methodName();
    }


II)returnType FunctionA(){
   //first local class
   class localClassA{
   /*----*/
};

//Second local class
   class localClassB{
    localClassA objectA;//valid
    returnType method(){
    //can access global variable or a static variable
    }
  }
 }

III)
#include <iostream>

// Global scope variable
DataType globalVariable;

// Enclosing function
returnType NameFunction()
{
    // Static variables of the function are accessible
    static DataType staticLocalVar;

    // Enumerations of the function are accessible
    enum {
    CONST_VAL = value
     };

    // --- LOCAL CLASS DEFINITION ---
    class LocalClassName {
    public:
        // Methods MUST be defined inside the class body
        returnType method() {
            // Accessing global scope
            std::cout << globalVariable;

            // Accessing static/enum from enclosing function
            std::cout << staticLocalVar;
            std::cout << CONST_VAL;

            // NOTE: Cannot access regular local variables here!
        }
    };

    // Instantiate and use the class INSIDE this function
    LocalClassName objectName;
    objectName.method();
}

int main()
{
    // Call the function containing the local class
    NameFunction();

    // ERROR: LocalClassName is not visible in main()
    // LocalClassName anotherObject;

    return 0;
}