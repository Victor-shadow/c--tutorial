- A pointer is a special variable that holds the memory address of another variable
rather than storing a direct value itself
- Pointers allow programs to access and manipulate data in memory efficiently
* When a pointer is accessed directly, the address it holds is accessed and not the
actual data stored in that location
- NOTE: A pointer can be used for allocated objects on the heap
- int *ptr declares a pointer that stores the address of an integer(Integer pointer)
  ptr = &x  stores the address of variable x in the pointer ptr
  *ptr = dereference operator. It gives access to the value stored at the memory address it points to

Create a pointer
data_type* name

-data_type: Type of data the pointer refers to
- name: Name assigned to the pointer
* : dereference operator

- Assign address
-The addressof operator(&) determines the address of any variable in C++
The address can be assigned to the pointer variable to initialize it

int val = 100;
int *ptr = &val; //the pointer stores the address of variable var using &
The pointer and the variable should be of the same type,Otherwise type mismatch error occurs

Dereferencing
- The process of accessing the value present at the memory address pointed by a pointer
is called dereferencing

Size of Pointers
-The size of a pointer in a system is equal for every pointer no matter what
type of data it points to
-It depends on the operating System and the CPU architecture
-The size of Pointers in C++ is:
  8 Bytes for a 64 bit System
  4 Bytes for a 32 bit System
-The Maximum width of a memory address is determined by the CPU architecture

WILD POINTERS
-When a pointer is created, it just contains a random address that may or may not be valid
This type of pointer is a wild pointer(uninitialized pointer)
-They point to some arbitrary memory location and can cause unexpected behaviour from a program
-Dereference to this pointer may lead to errors such as segmentation faults


#include <iostream>
using namespace std;

int main(){
  //Wild pointer
  int *ptr;
  return 0;
}

-A pointer to a value/set of values without having a variable for that value
memory should be explicitly allocated and the value put in that memory
int *ptr - valid since it points to some garbage memory by default
int *ptr = NULL //invalid points to nothing

int main{
int *p = (int *)malloc(sizeof(int));
//valid if Malloc does not return NULL
*p = 12;
}

NULL POINTERS
-It is a pointer which does not point to any valid memory location/address but NULL
Used to initialize a pointer
-It is commonly used during variable declaration to show that the pointer is not yet associated with
with any memory, and it is also returned by many in-built functions
-Attempt to dereference a null pointer results in an undefined behaviour

SYNTAX
int *ptrName = NULL; //C++ 11
int *ptrName = nullptr
int *ptrName = 0; //assign the value 0

#include <iostream>
using namespace std;

int main(){
    int* ptr = nullptr;
    if (ptr == nullptr){
        cout << "The pointer is currently null" << endl;
    }
    else{
        cout << "The pointer is not null" << endl;
    }
    //*ptr = 10 to avoid runtime error
    //Assign a valid memory address to the pointer
    int value = 10;
    ptr = &value;
    //check if the pointer is null after assigning a valid address
    if (ptr == nullptr){
        cout << "The pointer is still null" << endl;
    } else{
        cout << "The pointer is not null. " << endl;
        cout << "The value pointed at the memory location pointed to by the pointer" << *ptr << endl;
    }
    return 0;
}
   -To check Null Pointer
    ptrName = NULL
    ptrName = nullptr;


Applications of Null Pointers in C++
1: Null pointers act as default or initial values for pointers when no
valid address is assigned to the pointers
2: They are useful in Error conditions/signify absence of data to allow better exception handling
cases
3: They are used to release resources, like the destructor of a class, or to set pointers
to Null after deletion to use NULL pointers to avoid accidentally using or accessing released
memory
4: A null pointer can be used to indicate the end of a data structure or a linked list last node has a null pointer as the next
field
5: It is good practice to initialize pointers to a null value as it helps to avoid undefined behaviour
by explicitly pointing that they are not pointing to a valid memory location



#include <iostream>
using namespace std;

