-Encapsulation refers to the binding of data members and methods into a
single unit
* A class can hide the implementation part and display only the functionalities
required by other classes
By making class data and methods private, representations or implementations can later be
changed without affecting code that uses the class
* It helps in better data maintainability, readability and usability and it is useful
to maintain data integrity by allowing validation/control over the values assigned to variables

Implementation of Encapsulation in C++
i: Declare variables/attributes as private: Keeps the class data members private so that they cannot be accessed
directly from outside the class hence data is hidden
ii: Use getters and setters: Provide public functions(getters and setters) to access and modify private variables safely
These methods can also include validation to ensure only valid data is assigned
iii: Apply proper access specifiers: Use private for data members to hide information
and public for member functions that provide controlled access to data

Best Practices for encapsulation
1: Make class data private to hide implementation details and reduce coupling
2: Use getter and setter functions instead of public fields to control access
3: Ensure only valid values are assigned to private variables
4: Do not provide setters for data that should be modified externally

ADVANTAGES OF ENCAPSULATION
1: Data Hiding: Encapsulation restricts direct access to private class variables protecting
sensitive data from unauthorized access
2: Improves maintainability: Internal implementation of a class can be changed without affecting
code that uses the class
3: Enhanced Security; Encapsulation allows validation and control over data in setter methods
preventing invalid or harmful values
4: Code Reusability: Encapsulated classes can be reused in different programs
without exposing internal details
5: Better Modularity: Encapsulation keeps data and methods together in a class, and promotes modular code

DISADVANTAGES
1: Increased code complexity when writing getter and setter functions for each variable can make the
code longer and slightly complex
2: Accessing private data through functions instead of direct adds performance overhead
3: May lead to less flexibility due to restricted access

SYNTAX OF ENCAPSULATION
#include <iostream>
using namespace std;

class className{
 //private data member
   private: DataType variableName;

   //public setter
   public :void setVariableName(DataType newValue){
     variableName = newValue;
    }
    //public getter
       public: DataType getVariableName(){
         return variableName;
       }
   };

   int main(){
     ClassName object; //instantiate the object
     //set the value using the public method
     object.setVariableName(value);

     //Access the value
     cout << object.getVariableName() << endl;
     return 0;
  }
