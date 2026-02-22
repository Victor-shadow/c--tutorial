// -C++ Structures allows one to define custom data types that group related variables
// of the same or different data types under a single name
// -To define a structure the struct keyword is used to group data members and member
// functions into a single user-defined type
// Variables can be declared without repeating struct keyword
// -Structures are used to build linked lists and trees

// Syntax:
// struct name{
//  type1 member_1; //fields/items
//  type2 member_2; //fields/items

// }

//It is not allocated any memory and cannot be used in the program directly
// Variables have to be created to use it

// Structure variable
// structure_name variable_name;

// A variable can also be declared with the definition of the Structure

//    struct name{
//    type1 name1;
//    type2 name2;
//     } variable1, variable2;

// INITIALIZE STRUCTURE MEMBERS
// Structure members cannot be initialized with declaration

// struct Name{
//  int x, y;
// };
// int main(){
//  //Initialize data members of structure
//  Point p1 = {0, 1}; //sequentially assigned to members of the Struct
//  //0 - x
//  //1 - y
//  return 0;
// }

// ACCESS AND MODIFY MEMBERS
// -Structure members are accessed using the dot operator and a new value can be assigned with the assignment
// operator

// Syntax
// var_name.member_name;
// var_name.member_name = new_val;

//MEMBER FUNCTIONS
//In C++ Functions can be declared inside the structure and are referred to as
//Member functions while variables are called data variables

//SIZE REFERENTIAL STRUCTURES
//These are structures that contain pointers to the same type as a member

//struct Name{
// int val;

//Pointer to the same type
//Name *ptr;
//}
//They are used in data structures such as linked list, trees

//NOTE: A structure can contain pointers to the same type, but not variables of the same type since
//it is impossible to derive the size information in the structure

//STRUCTURE WITH FUNCTION
//Structures can be passed by value or reference or returned from functions

//BIT FIELDS
//They allow one to define the number of bits that a particular data member can occupy
