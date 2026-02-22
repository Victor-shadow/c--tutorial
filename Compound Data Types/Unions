-In C++, a union is a user-defined data type that can hold members of different
data types
-The size of a union is always equal to the size of the largest member of the union
All smaller elements can store data in the same space without any overflow
Members of a union are stored in the same memory location and changing the value of one member
overwrites the value of others

A union is declared similarly to a structure
*Provide the name of the union and define its member variables

union Name{
  type1 member_1;
  type2 member2;
};

//Create a union variable
union_name variable_name;

Declare a variable at the declaration of union
union Name{
   type1 member_1;
   type2 member_2;
}variable_name;

Nested Union
- A union can be defined within a structure, class or another union
- This allows organized and related data can be accessed while sharing memory among
union members

union name1{
  //Data members of name1
   union name2{
     //Data members of name2
     };//inner union
};

Anonymous unions
It is a union without a name whose members can be accessed directly and behave as members of the outer structure
or union

Unions are used for memory efficiency in embedded systems
They map hardware registers with multiple interpretations