int main(){
  //NULL POINTER
   int *ptr = NULL;
   return 0;
}

VOID POINTER
-A void pointer(void*) is a special type of pointer in C++ that has no associated data type
-It can hold the address of any data type hence used in generic programming
-A void pointer cannot be directly dereferenced. It must first be explicitly typecast to the appropriate
pointer value
-It also referred to as a Generic pointer

SYNTAX:
void *ptr_name;
-It is useful where a single pointer handles different types of data dynamically

A)VOID POINTERS IN CALLBACK FUNCTIONS
-Functions that are passed as arguments to other functions are called callback functions
The void pointer provides flexibility to handle multiple data types
-Callback functions can be defined to accept void pointers as parameters to handle different
types of data

B)VOID POINTERS DYNAMIC MEMORY ALLOCATION
-Dynamic Memory allocation is performed in C++, where the size of the memory needed is not known at compile
time then one performs Dynamic memory allocation using new and malloc operators
-Void pointers can be used to allocate memory for any data type
-The new keyword is used for dynamic memory allocation which returns a pointer
to the allocated memory
After memory allocation, perform type casting to use allocated memory with a specific data type

ADVANTAGES OF VOID POINTERS
1: It can help reduce redundant code by allowing a single piece of code
to handle multiple data types
2: Void pointers allow abstraction of specific types in favour of a more generic interface
* common in polymorphic containers, callback systems
3: A void pointer can be declared to deal with polymorphism
4: They enhance platform independence where the size of representation of
data types may vary across different architectures

POINTER-TO-POINTER (DOUBLE POINTERS) - Pointers that point to other pointers
-When a pointer-to-pointer is defined, the first pointer is used to store the
memory address of the variable and the second pointer is used to store the address/location
of the first pointer

Declare a pointer-to-pointer in C++
-Use an additional *operator before the name of the pointer
data_type_of_pointer **name_of_variable = &normal_pointer_variable

#include <iostream>
using namespace std;

int var = 100;
int main(){
 //store the address of var
 int *ptr = &var;
 //store the address of ptr
 int **ptr2 = &ptr
 //Access the values using * operator
 cout <<*ptr<<endl;
 cout << **ptr2;

 return 0;
 }

FUNCTION POINTERS
-In C++ pointers store memory addresses
-They can be used to store addresses of a function
-A function pointer is used to point to functions. It allows one to save the address of a function
They can be used to call a function indirectly or pass a function as arguments to other functions enables
dynamic function invocation and flexibility in function handling
- It is also a variable that stores the address of a function with a specific return type and
parameter list

KEY USES
1: Calling functions indirectly
2: Passing functions as arguments
3: Implement a callback
4: Create a function table

Syntax:
return_type(*FuncPtr) (parameterType...)

REFERENCE A FUNCTION POINTER
-Assign a function address to the function pointer
FuncPtr = function_name;

DEREFERENCE A FUNCTION POINTER
-Invoke a function using a pointer
Syntax:
FuncPointer(100, 200);
(*FuncPointer)(100, 200)
ADDRESS OF A FUNCTION
-Every function resides in memory and therefore has an address
The name of a function can be used to find the address of a function
The address of a function can be obtained by writing the function name without ()

DANGLING POINTERS
-It is a pointer that refers to a memory which has already been freed or no longer valid
It typically happens when:
1: A pointer refers to a local variable that has gone out of scope
2: Dynamically allocated memory is deallocated using delete, but the pointer still
holds the old address

Dereferencing a dangling pointer leads to undefined behaviour


#include <iostream>
using namespace std;

int* getPointer(){
   int x = 100;
   //return address of local variable
   return &x;
}

int main(){
  //dangling pointer
  int *ptr = getPointer();
  //undefined behaviour
  //cout << *ptr;
  return 0;
}

-A pointer that refers to a memory location that has been deallocated earlier in the program
is a dangling pointer

