# Object Oriented Programming in C++ organizes code into classes and objects, allows program reusability and maintainability
# Structures code into logical units(classes and objects)
# Keeps related data and methods together
# Makes code reusable, scalable and modular
# Prevents unauthorized access to data

# ------------------------------------------------------------------------------------------
# CLASS
# A class is a user-defined blueprint or prototype or template from which objects are created
# It represents the set of properties or methods that are common to all objects of one type
# Class declarations in C++ can include:
# 1: Access specifiers:  A class can have members defined as public, private or protected to control access
# 2: The class name should follow name conventions starting with a capital letter
# 3:The class body is enclosed wtth braces {}  and defines data members and functions

# include <iostream>
# using namespace std;

# class Name{
#   public: DataType variable;

#   returnType methodName(){

# }
# };

# int main(){
#  //Create object
#   className objectName;
#  //Assign values
#   //object.attribute = "value"
#   attribute.methodName();
#   return 0;
# }

# ------------------------------------------------------------------------------------------

# OBJECT
# An object is the basic unit/entity of Object Oriented programming
# A typical C++ program creates many objects which interact with each other by invoking methods
# The objects perform the code, and visible to the user
# An object consists of:
# 1: State: It is represented by data members(attributes) of an object. It also reflects the properties of an object
# 2: Member functions: It is a collection of statements that perform some specific task and may return results to the caller
# 3: Behaviour: It is represented by member functions of an object. It reflects the response of objects to other objects
# 4: Identity: It is a unique name or reference given to an object that enables it interact with other objects

# ----------------------------------------------------------------------------------------

# include <iostream>
# using namespace std;

# class Name{
#    //instance variables

#   private: DataType variable;

#   public: //constructor
#     Name(dataType attribute, dataType1 attribute1){
#     this -> attribute1;
#      this-> attribute2;      
#      }

#     //getter method
#     returnType getterName(){
#      return attribute;
# } 

#     //getter method
#     returnType getterName2(){
#      return attribute2;
# } 

#    //setter method
#    returnType (returnType attribute){
#    this->attribute = attribute;
#       
#    }  

#    returnType (returnType attribute2){
#    this->attribute2 = attribute2;
#      
#    }  

#    returnType methodName(){
#    cout << "Print value: " << attribute <<endl;
#    cout << "Print value: " << attribute2 <<endl;
#    }
# };

# int main(){
#  //Create object
#   className objectName(attribute_value1, attribute_value2);
#    object.instanceMethod();
#   return 0;
# }

# -----------------------------------------------------------------------------------------

# PRINCIPLES OF Object Oriented Programming in C++
# Abstraction - It is the process of hiding the implementation details of an object/method and display the essential features to the user
# In C++ abstraction is achieved by use of abstract classes(classes that have atleast one pure virtual functions)


# Encapsulation - protection of data
# It is the process of binding data/attributes and methods into a single unit/class and restriction of access to data members
# Data is hidden from other classes and is only accessed through public methods
# Encapsulation is Achieved by declaring class variables as  private and declare public getter/setter methods
# Ensures data integrity / controlled access

# Inheritance
# It is a mechanism in C++ where a child class/derived class acquires the properties/attributes and behaviours/methods of another class
# It is achieved using  : followed by an access specifier(public, private, protected)

# Polymorphism - many forms of an object/method
# It refers to the state where the same method or an object behaves differently based on where it is placed/actual runtime class
# An entity can take many forms

# ADVANTAGES OF OBJECT ORIENTED PROGRAMMING OVER PROCEDURAL PROGRAMMING
# 1: By using objects and classes one can create reusable components/less duplication
# 2: It provides a clear and logical structure/ making code easier to understand, maintain and debug
# 3: It minimizes code repetition, leading to cleaner, maintainable code
# 4: It allows one to create modular components/quicker and efficient application development

# DISADVANTAGES OF OBJECT ORIENTED PROGRAMMING LANGUAGE
# 1: Object Oriented Programming has concepts such as classes, objects, inheritance. It may take time to learn
# 2: The code is divided into different classes and layers/ fixing of bugs can take more time
# 3: Object Oriented Programming leads to creation of many objects and use of more memory compared to simple programs 
