-It refers to the new meaning given to operators (+, -, *, []) which are
used with objects
Operators work for user defined class structures
-It is a compile time polymorphism mechanism

Operator overloading is used:
1: To Allow objects behave as basic data types
2: Reduces the need for extra function calls
3: Used for mathematical functions and objects such as Vectors and Complex numbers

Operator function                                     Normal functions
1: Use the Operator keyword                           Standard function name
2: Triggered by use of an operator                    Called explicitly by name
3: Redefines behaviour of operators                   Performs defined actions

Operators that cannot be overloaded
1: sizeof Operator
* Evaluated at compile time
* Used internally for memory layout and pointer arithmetic
* Overloading breaks fundamental language behaviour

2: typeid operator
* used for runtime type identification
* Must uniquely identify a type
* Altering its meaning breaks RTTI/polymorphism

3: Scope resolution operator(::)
*Works on names, not values
*Fully resolved at compile time
*There is no syntax to intercept or overload name resolution

4: Class Member Access Operators(. .*)
*Implicitly used by the compiler to access members
*Overloading breaks object access semantics

5: Ternary or conditional(?:) operator
* Evaluates only one of the two expressions based on a condition
* Function calls cannot enforce short-circuit evaluation
* Overloading would break conditional execution guarantees

Operator Overloading
-At least one operand must be a user-defined type
- Operators can be overloaded as member or non-member functions
-Some operators(conversion operators) must be member functions

Conversion Constructors
- Any constructor called within a single argument acts as a conversion constructor and enables
implicit type conversion