Cases that lead to dangling pointers in C++
1: Deallocation of memory using delete() and free()
#include <iostream>
using namespace std;

int main(){
    //allocate memory
    const int *ptr = new int(5);
    //deallocate memory
    delete ptr;
    // now ptr is a dangling pointer
    cout << "It is a dangling pointer: " << endl;
    return 0;

}

2:Referencing to local variables of the function after execution

3:A local variable goes out of scope
#include <stdio.h>

int* getDanglingPointer(){
    int localVar = 1000;
    return &localVar; //return address of localVar

}

int main(){
    const int* danglingPointer = getDanglingPointer();
    //undefined behaviour
    printf("Value of dangling pointer: %d\n", *danglingPointer);
    return 0;

}

int *ptr = new int(5);
delete ptr; //ptr is a dangling pointer

//HANDLE DANGLE POINTERS
1: Assign null or nullptr to Pointers that are not in use
*Whenever done with a pointer, always assign it to NULL or nullptr and whenever
one accesses a variable, check if a pointer is NULL or nullptr then access it

#include <iostream>
using namespace std;

int main(){
    int* value = new int(11);
    //free it
    delete value;
    //assign nullptr
    value = nullptr;
    //check null before access value
    if (value == nullptr)
        cout << "Memory is deallocated" << endl;
    else{
        cout << "No deallocation" << endl;
    }
    return 0;

}

Using smart Pointers
* Wrapper classes over the raw pointers
They are designed to avoid cases of dangling pointers along with pointer risks
and errors

SMART POINTERS
-It is a wrapper class around a pointer that overloads operators such as * or ->
Smart pointer objects resemble normal pointers, they automatically  deallocate and free
memory of the object when they are no longer needed

POINTER                                            REFERENCE
1: A pointer can be initialized after              A reference must be initialized at the
declaration                                        declaration

2: A pointer can be assigned NULL or               A reference cannot be null/refer to a valid
nullptr                                            object

3: A pointer can be reassigned to point            A reference cannot be reassigned
to different objects                               once bound to an object

USES OF POINTERS
1: Pointers allow memory to be allocated dynamically at runtime using new and delete operator
This enables the creation of objects or arrays whose sizes are determined during execution

2: Pointers are used to implement complex data structures: linked lists, tree, graphs where elements
dynamically allocated and linked together

------------------------------------------------------------------------------------------------------------------------
POINTER ARITHMETIC
-In C++ pointer arithmetic means performing valid arithmetic operations on pointer variables
to move and access memory locations efficiently
- The value of a pointer is incremented depending on the type of variable address stored
in the pointer
* An integer ptr holds address 1000 and the pointer is incremented by 4 or 8 bytes
the new address will be 1004 or 1008
* The value of the memory address stored by a pointer is decremented according to the size
of the type

ADDITION OF CONSTANTS TO POINTERS
*Integer values can be added to pointers and thus the pointer is adjusted based on the
size of the data type

An Integer ptr that stores the address 1000 and value 5 is added

 int* ptr
 ptr + 5

The new address is calculated as:
1000 + (5 * 4(size of an integer)) = 1020

SUBTRACTION OF CONSTANTS TO POINTERS
-One can also subtract a constant from Pointers
int* ptr
ptr - 5

1000 - (5 * 4(size of an integer)) = 980

SUBTRACTION OF TWO POINTERS OF THE SAME DATA TYPE
-Subtraction of two pointers can only be done when they are of the same data type
It gives the number of elements present between two memory addresses so it is primarily valid
if the two pointers belong to the same array
* In an arr[10], ptr1 points to the element at index 2 and ptr2 points to the elements at index 4
The difference between two pointers gives the number of elements present
  ptr2 - ptr1

COMPARISON OF POINTERS
*In C++ a comparison of two pointers (to null) can be done by use of relational operators
(> < = >= <= == !=)
Useful to check if two pointers refer to the same memory location or not

*Initialize new pointer Variables with NULL to make a check if a pointer
is assigned some null value

